#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_numpad_6x5(
		TG(1),     KC_MY_COMPUTER, KC_PSCREEN,  KC_INSERT,     KC_GRAVE,
		KC_ESC,    KC_F11,         KC_F12,      KC_F13,        KC_F14,
		KC_LGUI,   KC_F7,          KC_F8,       KC_F9,
		KC_LALT,   KC_F4,          KC_F5,       KC_F6,         OSM(MOD_HYPR),
		KC_LSHIFT, KC_F1,          KC_F2,       KC_F3,
		KC_LCTRL,  KC_F10,                      _______,       OSM(MOD_MEH)
    ),
	[1] = LAYOUT_numpad_6x5(
		_______,  KC_F22,    KC_F23,               KC_F24,  RESET,
        KC_F17,   KC_F18,    KC_F19,               KC_F20,  KC_F21,
        _______,  KC_VOLU,   KC_MEDIA_NEXT_TRACK,  BL_INC,
        _______,  KC_MUTE,   KC_MEDIA_PLAY_PAUSE,  BL_DEC,  _______,
        _______,  KC_VOLD,   KC_MEDIA_PREV_TRACK,  BL_TOGG,
        _______,  KC_MEDIA_PLAY_PAUSE,             KC_MUTE, _______
    )

};
