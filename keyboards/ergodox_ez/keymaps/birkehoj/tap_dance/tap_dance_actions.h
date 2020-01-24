#ifndef BIRK_TAP_DANCE_ACTIONS_H
#define BIRK_TAP_DANCE_ACTIONS_H
#include "tap_dance/mod_tap_layer_dances/function_row_actions.h"
/*
enum tap_dance_declarations{
    TD_TILD_ESC = 0,
    TD_1_F1,
    TD_2_F2,
    TD_3_F3,
    TD_4_F4,
    TD_5_F5,
    TD_6_F6,
    TD_7_F7,
    TD_8_F8,
    TD_9_F9,
    TD_10_F10,
    TD_11_F11,
    TD_12_F12,
};
 */
//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    //Tap once for Esc, twice for Caps Lock
    [TD_TILD_ESC] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, tilt_esc_finished, tild_esc_reset, DANCING_TERM),
    [TD_1_F1] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, one_f1_finished, one_f1_reset, DANCING_TERM),
    [TD_2_F2] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, two_f2_finished, two_f2_reset, DANCING_TERM),
    [TD_3_F3] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, three_f3_finished, three_f3_reset, DANCING_TERM),
    [TD_4_F4] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, four_f4_finished, four_f4_reset, DANCING_TERM),
    [TD_5_F5] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, five_f5_finished, five_f5_reset, DANCING_TERM),
    [TD_6_F6] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, six_f6_finished, six_f6_reset, DANCING_TERM),
    [TD_7_F7] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, seven_f7_finished, seven_f7_reset, DANCING_TERM),
    [TD_8_F8] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, eight_f8_finished, eight_f8_reset, DANCING_TERM),
    [TD_9_F9] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, nine_f9_finished, nine_f9_reset, DANCING_TERM),
    [TD_0_F10] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, zero_f10_finished, zero_f10_reset, DANCING_TERM),
    [TD_EQ_F11] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, eq_f11_finished, eq_f11_reset, DANCING_TERM),
    [TD_MIN_F12] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, min_f12_finished, min_f12_reset, DANCING_TERM),
// Other declarations would go here, separated by commas, if you have them
};

#endif
