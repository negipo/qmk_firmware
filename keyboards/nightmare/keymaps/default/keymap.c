/* Copyright 2019 cfbender
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
#include QMK_KEYBOARD_H

#define OPT_TAB LCTL_T(KC_TAB)
#define KC_CTLTB CTL_T(KC_TAB)
#define KC_SFTMI RSFT_T(KC_MINUS)
#define KC_SPTWO LT(2, KC_SPACE)
#define KC_ENONE LT(1, KC_ENTER)
#define KC_S1 LSFT(KC_1)
#define KC_S2 LSFT(KC_2)
#define KC_S3 LSFT(KC_3)
#define KC_S4 LSFT(KC_4)
#define KC_S5 LSFT(KC_5)
#define KC_S6 LSFT(KC_6)
#define KC_S7 LSFT(KC_7)
#define KC_S8 LSFT(KC_8)
#define KC_S9 LSFT(KC_9)
#define KC_S0 LSFT(KC_0)
#define KC_SMINUS LSFT(KC_MINUS)
#define KC_SEQUAL LSFT(KC_EQUAL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split(/* Base */
                 KC_ESC, KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
                 KC__VOLUP, KC_CTLTB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_ENTER,
                 KC__VOLDOWN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_SFTMI, LT(2, KC_EQUAL),
                 KC__MUTE, KC_LGUI, KC_LALT, KC_LGUI, LT(1, KC_SPACE), LT(1, KC_RGUI), KC_RALT, KC_BSLASH, LT(1, KC_GRAVE)),

    [1] = LAYOUT_split(
        RESET, KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPC,
        KC_F2, KC_CTLTB, KC_S1, KC_S2, KC_S3, KC_S4, KC_S5, KC_S6, KC_S7, KC_S8, KC_S9, KC_S0, KC_SMINUS, KC_SEQUAL,
        KC_F1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_RALT, KC_TRNS, KC_TRNS),

    [2] = LAYOUT_split(
        KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_UP, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_RIGHT, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};
