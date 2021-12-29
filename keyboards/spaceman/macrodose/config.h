/* Copyright 2021 Spaceman
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5342 // "SB"
#define PRODUCT_ID      0x4D44 // "MD"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Spaceman
#define PRODUCT         Macrodose

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5
#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D4, D6, D7, B4, B5 }

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN B3
#define RGBLED_NUM 25
#endif
