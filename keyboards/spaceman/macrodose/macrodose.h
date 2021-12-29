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

#include "quantum.h"

#define LAYOUT( \
  K00, K10, K20, K30, K40, \
  K01, K11, K21, K31, K41, \
  K02, K12, K22, K32, K42, \
  K03, K13, K23, K33, K43, \
  K04, K14, K24, K34, K44  \
) { \
  { K00, K10, K20, K30, K40 }, \
  { K01, K11, K21, K31, K41 }, \
  { K02, K12, K22, K32, K42 }, \
  { K03, K13, K23, K33, K43 }, \
  { K04, K14, K24, K34, K44 }  \
}
