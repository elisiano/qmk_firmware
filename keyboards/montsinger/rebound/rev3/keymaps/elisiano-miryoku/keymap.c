#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
  BASE,
  NAVR,
  MOUR,
  MEDR,
  FUNL,
  NSL,
  NSSL,

};

enum custom_keycodes {
  EMOJI= SAFE_RANGE,
};

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

// non-KC_ keycodes
#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_all(
  KC_NO, KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,                        KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,      KC_NO, 
  KC_NO, LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_PGUP,  KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I), KC_NO, 
  KC_NO, KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_PGDN,  KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,      KC_NO, 
  KC_NO, KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  KC_MUTE,  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP,        KC_NO 
),

  [NAVR] = LAYOUT_all(
    KC_NO, KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,          KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_NO,
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
    KC_NO, KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA, EMOJI,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA, _______, KC_ENT,  KC_BSPC, KC_DEL,  KC_NP,   KC_NP,   KC_NO
  ),
  [MOUR] = LAYOUT_all(
    KC_NO, KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,          KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NO, 
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, _______, KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
    KC_NO, KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA, _______, KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA, _______, KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_NP,   KC_NO
  ),
  [MEDR] = LAYOUT_all(
    KC_NO, KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,          KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,  KC_NO,
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, _______, KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
    KC_NO, KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA, _______, KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA, _______, KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,   KC_NP,   KC_NO
  ),
  [FUNL] = LAYOUT_all(
    KC_NO, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,          KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,  KC_NO,
    KC_NO, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, _______, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
    KC_NO, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,   KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_APP,  KC_SPC,  KC_TAB,  _______, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP,   KC_NO
  ),
  [NSL] = LAYOUT_all(
    KC_NO, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,          KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,  KC_NO,
    KC_NO, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  _______, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
    KC_NO, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, _______, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,   KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_DOT,  KC_0,    KC_MINS, _______, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP,   KC_NO
  ),
  [NSSL] = LAYOUT_all(
    KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,          KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,  KC_NO,
    KC_NO, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, _______, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
    KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,   KC_NO,
    KC_NO, KC_NP,   KC_NP,   KC_LPRN, KC_RPRN, KC_UNDS, _______, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP,   KC_NO
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case EMOJI:
            if (record->event.pressed) {
                tap_code16(C(G(KC_SPC)));
            }
            break;
    }
    return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
  if(IS_LAYER_ON(MEDR)){
      if (clockwise) {
        tap_code16(KC_BRMD);
      } else {
        tap_code16(KC_BRMU);
      }
  } else {
      if (clockwise) {
        tap_code16(S(KC_VOLD));
      } else {
        tap_code16(KC_VOLU);
      }
  }
}
