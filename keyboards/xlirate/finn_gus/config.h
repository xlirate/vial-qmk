/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Independantly of the above copyright notice,
the VENDOR_ID:PRODUCT_ID of 0x16D0:10A6 is trademark Griffin Barrett,
please replace this if you modify the code

*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */


/* Change these if you modify the code */
#define VENDOR_ID       0x16D0
#define PRODUCT_ID      0x10A6
/* Change these if you modify the code */

#define DEVICE_VER      0xFFFD
#define MANUFACTURER    Griffin Barrett
#define PRODUCT         funn_gus_prototype

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 9

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 4


#define MATRIX_ROW_PINS { B3, B2, B6 }
#define MATRIX_ROW_PIN_COUNT 3
/* It is arbitrary, but we use a grey code to limit transitions in the external chip.
Only one bit changes per row change, so there should be no timing related digital glitching */
#define MATRIX_ROW_MASKS { 4, 6, 7, 5, 1, 3, 2, 0 }
/*  Row num : bit mask : CD4051B pin grounded
 *  0 : 100 : 4
 *  1 : 110 : 6
 *  2 : 111 : 7
 *  3 : 101 : 5
 *  4 : 001 : 1
 *  5 : 011 : 3
 *  6 : 010 : 2
 *  7 : 000 : 0
 */

#define MATRIX_COL_PINS { D3, D2, D7, E6, F6, B1, F7, B4, B5 }

#define MATRIX_IO_DELAY 15

/* DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define DIODE_DIRECTION COL2ROW
