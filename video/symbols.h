//
// Created by Maximilian on 27.07.2020.
// Constants
//

#ifndef VIDEO_SYMBOLS_H
#define VIDEO_SYMBOLS_H

#define TEXTCOLOR !FOREGROUND_BLUE | !FOREGROUND_GREEN | !FOREGROUND_RED | !FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY
#define CURSORCOLOR !FOREGROUND_BLUE | FOREGROUND_GREEN | !FOREGROUND_RED | !FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY

#define REDRAW 1;

/*
176:░ _1	177:▒ _2	178:▓ _3	179:│ _4	180:┤ _5	181:╡ _6	182:╢ _7	183:╖ _8	184:╕ _9	185:╣ _10
186:║ _11	187:╗ _12	188:╝ _13	189:╜ _14	190:╛ _15	191:┐ _16	192:└ _17	193:┴ _18	194:┬ _19	195:├ _20
196:─ _21	197:┼ _22	198:╞ _23	199:╟ _24	200:╚ _25	201:╔ _26	202:╩ _27	203:╦ _28	204:╠ _29	205:═ _30
206:╬ _31	207:╧ _32	208:╨ _33	209:╤ _34	210:╥ _35	211:╙ _36	212:╘ _37	213:╒ _38	214:╓ _39	215:╫ _40
216:╪ _41	217:┘ _42	218:┌ _43	219:█ _44	220:▄ _45	221:▌ _46	222:▐ _47	223:▀ _48
 */

#define _00 << char(32)
#define _01 << char(176)
#define _02 << char(177)
#define _03 << char(178)
#define _04 << char(179)
#define _05 << char(180)
#define _06 << char(181)
#define _07 << char(182)
#define _08 << char(183)
#define _09 << char(184)
#define _10 << char(185)
#define _11 << char(186)
#define _12 << char(187)
#define _13 << char(188)
#define _14 << char(189)
#define _15 << char(190)
#define _16 << char(191)
#define _17 << char(192)
#define _18 << char(193)
#define _19 << char(194)
#define _20 << char(195)
#define _21 << char(196)
#define _22 << char(197)
#define _23 << char(198)
#define _24 << char(199)
#define _25 << char(200)
#define _26 << char(201)
#define _27 << char(202)
#define _28 << char(203)
#define _29 << char(204)
#define _30 << char(205)
#define _31 << char(206)
#define _32 << char(207)
#define _33 << char(208)
#define _34 << char(209)
#define _35 << char(210)
#define _36 << char(211)
#define _37 << char(212)
#define _38 << char(213)
#define _39 << char(214)
#define _40 << char(215)
#define _41 << char(216)
#define _42 << char(217)
#define _43 << char(218)
#define _44 << char(219)
#define _45 << char(220)
#define _46 << char(221)
#define _47 << char(222)
#define _48 << char(223)


#endif //VIDEO_SYMBOLS_H
