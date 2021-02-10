cmake_minimum_required(VERSION 3.15)
project(video)

set(CMAKE_CXX_STANDARD 20)

add_executable(video main.cpp Menu.cpp)

target_include_directories(video PUBLIC D:/Programming/libraries/opencv-4.4.0/cmake-build-casual/install/include)
target_link_libraries(video D:/Programming/libraries/opencv-4.4.0/cmake-build-casual/install/x64/mingw/bin/libopencv_world440.dll
                            D:/Programming/libraries/opencv-4.4.0/cmake-build-casual/install/x64/mingw/bin/opencv_videoio_ffmpeg440_64.dll)