// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 3 │ 4 │
     * ├───┼───┤
     * │ 1 │ 2 │
     * ├───┴───┤
     * │   0   │
     * └───────┘
     */
    [0] = LAYOUT(
        KC_P3,   KC_P4,
        KC_P1,   KC_P2,
        KC_P0
    )
};
