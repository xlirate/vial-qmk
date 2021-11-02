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

#define DEVICE_VER      0xFFFE
#define MANUFACTURER    Griffin Barrett
#define PRODUCT         cd4051_104_test

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 13

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 4


#define MATRIX_ROW_PINS { B3, B2, B6 }
#define MATRIX_ROW_PIN_COUNT 3
/* It is arbitrary, but we use a grey code to limit transitions in the external chip.
Only one bit changes per row change, so there should be no timing related digital glitching */
#define MATRIX_ROW_MASKS { \
    0x00, \
    0x01, \
    0x03, \
    0x02, \
    0x06, \
    0x07, \
    0x05, \
    0x04 }

#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, F4, F5, F6, F7, B1 }

#define MATRIX_IO_DELAY 15

/* DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define DIODE_DIRECTION COL2ROW
