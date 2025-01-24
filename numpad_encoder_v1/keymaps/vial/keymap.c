// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_ZOOM_IN = SAFE_RANGE,
    KC_ZOOM_OUT,
    KC_CTRL_Z,
    KC_CTRL_SHIFT_Z
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │Esc│Tab│MO1│Bsp│
     * ├───┼───┼───┼───┤
     * │Num│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼   ┤
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┼   ┤
     * │ 0     │ . │Ent│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_6x4(
        TO(1),   TO(2),   TO(3),   KC_MUTE,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_NO,
        KC_P1,   KC_P2,   KC_P3,   KC_EQL,
        KC_P0,   KC_PDOT, KC_PENT, KC_NO
    ),
    [1] = LAYOUT_ortho_6x4(
        TO(0),   TO(2),   TO(3),   QK_BOOT,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_NO,
        KC_P1,   KC_P2,   KC_P3,   KC_EQL,
        KC_P0,   KC_PDOT, KC_PENT, KC_NO
    ),
    [2] = LAYOUT_ortho_6x4(
        TO(1),   TO(0),   TO(3),   KC_NO,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_NO,
        KC_P1,   KC_P2,   KC_P3,   KC_EQL,
        KC_P0,   KC_PDOT, KC_PENT, KC_NO
    ),
    [3] = LAYOUT_ortho_6x4(
        TO(1),   TO(2),   TO(0),   KC_NO,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_NO,
        KC_P1,   KC_P2,   KC_P3,   KC_EQL,
        KC_P0,   KC_PDOT, KC_PENT, KC_NO
    ),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP)  },
    [1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  },
    [2] = { ENCODER_CCW_CW(KC_ZOOM_IN, KC_ZOOM_OUT)  },
    [3] = { ENCODER_CCW_CW(KC_CTRL_Z, KC_CTRL_SHIFT_Z)  },
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
    switch (keycode) {
    case KC_ZOOM_IN:
        if (record->event.pressed) {
            register_code(KC_LCTL);  // Press CTRL
            tap_code(KC_EQUAL);      // Tap "="
            unregister_code(KC_LCTL); // Release CTRL
        } else {
            // when keycode KC_ZOOM_IN is released
        }
        break;

    case KC_ZOOM_OUT:
        if (record->event.pressed) {
            register_code(KC_LCTL);  // Press CTRL
            tap_code(KC_MINUS);      // Tap "-"
            unregister_code(KC_LCTL); // Release CTRL
        } else {
            // when keycode KC_ZOOM_out is released
        }
        break;

    case KC_CTRL_Z:
        if (record->event.pressed) {
            register_code(KC_LCTL);  // Press CTRL
            tap_code(KC_Z);      // Tap "-"
            unregister_code(KC_LCTL); // Release CTRL
        } else {
            // when keycode KC_ZOOM_out is released
        }
        break;
    
    case KC_CTRL_SHIFT_Z:
        if (record->event.pressed) {
            register_code(KC_LCTL);  // Press CTRL
            register_code(KC_LSFT);
            tap_code(KC_Z);      // Tap "-"
            unregister_code(KC_LSFT); // Release CTRL
            unregister_code(KC_LCTL); // Release CTRL
        } else {
            // when keycode KC_ZOOM_out is released
        }
        break;
    }   
    return true;
};
