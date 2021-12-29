#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_F1,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,  KC_F2, 
        KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_F3,
        KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_F4,
        RGB_TOG, RGB_HUI, RGB_HUD, RGB_MOD, KC_F5
    )
};
