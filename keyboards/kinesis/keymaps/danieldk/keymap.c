#include QMK_KEYBOARD_H

#include "features/achordion.h"

enum layer_names {
    _HOME,
    _PUNCT,
    _NAV,
    _MAC,
};

// Home row mods
uint16_t const _T_SFT = SFT_T(KC_T); // Shift on indexes
uint16_t const _N_SFT = SFT_T(KC_N);
uint16_t const _S_CMD = CMD_T(KC_S); // Command on middle
uint16_t const _E_CMD = CMD_T(KC_E);
uint16_t const _D_CTL = CTL_T(KC_D); // Control on index down
uint16_t const _H_CTL = CTL_T(KC_H);
uint16_t const _R_OPT = OPT_T(KC_R); // Option on ring
uint16_t const _I_OPT = OPT_T(KC_I);

// MacOS shortcuts
uint16_t const _1PASS = LGUI(KC_BSLS);        // 1Password
uint16_t const _APEX  = LCTL(KC_UP);          // App exposé
uint16_t const _FQUIT = LALT(LGUI(KC_ESC));   // Force quit
uint16_t const _MCTL  = LCTL(KC_DOWN);        // Mission control
uint16_t const _SCRNS = LGUI(LSFT(KC_4));     // Screenshot
uint16_t const _EMOJI = LCTL(LGUI(KC_SPACE)); // Emoji picker
uint16_t const _NEXTS = LCTL(KC_RIGHT);       // Next screen
uint16_t const _PREVS = LCTL(KC_LEFT);        // Previous screen

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HOME] = LAYOUT(
    KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,
    KC_EQL, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,
    KC_TAB, KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,
    KC_NO,  KC_A,   _R_OPT, _S_CMD, _T_SFT, KC_G,
    KC_LSFT,KC_Z,   KC_X,   KC_C,   _D_CTL, KC_V,
            KC_GRV, CW_TOGG,KC_LEFT,KC_RGHT,
                    KC_TAB,KC_LALT,
                            KC_HOME,
            LT(_PUNCT,KC_BSPC),KC_ESC,KC_END,

    KC_F9,  KC_F10, KC_F11, KC_F12, KC_MUTE,KC_VOLD,  KC_VOLU, KC_WAKE, QK_BOOT,
    KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,KC_BSLS,
    KC_M,   _N_SFT, _E_CMD, _I_OPT, KC_O,   KC_QUOT,
    KC_K,   _H_CTL, KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
            KC_UP,  KC_DOWN,KC_LBRC,KC_RBRC,
                    KC_LCTL,KC_TAB,
                            KC_PGUP,
            KC_PGDN,LT(_MAC,KC_ENTER), LT(_PUNCT,KC_SPC)
    ),

[_PUNCT] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_LCBR,KC_RCBR,KC_NO,
    KC_NO,  KC_LT,  KC_GT,  KC_LPRN,KC_RPRN,KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_LBRC,KC_RBRC,KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_BSPC,KC_NO,  KC_NO,

    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO, KC_NO, KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_GRV, KC_SLSH,KC_BSLS,KC_NO,  KC_NO,
    KC_HASH,KC_COLN,KC_SCLN,KC_EQL, KC_NO,  KC_NO,
    KC_NO,  KC_MINS,KC_UNDS,KC_DLR, KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  KC_NO,  KC_NO
    ),

[_NAV] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  TO(_HOME),  KC_NO,

    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,KC_NO, KC_NO, KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_HOME,KC_PGUP,KC_NO,  KC_NO,  KC_NO,
    KC_LEFT,KC_UP,  KC_DOWN,KC_RGHT,KC_NO,  KC_NO,
    KC_NO,  KC_END, KC_PGDN,KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  KC_NO,  KC_NO
    ),

[_MAC] = LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  _MCTL,  _APEX,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  _SCRNS, _1PASS, _EMOJI,
    KC_NO,  KC_NO,  KC_NO,  _PREVS, _NEXTS, _FQUIT,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  KC_NO,  KC_NO,

    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
            KC_NO,  KC_NO,  KC_NO,  KC_NO,
                    KC_NO,  KC_NO,
                            KC_NO,
            KC_NO,  KC_NO,  KC_NO
    ),

};

// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }
    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}

enum {
    HAND_LEFT,
    HAND_RIGHT,
    HAND_THUMB,
};

#ifdef KEYBOARD_kinesis
static uint8_t kinesis_on_hand(keypos_t pos) {
    if (pos.row > 0x1 && pos.row < 0xa && pos.col > 4 && pos.col < 7)
        return HAND_THUMB;
    else if (pos.row < 6)
        return HAND_LEFT;
    return HAND_RIGHT;
}
#else
#    error "on_hand is only defined for Kinesis keyboards"
#endif

bool kinesis_opposite_hands(const keyrecord_t* tap_hold_record, const keyrecord_t* other_record) {
    return kinesis_on_hand(tap_hold_record->event.key) != kinesis_on_hand(other_record->event.key);
}

// By default, use the BILATERAL_COMBINATIONS rule to consider the tap-hold key
// "held" only when it and the other key are on opposite hands.
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) {
    return kinesis_opposite_hands(tap_hold_record, other_record);
}

bool achordion_eager_mod(uint8_t mod) {
    // Disable eager mods for the time being to find out if they
    // are the source for occasional hangs.
    return false;
}
