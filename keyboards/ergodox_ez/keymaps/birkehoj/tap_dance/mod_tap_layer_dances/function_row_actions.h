#ifndef BIRK_FUNCTIONS_ROW_ACTIONS_H
#define BIRK_FUNCTIONS_ROW_ACTIONS_H

#include "keycode.h"
#include "quantum_keycodes.h"

#include "tap_dance/tap_dance_setup.h"
#include "tap_dance/tap_dances.h"
#include "tap_dance/tap_dance_actions.h"

//instanalize an instance of 'tap' for the Semicolon - Colon tap dance.
static tap tilt_esc_state = {
    .is_press_action = true,
    .state           = 0
};

void tilt_esc_finished(qk_tap_dance_state_t *state, void *user_data) {
    tilt_esc_state.state = current_dance(state);
    switch (tilt_esc_state.state) {
        case SINGLE_TAP:
            register_code(KC_GRAVE);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_GRAVE);
            break;

        case DOUBLE_TAP:
            register_code(KC_ESC);
            break;
    }
}

void tild_esc_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (tilt_esc_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_GRAVE);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_GRAVE);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_ESC);
            break;
    }
    tilt_esc_state.state = 0;
}

static tap one_f1_state = {
    .is_press_action = true,
    .state           = 0
};

void one_f1_finished(qk_tap_dance_state_t *state, void *user_data) {
    one_f1_state.state = current_dance(state);
    switch (one_f1_state.state) {
        case SINGLE_TAP:
            register_code(KC_1);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_1);
            break;

        case DOUBLE_TAP:
            register_code(KC_F1);
            break;
    }
}

void one_f1_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (one_f1_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_1);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_1);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F1);
            break;
    }
    one_f1_state.state = 0;
}


static tap two_f2_state = {
    .is_press_action = true,
    .state           = 0
};

void two_f2_finished(qk_tap_dance_state_t *state, void *user_data) {
    two_f2_state.state = current_dance(state);
    switch (two_f2_state.state) {
        case SINGLE_TAP:
            register_code(KC_2);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_2);
            break;

        case DOUBLE_TAP:
            register_code(KC_F2);
            break;
    }
}

void two_f2_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (two_f2_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_2);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_2);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F2);
            break;
    }
    two_f2_state.state = 0;
}


static tap three_f3_state = {
    .is_press_action = true,
    .state           = 0
};

void three_f3_finished(qk_tap_dance_state_t *state, void *user_data) {
    three_f3_state.state = current_dance(state);
    switch (three_f3_state.state) {
        case SINGLE_TAP:
            register_code(KC_3);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_3);
            break;

        case DOUBLE_TAP:
            register_code(KC_F3);
            break;
    }
}

void three_f3_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (three_f3_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_3);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_3);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F3);
            break;
    }
    three_f3_state.state = 0;
}


static tap four_f4_state = {
    .is_press_action = true,
    .state           = 0
};

void four_f4_finished(qk_tap_dance_state_t *state, void *user_data) {
    four_f4_state.state = current_dance(state);
    switch (four_f4_state.state) {
        case SINGLE_TAP:
            register_code(KC_4);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_4);
            break;

        case DOUBLE_TAP:
            register_code(KC_F4);
            break;
    }
}

void four_f4_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (four_f4_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_4);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_4);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F4);
            break;
    }
    four_f4_state.state = 0;
}


static tap five_f5_state = {
    .is_press_action = true,
    .state           = 0
};

void five_f5_finished(qk_tap_dance_state_t *state, void *user_data) {
    five_f5_state.state = current_dance(state);
    switch (five_f5_state.state) {
        case SINGLE_TAP:
            register_code(KC_5);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_5);
            break;

        case DOUBLE_TAP:
            register_code(KC_F5);
            break;
    }
}

void five_f5_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (five_f5_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_5);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_5);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F5);
            break;
    }
    five_f5_state.state = 0;
}


static tap six_f6_state = {
    .is_press_action = true,
    .state           = 0
};

void six_f6_finished(qk_tap_dance_state_t *state, void *user_data) {
    six_f6_state.state = current_dance(state);
    switch (six_f6_state.state) {
        case SINGLE_TAP:
            register_code(KC_6);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_6);
            break;

        case DOUBLE_TAP:
            register_code(KC_F6);
            break;
    }
}

void six_f6_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (six_f6_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_6);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_6);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F6);
            break;
    }
    six_f6_state.state = 0;
}


static tap seven_f7_state = {
    .is_press_action = true,
    .state           = 0
};

void seven_f7_finished(qk_tap_dance_state_t *state, void *user_data) {
    seven_f7_state.state = current_dance(state);
    switch (seven_f7_state.state) {
        case SINGLE_TAP:
            register_code(KC_7);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_7);
            break;

        case DOUBLE_TAP:
            register_code(KC_F7);
            break;
    }
}

void seven_f7_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (seven_f7_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_7);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_7);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F7);
            break;
    }
    seven_f7_state.state = 0;
}


static tap eight_f8_state = {
    .is_press_action = true,
    .state           = 0
};

void eight_f8_finished(qk_tap_dance_state_t *state, void *user_data) {
    eight_f8_state.state = current_dance(state);
    switch (eight_f8_state.state) {
        case SINGLE_TAP:
            register_code(KC_8);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_8);
            break;

        case DOUBLE_TAP:
            register_code(KC_F8);
            break;
    }
}

void eight_f8_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (eight_f8_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_8);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_8);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F8);
            break;
    }
    eight_f8_state.state = 0;
}


static tap nine_f9_state = {
    .is_press_action = true,
    .state           = 0
};

void nine_f9_finished(qk_tap_dance_state_t *state, void *user_data) {
    nine_f9_state.state = current_dance(state);
    switch (nine_f9_state.state) {
        case SINGLE_TAP:
            register_code(KC_9);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_9);
            break;

        case DOUBLE_TAP:
            register_code(KC_F9);
            break;
    }
}

void nine_f9_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (nine_f9_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_9);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_9);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F9);
            break;
    }
    nine_f9_state.state = 0;
}


static tap zero_f10_state = {
    .is_press_action = true,
    .state           = 0
};

void zero_f10_finished(qk_tap_dance_state_t *state, void *user_data) {
    zero_f10_state.state = current_dance(state);
    switch (zero_f10_state.state) {
        case SINGLE_TAP:
            register_code(KC_0);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_0);
            break;

        case DOUBLE_TAP:
            register_code(KC_F10);
            break;
    }
}

void zero_f10_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (zero_f10_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_0);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_0);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F10);
            break;
    }
    zero_f10_state.state = 0;
}


static tap eq_f11_state = {
    .is_press_action = true,
    .state           = 0
};

void eq_f11_finished(qk_tap_dance_state_t *state, void *user_data) {
    eq_f11_state.state = current_dance(state);
    switch (eq_f11_state.state) {
        case SINGLE_TAP:
            register_code(KC_EQUAL);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_EQUAL);
            break;

        case DOUBLE_TAP:
            register_code(KC_F11);
            break;
    }
}

void eq_f11_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (eq_f11_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_EQUAL);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_EQUAL);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F11);
            break;
    }
    eq_f11_state.state = 0;
}


static tap min_f12_state = {
    .is_press_action = true,
    .state           = 0
};

void min_f12_finished(qk_tap_dance_state_t *state, void *user_data) {
    min_f12_state.state = current_dance(state);
    switch (min_f12_state.state) {
        case SINGLE_TAP:
            register_code(KC_MINUS);
            break;

        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_MINUS);
            break;

        case DOUBLE_TAP:
            register_code(KC_F12);
            break;
    }
}

void min_f12_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (min_f12_state.state) {
        case SINGLE_TAP:
            unregister_code(KC_MINUS);
            break;

        case SINGLE_HOLD:
            unregister_code(KC_LSFT);
            unregister_code(KC_MINUS);
            break;

        case DOUBLE_TAP:
            unregister_code(KC_F12);
            break;
    }
    min_f12_state.state = 0;
}

#endif
