#include "include.h"

void transformCom(Menu& menu) {
	Menu::Command::update(menu);

	Mat img2;
	if (menu.getValue("mode") == "photo") {
		Transformer::base = imread(menu.getValue("basefile"));
		img2 = imread(menu.getValue("extrafile"));

		imwrite("base.png", Transformer::base);
		imwrite("extra.png", img2);
	} else if (menu.getValue("mode") == "video") {
		cout << "contains in TODO list" << endl;
		return;
	}

	Transformer::transform(Transformer::base, img2);

	resize(Transformer::result, Transformer::preShow, Size(Transformer::result.cols * Mouse::getScale(),
														   Transformer::result.rows * Mouse::getScale()));

	imshow("preShow", Transformer::preShow);
}

int brushSize = 50;
int alpha = 50;

void callbackBrush(int dir) {
	for (int x = Mouse::getX() / Mouse::getScale() - brushSize; x < Mouse::getX() / Mouse::getScale() + brushSize; ++x) {
		if (x < 0) continue;
		if (x >= Transformer::mixMask.cols -1 ) continue;
		for (int y = Mouse::getY() / Mouse::getScale() - brushSize; y < Mouse::getY() / Mouse::getScale() + brushSize; ++y) {
			if (y < 0) continue;
			if (y >= Transformer::mixMask.rows - 1) continue;

			Transformer::mixMask.at<float>(y, x) += alpha * dir / 100.0;
			if (Transformer::mixMask.at<float>(y, x) > 1) Transformer::mixMask.at<float>(y, x) = 1.0;
			if (Transformer::mixMask.at<float>(y, x) < 0) Transformer::mixMask.at<float>(y, x) = 0.0;
		}
	}

	Transformer::base.copyTo(Transformer::mix);
	for (int x = 0; x < Transformer::mix.cols - 1; ++x) {
		for (int y = 0; y < Transformer::mix.rows - 1; ++y) {
			if (Transformer::result.at<Vec3b>(y, x) == Vec3b(0, 0, 0)) continue;

			Transformer::mix.at<Vec3b>(y, x)[0] *= Transformer::mixMask.at<float>(y, x);
			Transformer::mix.at<Vec3b>(y, x)[1] *= Transformer::mixMask.at<float>(y, x);
			Transformer::mix.at<Vec3b>(y, x)[2] *= Transformer::mixMask.at<float>(y, x);

			Transformer::mix.at<Vec3b>(y, x)[0] += Transformer::result.at<Vec3b>(y, x)[0] * (1 - Transformer::mixMask.at<float>(y, x));
			Transformer::mix.at<Vec3b>(y, x)[1] += Transformer::result.at<Vec3b>(y, x)[1] * (1 - Transformer::mixMask.at<float>(y, x));
			Transformer::mix.at<Vec3b>(y, x)[2] += Transformer::result.at<Vec3b>(y, x)[2] * (1 - Transformer::mixMask.at<float>(y, x));
		}
	}

	resize(Transformer::mix, Transformer::preShow, Size(Transformer::result.cols * Mouse::getScale(),
														   Transformer::result.rows * Mouse::getScale()));
}

void brushCom(Menu& menu) {

	createTrackbar("size", "preShow", &brushSize, 500, nullptr);
	createTrackbar("transp", "preShow", &alpha, 100, nullptr);

	callbackBrush(0);
	while (Mouse::getKey() != 27) {
		imshow("preShow", Transformer::preShow);

		int k = Mouse::getK();
		if (k != 0) {
			callbackBrush(k);
		}
		Mouse::waitKey(10);
	}
}

void saveCom(Menu& menu) {
}

int main() {
	Menu menu;
	menu.add("mode", "photo");
	menu.add("basefile", "D:/Users/Maximilian/Downloads/E0C2u6S7YMo.jpg");
	menu.add("extrafile", "D:/Users/Maximilian/Downloads/9v7rAiWU-jg.jpg");
	menu.add("scale", "100");

	menu.add("exit", Menu::Command::exit);
	menu.add("update", Menu::Command::update);
	menu.add("transform", transformCom);
	menu.add("brush", brushCom);
	menu.add("save", saveCom);

	imshow("preShow", Mat(1, 1, CV_8UC3));
	setMouseCallback("preShow", Mouse::callBack, (void*) (&callbackBrush));

	menu.draw();
	while (menu.getState() != Menu::INACTIVE) {
		menu.checkInput();


		Mouse::waitKey(10);
	}

	destroyAllWindows();
	return (0);
}