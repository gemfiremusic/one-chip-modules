#ifndef GB_KICK_H_
#define GB_KICK_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define GB_KICK_NUM_CELLS 1629
#define GB_KICK_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) GB_KICK_DATA [] = {-46,
-115, -103, -107, -101, -101, -97, -95, -92, -89, -87, -86, -83, -81, -79, -77,
-75, -72, -72, -69, -68, -65, -64, -62, -61, -59, -57, -56, -54, -53, -51, -50,
-48, -47, -45, -44, -43, -42, -41, -40, -38, -37, -36, -36, -34, -33, -32, -31,
-30, -29, -29, -28, -27, -26, -25, -24, -24, -23, -22, -19, -17, -19, -19, -18,
-18, -17, -18, -12, -7, -6, -7, -6, -6, -4, -5, -5, -5, -4, -4, -4, -4, -3, -3,
-3, -2, -3, -1, -2, 0, -3, 1, -3, 3, -4, 7, -13, 41, 118, 107, 111, 103, 104,
99, 99, 94, 95, 90, 90, 84, 88, 77, 93, 38, -43, -31, -38, -31, -35, -30, -32,
-29, -30, -28, -27, -27, -25, -25, -24, -24, -22, -21, -20, -21, -19, -20, -18,
-18, -16, -16, -16, -16, -14, -14, -14, -13, -12, -12, -12, -11, -11, -10, -10,
-9, -9, -8, -8, -8, -7, -7, -7, -6, -6, -5, -4, -5, -4, -5, -3, -4, -2, -3, -3,
-3, -2, -3, -1, -2, -1, -2, -1, -1, -1, 0, 0, 1, -1, 2, -2, 4, -3, 8, -13, 45,
127, 118, 122, 116, 119, 111, 108, 105, 103, 101, 97, 96, 92, 92, 88, 87, 84,
83, 80, 79, 76, 75, 73, 71, 70, 67, 68, 62, 67, 55, 73, 17, -65, -53, -59, -54,
-55, -52, -51, -50, -47, -47, -46, -45, -43, -43, -40, -40, -38, -38, -36, -36,
-34, -34, -32, -32, -31, -30, -29, -28, -27, -26, -26, -25, -24, -23, -22, -22,
-21, -21, -19, -20, -17, -18, -18, -17, -16, -16, -15, -15, -14, -14, -14, -12,
-13, -11, -12, -9, -13, -8, -13, -6, -13, -1, -23, 35, 123, 110, 115, 106, 109,
102, 103, 97, 99, 92, 94, 86, 91, 78, 97, 37, -53, -41, -49, -40, -45, -39, -42,
-37, -40, -34, -38, -31, -38, -26, -46, 13, 105, 91, 98, 89, 92, 84, 87, 80, 83,
77, 79, 71, 78, 70, 84, 27, -60, -47, -54, -47, -50, -45, -47, -44, -44, -42,
-41, -40, -39, -38, -36, -36, -34, -35, -32, -32, -30, -31, -28, -30, -26, -27,
-26, -26, -24, -25, -23, -23, -21, -22, -21, -20, -20, -18, -19, -16, -19, -14,
-19, -12, -19, -7, -29, 29, 118, 106, 110, 102, 103, 98, 97, 94, 93, 90, 87, 85,
83, 82, 79, 78, 75, 73, 71, 70, 68, 67, 65, 63, 61, 60, 58, 57, 56, 54, 52, 51,
51, 50, 48, 46, 45, 44, 43, 42, 41, 41, 38, 38, 36, 36, 34, 34, 33, 32, 31, 30,
30, 28, 29, 26, 27, 24, 27, 21, 28, 15, 37, -24, -116, -104, -104, -90, -91,
-87, -86, -84, -80, -79, -77, -76, -73, -73, -69, -69, -65, -66, -63, -62, -60,
-58, -52, -52, -56, -51, -55, -47, -54, -41, -61, -3, 85, 74, 80, 74, 75, 70,
71, 66, 68, 63, 64, 58, 63, 52, 70, 13, -79, -66, -73, -65, -68, -63, -63, -61,
-60, -58, -56, -56, -53, -53, -50, -51, -47, -47, -45, -46, -42, -43, -40, -41,
-37, -38, -37, -37, -35, -35, -33, -33, -31, -31, -30, -28, -29, -26, -28, -24,
-28, -22, -27, -19, -27, -14, -37, 23, 118, 106, 111, 102, 104, 98, 99, 93, 95,
88, 90, 82, 88, 74, 94, 33, -65, -52, -60, -52, -56, -50, -52, -48, -50, -44,
-48, -41, -47, -35, -56, 4, 104, 91, 97, 88, 90, 85, 85, 82, 81, 79, 75, 75, 71,
71, 67, 68, 64, 64, 61, 61, 58, 57, 56, 54, 53, 50, 52, 46, 52, 40, 59, 8, -85,
-79, -83, -76, -77, -75, -72, -72, -67, -68, -65, -66, -62, -62, -59, -59, -55,
-56, -53, -53, -51, -50, -49, -47, -48, -43, -46, -40, -46, -33, -54, 4, 99, 88,
92, 85, 86, 82, 81, 78, 77, 76, 71, 71, 68, 68, 64, 64, 61, 61, 58, 58, 55, 55,
52, 52, 49, 50, 47, 47, 45, 44, 42, 41, 41, 40, 39, 36, 37, 34, 36, 31, 36, 29,
33, 25, 34, 20, 42, -18, -116, -104, -110, -101, -103, -97, -98, -92, -94, -87,
-90, -82, -87, -74, -94, -33, 71, 58, 65, 56, 61, 54, 57, 51, 55, 49, 51, 44,
51, 39, 57, 3, -89, -76, -84, -74, -79, -72, -74, -68, -71, -64, -68, -60, -66,
-54, -73, -18, 77, 66, 71, 63, 66, 60, 63, 57, 65, 60, 58, 50, 55, 44, 63, 7,
-88, -75, -82, -75, -76, -72, -72, -69, -68, -67, -64, -64, -61, -61, -57, -58,
-55, -55, -51, -51, -50, -49, -48, -46, -45, -42, -46, -39, -45, -33, -54, 4,
101, 88, 94, 87, 88, 84, 83, 80, 77, 77, 73, 73, 70, 69, 65, 65, 63, 64, 60, 59,
56, 56, 54, 53, 52, 51, 48, 47, 46, 44, 43, 42, 42, 39, 39, 37, 37, 35, 35, 33,
32, 32, 31, 30, 29, 28, 27, 26, 26, 27, 24, 24, 22, 23, 21, 21, 21, 21, 18, 18,
17, 17, 16, 16, 16, 14, 14, 13, 14, 11, 14, 10, 13, 8, 13, 6, 14, 2, 22, -30,
-118, -105, -112, -105, -106, -100, -100, -95, -95, -89, -93, -85, -90, -77,
-95, -41, 51, 45, 56, 41, 43, 39, 41, 36, 39, 34, 37, 31, 37, 26, 44, -8, -102,
-90, -96, -87, -88, -85, -84, -82, -79, -77, -76, -74, -72, -71, -68, -68, -65,
-64, -62, -62, -59, -58, -56, -56, -53, -53, -51, -50, -48, -48, -46, -45, -44,
-43, -41, -41, -39, -40, -37, -38, -35, -36, -34, -34, -31, -33, -30, -31, -29,
-29, -27, -26, -34, 75, 112, 99, 104, 96, 98, 90, 93, 87, 90, 84, 82, 79, 78,
76, 74, 72, 70, 69, 68, 67, 62, 62, 59, 59, 56, 56, 54, 52, 50, 50, 48, 46, 46,
43, 44, 40, 43, 37, 42, 32, 48, 0, -87, -75, -80, -76, -76, -73, -71, -70, -66,
-66, -65, -64, -61, -61, -58, -59, -55, -56, -53, -53, -50, -51, -47, -48, -46,
-46, -40, -34, -40, -42, -40, -39, -39, -37, -37, -33, -33, -33, -34, -31, -32,
-27, -34, -26, -33, -21, -41, 10, 101, 90, 94, 88, 88, 84, 84, 80, 79, 75, 76,
70, 75, 63, 79, 29, -65, -53, -59, -55, -56, -53, -52, -52, -48, -48, -47, -47,
-44, -45, -42, -43, -40, -41, -39, -38, -37, -36, -36, -33, -36, -30, -34, -27,
-35, -22, -43, 10, 104, 96, 100, 91, 92, 87, 87, 83, 84, 80, 78, 73, 77, 67, 80,
37, -46, -38, -43, -38, -40, -37, -37, -36, -35, -34, -32, -33, -30, -31, -30,
-30, -28, -27, -25, -28, -26, -26, -25, -24, -23, -20, -25, -20, -25, -15, -33,
12, 96, 86, 89, 85, 83, 81, 79, 77, 73, 74, 69, 70, 66, 67, 62, 63, 59, 62, 58,
58, 66, 55, 52, 48, 52, 46, 47, 41, 48, 36, 53, 5, -80, -72, -76, -70, -72, -68,
-67, -64, -66, -61, -63, -57, -61, -51, -68, -21, 68, 61, 65, 57, 59, 56, 55,
53, 53, 52, 47, 48, 45, 46, 42, 43, 41, 40, 38, 38, 36, 35, 35, 32, 33, 29, 33,
26, 33, 21, 39, -10, -98, -89, -84, -63, -66, -61, -62, -58, -57, -54, -58, -52,
-56, -47, -60, -22, 54, 44, 50, 44, 46, 42, 44, 39, 41, 37, 39, 34, 39, 30, 43,
4, -72, -60, -66, -62, -64, -60, -60, -57, -56, -52, -57, -51, -55, -46, -60,
-20, 58, 48, 53, 48, 49, 46, 46, 44, 42, 42, 40, 40, 38, 38, 35, 35, 33, 36, 34,
30, 31, 28, 30, 26, 30, 25, 26, 20, 28, 29, 39, -9, -87, -80, -82, -78, -78,
-74, -74, -71, -71, -67, -69, -63, -67, -58, -71, -30, 50, 42, 48, 45, 45, 40,
41, 38, 40, 39, 34, 34, 33, 33, 31, 31, 30, 29, 27, 28, 25, 25, 24, 24, 22, 23,
21, 21, 20, 20, 18, 17, 18, 20, 16, 15, 15, 14, 14, 13, 14, 14, 10, 11, 10, 10,
9, 9, 9, 7, 8, 7, 7, 6, 8, 5, 6, 4, 6, 2, 7, -1, 12, -21, -83, -74, -79, -76,
-75, -72, -71, -69, -67, -64, -67, -62, -65, -57, -68, -35, 32, 25, 29, 26, 26,
24, 25, 23, 21, 22, 20, 21, 19, 20, 17, 18, 17, 20, 16, 15, 15, 14, 14, 12, 16,
13, 12, 8, 13, 5, 18, -15, -81, -76, -78, -74, -74, -71, -57, -59, -67, -65,
-65, -62, -61, -60, -57, -57, -56, -56, -52, -49, -49, -51, -48, -49, -44, -44,
-45, -44, -42, -42, -41, -40, -38, -39, -38, -36, -36, -34, -34, -32, -35, -30,
-33, -28, -33, -24, -39, -3, 69, 65, 64, 59, 59, 57, 56, 54, 55, 54, 48, 48, 46,
46, 43, 43, 42, 40, 39, 38, 37, 35, 36, 33, 33, 31, 32, 28, 32, 25, 33, 8, -39,
-32, -38, -36, -36, -34, -34, -33, -31, -29, -33, -30, -32, -26, -35, -11, 40,
34, 37, 34, 34, 32, 33, 30, 30, 28, 29, 25, 28, 23, 30, 6, -44, -37, -42, -41,
-40, -39, -37, -38, -34, -34, -36, -35, -33, -33, -32, -32, -30, -31, -30, -29,
-29, -28, -27, -26, -28, -24, -27, -23, -27, -19, -32, 7, 61, 42, 46, 45, 43,
38, 40, 36, 40, 36, 34, 31, 34, 28, 36, 11, -42, -39, -42, -37, -39, -36, -37,
-35, -37, -33, -35, -32, -34, -27, -37, -12, 41, 38, 37, 31, 31, 27, 27, 23, 24,
21, 17, 16, 14, 13, 10, 9, 8, 7, 5, 5, 3, 3, 2, 2, 0, 0, 0, 0, };

#endif /* GB_KICK_H_ */
