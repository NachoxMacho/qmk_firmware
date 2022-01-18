/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _MOD,
  _NUM,
  _NAV
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  MOD,
  NUM,
  EXTRAS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_preonic_2x2u(
  KC_ESC,      KC_1,    KC_2,    KC_3,      KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TG(_MOD),
  KC_DEL,      KC_Q,    KC_W,    KC_E,      KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_TAB,      KC_A,    KC_S,    KC_D,      KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  TG(_NUM),    KC_Z,    KC_X,    KC_C,      KC_V,    KC_B,    KC_N,    KC_M,    RCTL_T(KC_COMM), RSFT_T(KC_DOT),  RALT_T(KC_SLSH), KC_RGUI,
  KC_LGUI, KC_LALT, KC_LSHIFT, KC_LCTRL,            KC_ENTER, KC_SPC,           KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT
),

[_MOD] = LAYOUT_preonic_2x2u(
  KC_ESC,  KC_1,         KC_2,         KC_3,         KC_4,         KC_5, KC_6, KC_7,         KC_8,         KC_9,         KC_0,            _______,
  KC_BSPC, KC_Q,         KC_W,         KC_E,         KC_R,         KC_T, KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            KC_DEL,
  KC_TAB,  LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
  KC_MINS, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_EQL,
  _______, _______,      _______,      MO(_NUM),               KC_ENTER, KC_SPC,             MO(_NAV),     _______,      _______,         _______
),

[_NUM] = LAYOUT_preonic_2x2u(
  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,KC_F8,KC_F9,KC_F10,              KC_F11,              KC_F12,
  _______,  KC_GRV,  KC_TILD, KC_BSLS, KC_PIPE, _______, KC_7, KC_8, KC_9, _______,             _______,             _______,
  _______,  KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______, KC_4, KC_5, KC_6, _______,             _______,             _______,
  _______,  _______, _______, _______, _______, _______, KC_1, KC_2, KC_3, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,
  _______,  _______, _______, _______,          _______, KC_0,       LCTL(KC_MINUS),   KC_VOLU, KC_VOLD,             LCTL(KC_EQUAL)
),

[_NAV] = LAYOUT_preonic_2x2u(
  RGB_TOG,  RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, KC_PGUP,   _______, _______, RESET,
  _______,  RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, KC_UP,     _______, _______, _______,
  _______,  _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN,   KC_RIGHT, KC_END, _______,
  _______,  _______, _______, _______, _______, _______, _______, _______, KC_PGDOWN, _______, _______, _______,
  _______,  _______, _______, _______,          _______, _______,          _______,   _______, _______, _______
)
};