/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

enum ckrbd_layers {
  _HALMAK,
  _QWERTY,
  _BEAKL,
  _SYM,
  _NUM,
  _NAV,
  _GAM,
  _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // CENTER HALMAK
    [_HALMAK] = LAYOUT_split_3x6_3(
        KC_ESC,       KC_W,         KC_L,         KC_R,         KC_B,         KC_COMMA,    KC_DOT,         KC_Q,         KC_U,         KC_D,         KC_J,       KC_EQL,
        OSL(_FUN),       LGUI_T(KC_S), LALT_T(KC_H), LSFT_T(KC_N), LCTL_T(KC_T), KC_Z,        KC_G,         RCTL_T(KC_A), RSFT_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I), KC_QUOT,
        OSM(MOD_MEH),  KC_F,         KC_M,         KC_V,         KC_C, KC_SLASH,            KC_SCLN,         KC_P,         KC_X,      KC_K,       KC_Y,         KC_MINS,
        LT(_SYM,KC_DEL), LT(_NUM,KC_BSPC),      LT(_NAV,KC_TAB),                                       LT(_NUM,KC_ENT), KC_SPC,       TO(_GAM)
    ),

    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_ESC,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,     KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,            KC_EQL,
        OSL(_FUN),       LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,     KC_H,         RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
        OSM(MOD_MEH),  KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,     KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_MINS,
        LT(_SYM,KC_DEL), LT(_NUM,KC_BSPC),      LT(_NAV,KC_TAB),                                       LT(_NUM,KC_ENT), KC_SPC,       TG(_GAM)
    ),

    // BEAKL
    [_BEAKL] = LAYOUT_split_3x6_3(
        KC_ESC,       KC_Q,         KC_H,         KC_O,         KC_U,         KC_X,       KC_G,         KC_C,         KC_R,         KC_F,         KC_Z,            KC_EQL,
        OSL(_FUN),       LGUI_T(KC_Y), LALT_T(KC_I), LSFT_T(KC_E), LCTL_T(KC_A), KC_DOT,     KC_D,         RCTL_T(KC_S), RSFT_T(KC_T), RALT_T(KC_N), RGUI_T(KC_B), KC_QUOT,
        OSM(MOD_MEH),  KC_J,         KC_SLASH,         KC_COMMA,         KC_K, KC_B,       KC_W,         KC_M,         KC_L,      KC_P,       KC_V,         KC_MINS,
        LT(_SYM,KC_DEL), LT(_NUM,KC_BSPC),      LT(_NAV,KC_TAB),                                       LT(_NUM,KC_ENT), KC_SPC,       TO(_GAM)
    ),


    [_SYM] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_PERC, KC_AT,   KC_HASH, KC_DLR,  KC_ASTR,       _______, _______, _______, _______, _______, _______,
        KC_AMPR, KC_PIPE, KC_LPRN, KC_LBRC, KC_LCBR, KC_BSLS,       _______, _______, _______, _______, _______, _______,
        KC_EXLM, KC_CIRC, KC_RPRN, KC_RBRC, KC_RCBR, KC_TILD,       _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                                  _______, _______, _______
    ),

    [_NUM] = LAYOUT_split_3x6_3(
        _______, _______, KC_7, KC_8, KC_9, _______,      _______, _______, _______, _______, _______, _______,
        _______, _______, KC_4, KC_5, KC_6, KC_0,         _______, _______, _______, _______, _______, _______,
        _______, _______, KC_1, KC_2, KC_3, _______,      _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                        _______, _______, _______
    ),

    [_NAV] = LAYOUT_split_3x6_3(
        _______, KC_HOME, KC_UP,   KC_END,    KC_MEDIA_NEXT_TRACK, KC_VOLU,      RESET, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_X, RGB_M_G,
        _______, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_MEDIA_PLAY_PAUSE, KC_MUTE,      _______, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,
        _______, KC_PGUP, _______, KC_PGDOWN, KC_MEDIA_PREV_TRACK, KC_VOLD,      RGB_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
        _______, _______, _______,                                               _______, _______, _______
    ),

    [_GAM] = LAYOUT_split_3x6_3(
        KC_ESC,     KC_Q,    KC_W,    KC_E, KC_R, KC_T,      KC_Y,     KC_U,   KC_I,     KC_O,   KC_P,    KC_EQL,
        KC_LALT,    KC_A,    KC_S,    KC_D, KC_F, KC_G,      KC_H,     KC_J,   KC_K,     KC_L,   KC_SCLN, KC_QUOT,
        KC_LCTRL,   KC_Z,    KC_X,    KC_C, KC_V, KC_B,      KC_N,     KC_M,   KC_COMM,  KC_DOT, KC_SLSH, KC_MINS,
        KC_LSHIFT,  KC_BSPC, KC_TAB,                         KC_ENT,   KC_SPC, TO(_QWERTY)
    ),

    [_FUN] = LAYOUT_split_3x6_3(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,
        _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
        _______,   _______,  _______,                             TO(_QWERTY), TO(_BEAKL), TO(_HALMAK)
    ),
};