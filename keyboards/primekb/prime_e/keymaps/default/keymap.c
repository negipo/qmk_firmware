/* Copyright 2018 Holten Campbell
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

#define KC_CTLTB CTL_T(KC_TAB)
#define KC_SFTMI RSFT_T(KC_MINUS)
#define KC_SFTEQL RSFT_T(KC_EQUAL)
#define KC_SMINUS LSFT(KC_MINUS)
#define KC_SEQUAL LSFT(KC_EQUAL)
#define KC_SBSLASH LSFT(KC_BSLASH)
#define KC_SGRAVE LSFT(KC_GRAVE)
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
		KC_ESC,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,          KC_Y,   KC_U,     KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC,
		KC_CTLTB,   KC_A,     KC_S,     KC_D,   KC_F,    KC_G,          KC_H,   KC_J,     KC_K, KC_L,    KC_SCLN, KC_ENTER,
		KC_SFTEQL,  KC_Z,     KC_X,     KC_C,   KC_V,    KC_B,          KC_BSPC,  KC_N,     KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_SFTMI,
		KC__MUTE,  KC_LALT,           KC_LGUI, LT(1, KC_SPACE),	          LT(1, KC_RGUI), LT(3, KC_RALT),              LT(2, KC_BSLASH), LT(2, KC_QUOTE)
    ),

    LAYOUT(
		KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,    KC_5,          KC_6,   KC_7,    KC_8,     KC_9,   KC_0,   KC_MINUS,   KC_EQUAL,
		KC_CTLTB,   KC_S1,   KC_S2,   KC_S3,   KC_S4,    KC_S5,          KC_S6,   KC_S7,    KC_S8,   KC_S9,  KC_S0,   KC_ENTER,
		KC_SFTEQL, KC_SBSLASH,KC_SGRAVE,KC_GRAVE,   KC_SEQUAL, KC_SMINUS,          KC_BSPC,   KC_QUOTE,  KC_TRNS, KC_TRNS,KC_TRNS,KC_BSLASH, KC_SFTMI,
		KC__VOLDOWN, KC__VOLUP,                         KC_LGUI,    KC_SPACE,	        KC_ENTER,   KC_RGUI,                                     KC_TRNS,   KC_TRNS
    ),

    LAYOUT(
		RESET,  KC_F1,     KC_F2,     KC_F3,     KC_F4,      KC_F5,            KC_F6,     KC_F7,    KC_F8,   KC_F9,   KC_F10,    KC_F11,   KC_F12,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_P4,    KC_P5,   KC_UP,   KC_UP,   KC_RBRC,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_P1,    KC_P2,   KC_LEFT,   KC_DOWN,   KC_RIGHT,  KC_TRNS,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_PENT,   KC_PDOT,                               KC_TRNS,  KC_TRNS
    ),

    LAYOUT(
		KC_TRNS,  KC_F1,     KC_F2,     KC_F3,     KC_F4,      KC_F5,            KC_F6,     KC_F7,    KC_UP,   KC_F9,   KC_F10,    KC_F11,   KC_F12,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_LEFT,  KC_DOWN, KC_RIGHT, KC_TRNS,   KC_TRNS,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                               KC_TRNS,  KC_TRNS
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinHigh(B2);
  } else {
    writePinLow(B2);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(B1);
  } else {
    writePinLow(B1);
  }
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state)
{
    if (get_highest_layer(state) == 1) {
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    return state;
}
