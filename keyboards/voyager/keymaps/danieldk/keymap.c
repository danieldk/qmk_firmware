#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    HSV_0_255_255,
    HSV_74_255_255,
    HSV_169_255_255,
    ST_MACRO_0,
};

enum tap_dance_codes {
    DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_voyager(TD(DANCE_0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, CW_TOGG, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, MT(MOD_LSFT, KC_BSPC), KC_A, MT(MOD_LALT, KC_R), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_T), KC_G, KC_M, MT(MOD_RSFT, KC_N), MT(MOD_RGUI, KC_E), MT(MOD_RALT, KC_I), KC_O, MT(MOD_RSFT, KC_QUOTE), KC_TRANSPARENT, MT(MOD_LALT, KC_Z), KC_X, KC_C, MT(MOD_LCTL, KC_D), KC_V, KC_K, MT(MOD_RCTL, KC_H), KC_COMMA, KC_DOT, MT(MOD_RALT, KC_SLASH), KC_RIGHT_CTRL, LT(2, KC_BSPC), KC_ESCAPE, LT(3, KC_ENTER), LT(1, KC_SPACE)),
    [1] = LAYOUT_voyager(KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRANSPARENT, KC_ASTR, KC_PLUS, KC_COLN, KC_SCLN, KC_BSLS, KC_QUOTE, KC_LCBR, KC_RCBR, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12, KC_TRANSPARENT, KC_EQUAL, KC_DQUO, KC_MINUS, KC_UNDS, KC_AT, KC_TILD, KC_SLASH, KC_GRAVE, KC_HASH, KC_PIPE, KC_BSPC, KC_TRANSPARENT, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_TRANSPARENT, KC_TILD, KC_LBRC, KC_RBRC, KC_LABK, KC_RABK, KC_ENTER, MO(4), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME, KC_PAGE_UP, KC_PGDN, KC_END, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, KC_LEFT_SHIFT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, CW_TOGG, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(4)),
    [3] = LAYOUT_voyager(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_4)), LGUI(LSFT(KC_SPACE)), LGUI(LCTL(KC_SPACE)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0, LALT(LGUI(KC_ESCAPE)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_voyager(RGB_TOG, TOGGLE_LAYER_COLOR, RGB_MODE_FORWARD, RGB_SLD, RGB_VAD, RGB_VAI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, KC_TRANSPARENT, KC_PAGE_UP, KC_HOME, KC_UP, KC_END, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255, HSV_74_255_255, HSV_169_255_255, KC_TRANSPARENT, KC_ESCAPE, LCTL(KC_TAB), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    debug_enable = true;
    debug_matrix = true;
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = {{0, 0, 0}, {219, 96, 253}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0}, {0, 0, 0}, {198, 188, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {144, 226, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {89, 211, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return false;
    }
    switch (biton32(layer_state)) {
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_LEFT_SHIFT) SS_DELAY(100) SS_TAP(X_LEFT_SHIFT));
            }
            break;

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_0_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(0, 255, 255);
            }
            return false;
        case HSV_74_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(74, 255, 255);
            }
            return false;
        case HSV_169_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(169, 255, 255);
            }
            return false;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if (state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_EQUAL);
            break;
        case SINGLE_HOLD:
            register_code16(KC_ESCAPE);
            break;
        case DOUBLE_TAP:
            register_code16(KC_EQUAL);
            register_code16(KC_EQUAL);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_EQUAL);
            register_code16(KC_EQUAL);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_ESCAPE);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_EQUAL);
            break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
