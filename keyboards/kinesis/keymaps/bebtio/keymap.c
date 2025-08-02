// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
 
#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty
#define KEYPAD 1 // What it sounds like.
#define PRGRAM 1 // Common programming stuff around the right hand homerow.

/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT(
    KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,      KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  TG(KEYPAD), KC_NO,
    KC_EQL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       KC_MINS,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                                                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_BSLS,
    LT(PRGRAM,KC_ESC),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                                                      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,    KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                                                      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_RSFT,
              KC_GRV,   KC_INS,   KC_LEFT,  KC_RGHT,                                                                                       KC_DOWN,  KC_UP,    KC_LBRC,  KC_RBRC,
                                                      KC_LCTL, KC_LALT,                                               KC_RGUI,  KC_RCTL,
                                                               KC_HOME,                                               KC_PGUP,
                                            KC_BSPC,  KC_DEL,  KC_END,                                                KC_PGDN,  KC_ENTER, KC_SPC
  ),

  [KEYPAD] = LAYOUT(
    KC_NO,  KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_MUTE,  KC_VOLD,  KC_VOLU,   KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_TRNS,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_NO,   KC_NO,  KC_PEQL,  KC_PSLS,  KC_PAST,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_NO,   KC_P7,  KC_P8,    KC_P9,    KC_PMNS,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_NO,   KC_P4,  KC_P5,    KC_P6,    KC_PPLS,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_NO,   KC_P1,  KC_P2,    KC_P3,    KC_PENT,  KC_NO,
            KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                                           KC_P0,  KC_P0,    KC_PDOT,  KC_PENT,
                                                      KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,                                               KC_TRNS,
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS, KC_TRNS
  ),

  [PRGRAM] = LAYOUT(
    KC_NO,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_NO,        KC_NO,  KC_NO,   KC_NO,          KC_NO,          KC_NO,          KC_NO,   KC_NO,  QK_BOOT,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,   KC_NO,  KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        LSFT(KC_EQL),   KC_LT,          KC_GT,   KC_NO,   KC_NO,  KC_NO,
    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_EQL,         KC_LCBR,        KC_RCBR, KC_NO,   KC_NO,  KC_NO,
    KC_LSFT, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                        KC_MINS,        KC_LPRN,        KC_RPRN, KC_NO,   KC_NO,  KC_RSFT,
             KC_NO,    KC_NO,    KC_NO,    KC_NO,                                                                                                  KC_NO,          KC_NO,   KC_NO,   KC_NO,
                                                      KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,                                               KC_TRNS,
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS, KC_TRNS
  )
  
};

