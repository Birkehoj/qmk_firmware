#include QMK_KEYBOARD_H

#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define ML_BASE 0 // default layer
#define ML_SYMB 1 // symbols
#define ML_MDIA 2 // media keys
#define ML_FUNC 3 // special functions, git etc.

enum custom_keycodes {
  ARROW_RIGHT = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left |  home|                                       | end    | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,--------------
 *                                        |  <   | LGui |       | gui  |   >   |
 *                                 ,------|------|------|       |------+-------+------.
 *                                 | space| tab  |  BkSp|       | PgUp |  up   | Enter|
 *                                 |------|------|------|       |------|-------|------|
 *                                 | left |  L1  |  L2  |       | PgDn |  down | right|
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[ML_BASE] = LAYOUT_ergodox_pretty_80(  // layer 0 : default
    KC_TILD,          KC_1,            KC_2,        KC_3,        KC_4,      KC_5,      KC_LBRACKET,                                     KC_RBRACKET,    KC_6,      KC_7,           KC_8,           KC_9,           KC_0,      KC_EQUAL,
    KC_DELETE,        KC_Q,            KC_W,        KC_E,        KC_R,      KC_T,      KC_LPRN,                                         KC_RPRN,        KC_Y,      KC_U,           KC_I,           KC_O,           KC_P,      KC_MINUS,
    KC_BSPACE,        KC_A,            KC_S,        KC_D,        KC_F,      KC_G,                                                                       KC_H,      KC_J,           KC_K,           KC_L,           KC_SCOLON, KC_QUOTE,
    KC_LSFT,          KC_Z,            KC_X,        KC_C,        KC_V,      KC_B,      KC_LCBR,                                         KC_RCBR,        KC_N,      KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,  KC_RSFT,
    KC_LGUI,          KC_LCTL, LALT_T(ARROW_RIGHT), KC_CAPSLOCK, LT(ML_SYMB,KC_HOME),                                                   LT(ML_SYMB,KC_END), TG(ML_FUNC), LALT_T(KC_BSLASH),   KC_RCTL,   KC_LGUI,
                                                                                       LCTL(KC_Z), LCTL(LSFT(KC_Z)), LCTL(KC_C),    LCTL(KC_V),
                                                                LT(ML_SYMB, KC_SPACE), LT(ML_MDIA, KC_TAB),  TG(ML_FUNC),   KC_PGUP,    KC_UP,         LT(ML_SYMB, KC_ENTER),
                                                                KC_LEFT,               TG(ML_MDIA),          TG(ML_SYMB),   KC_PGDOWN,  KC_DOWN,       KC_RIGHT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |Version |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |    . |   0  |   =  |      |
 *   `----------------------------------'                                       `----------------------------------
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |------|------|------|       |------|------|------|
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[ML_SYMB] = LAYOUT_ergodox_pretty_80(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_TRANSPARENT, KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         LALT_T(KC_0),   KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
),
[ML_MDIA] = LAYOUT_ergodox_pretty_80(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,           KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_WWW_BACK,    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,         KC_MS_RIGHT,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_WWW_BACK,                                                                                                    KC_WWW_FORWARD, KC_MS_BTN2,         KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SYSTEM_POWER, KC_SYSTEM_SLEEP,                                      KC_TRANSPARENT, KC_SYSTEM_WAKE,
                                                                    KC_MS_BTN1,     KC_MEDIA_PLAY_PAUSE, KC_BRIGHTNESS_UP,                          KC_AUDIO_VOL_UP, KC_MS_BTN3, KC_MS_BTN2,
                                                                    KC_MS_BTN1,     TG(ML_MDIA),         KC_BRIGHTNESS_DOWN,                        KC_AUDIO_VOL_DOWN,KC_MS_BTN3, KC_MS_BTN2
),
[ML_FUNC] = LAYOUT_ergodox_pretty_80(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
    switch(id) {
        case 0:
            if (record->event.pressed) {
                SEND_STRING ("->");
            }

            break;
    }
    return MACRO_NONE;
};

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
        ergodox_board_led_on();
    }
    else {
        ergodox_board_led_off();
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case ARROW_RIGHT:
        SEND_STRING ("->");
        return false;
    }
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    switch (get_highest_layer(state)) {
        // TODO: Make this relevant to the ErgoDox EZ.
        case ML_SYMB:
            ergodox_right_led_1_on();
            break;
        case ML_MDIA:
            ergodox_right_led_2_on();
            break;
        case ML_FUNC:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }
    return state;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
}
