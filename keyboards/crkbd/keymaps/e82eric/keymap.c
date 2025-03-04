/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

/* typedef struct { */
/*     bool is_press_action; */
/*     uint8_t step; */
/* } tap; */

/* enum tap_dance_codes { */
/*   DANCE_MUTE, */
/*   DANCE_VOLU, */
/*   DANCE_VOLD */
/* }; */

/* enum { */
/*     SINGLE_TAP = 1, */
/*     SINGLE_HOLD, */
/*     DOUBLE_TAP, */
/*     DOUBLE_HOLD, */
/*     DOUBLE_SINGLE_TAP, */
/*     MORE_TAPS */
/* }; */

/* static tap dance_state[1]; */

/* uint8_t dance_step(tap_dance_state_t *state); */

/* uint8_t dance_step(tap_dance_state_t *state) { */
/*     if (state->count == 1) { */
/*         if (state->interrupted || !state->pressed || get_mods()) return SINGLE_TAP; */
/*         else return SINGLE_HOLD; */
/*     } */
/*     /1* else if (state->count == 2) { *1/ */
/*     /1*     if (state->interrupted || get_mods()) return DOUBLE_SINGLE_TAP; *1/ */
/*     /1*     else if (state->pressed) return DOUBLE_HOLD; *1/ */
/*     /1*     else return DOUBLE_TAP; *1/ */
/*     /1* } *1/ */
/*     return MORE_TAPS; */
/* } */

/* void on_dance_mute(tap_dance_state_t *state, void *user_data) { */
/*     if(state->count == 1 && !state->pressed) */
/*     { */
/*         register_code(KC_Y); */
/*         state->finished = 1; */
/*     } */
/*     else */
/*     { */
/*         register_code(KC_MUTE); */
/*         state->finished = 1; */
/*     } */
/* } */

/* void dance_mute_finished(tap_dance_state_t *state, void *user_data) { */
/*     dance_state[0].step = dance_step(state); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: register_code16(KC_Y); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              register_code16(KC_AUDIO_MUTE); */
/*                          } */
/*                          else */
/*                          { */
/*                              register_code16(KC_Y); */
/*                          } */
/*                          break; */
/*         /1* case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break; *1/ */
/*         /1* case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y); *1/ */
/*     } */
/* } */

/* void dance_mute_reset(tap_dance_state_t *state, void *user_data) { */
/*     wait_ms(10); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: unregister_code16(KC_Y); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              unregister_code16(KC_AUDIO_MUTE); */
/*                          } */
/*                          else */
/*                          { */
/*                              unregister_code16(KC_Y); */
/*                          } */
/*                          break; */
/*         /1* case DOUBLE_TAP: unregister_code16(KC_Y); break; *1/ */
/*         /1* case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break; *1/ */
/*     } */
/*     dance_state[0].step = 0; */
/* } */

/* void on_dance_volu(tap_dance_state_t *state, void *user_data) { */
/*     if(state->count == 1 && get_mods()) */
/*     { */
/*         tap_code16(KC_I); */
/*         return; */
/*     } */
/*     if(state->count == 2) { */
/*         tap_code16(KC_I); */
/*         tap_code16(KC_I); */
/*     } */
/*     if(state->count > 2) { */
/*         tap_code16(KC_I); */
/*     } */
/* } */

/* void dance_volu_finished(tap_dance_state_t *state, void *user_data) { */
/*     dance_state[0].step = dance_step(state); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: register_code16(KC_I); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              register_code16(KC_AUDIO_VOL_UP); */
/*                          } */
/*                          else */
/*                          { */
/*                              register_code16(KC_I); */
/*                          } */
/*                          break; */
/*         case DOUBLE_TAP: register_code16(KC_I); register_code16(KC_I); break; */
/*         case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I); */
/*     } */
/* } */

/* void dance_volu_reset(tap_dance_state_t *state, void *user_data) { */
/*     wait_ms(10); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: unregister_code16(KC_I); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              unregister_code16(KC_AUDIO_VOL_UP); */
/*                          } */
/*                          else */
/*                          { */
/*                              unregister_code16(KC_I); */
/*                          } */
/*                          break; */
/*         case DOUBLE_TAP: unregister_code16(KC_I); break; */
/*         case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break; */
/*     } */
/*     dance_state[0].step = 0; */
/* } */

/* void on_dance_vold(tap_dance_state_t *state, void *user_data) { */
/*     if(get_mods()) */
/*     { */
/*         tap_code16(KC_U); */
/*         return; */
/*     } */
/*     if(state->count == 2) { */
/*         tap_code16(KC_U); */
/*         tap_code16(KC_U); */
/*     } */
/*     if(state->count > 2) { */
/*         tap_code16(KC_U); */
/*     } */
/* } */

/* void dance_vold_finished(tap_dance_state_t *state, void *user_data) { */
/*     dance_state[0].step = dance_step(state); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: register_code16(KC_U); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              register_code16(KC_AUDIO_VOL_DOWN); */
/*                          } */
/*                          else */
/*                          { */
/*                              register_code16(KC_U); */
/*                          } */
/*                          break; */
/*         case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break; */
/*         case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U); */
/*     } */
/* } */

/* void dance_vold_reset(tap_dance_state_t *state, void *user_data) { */
/*     wait_ms(10); */
/*     switch (dance_state[0].step) { */
/*         case SINGLE_TAP: unregister_code16(KC_U); break; */
/*         case SINGLE_HOLD: */
/*                          if(!get_mods()) */
/*                          { */
/*                              unregister_code16(KC_AUDIO_VOL_DOWN); */
/*                          } */
/*                          else */
/*                          { */
/*                              unregister_code16(KC_U); */
/*                          } */
/*                          break; */
/*         case DOUBLE_TAP: unregister_code16(KC_U); break; */
/*         case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break; */
/*     } */
/*     dance_state[0].step = 0; */
/* } */

/* tap_dance_action_t tap_dance_actions[] = { */
/*         [DANCE_MUTE] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_mute, dance_mute_finished, dance_mute_reset), */
/*         [DANCE_VOLU] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_volu, dance_volu_finished, dance_volu_reset), */
/*         [DANCE_VOLD] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_vold, dance_vold_finished, dance_vold_reset), */
/* }; */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,LT(2,KC_A),LALT_T(KC_S),LSFT_T(KC_D),LCTL_T(KC_F),LGUI_T(KC_G),   LGUI_T(KC_H),LCTL_T(KC_J),LSFT_T(KC_K),LALT_T(KC_L), LT(1,KC_SCLN), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    RALT_T(KC_X),    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  RALT_T(KC_DOT), KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            QK_LEAD,   LT(3, KC_ESCAPE),  KC_BACKSPACE,     KC_SPACE,   LT(4,KC_ENT), KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                     KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_LBRC,KC_LBRC,KC_RBRC,LSFT(KC_LBRC),LSFT(KC_RBRC), KC_GRV,                    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                      KC_NO, KC_QUOT, LSFT(KC_QUOT),  KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                LSFT(KC_BSLS),LSFT(KC_6),LSFT(KC_7),LSFT(KC_8),LSFT(KC_5),LSFT(KC_5),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,            KC_BSLS,LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,             LSFT(KC_MINS),KC_MINS,LSFT(KC_EQL),KC_EQL,LSFT(KC_GRV),KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,   KC_TRNS,  KC_TRNS,  LSFT(KC_9), LSFT(KC_0), KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                      KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                          KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PGUP, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                      KC_HOME, KC_END, XXXXXXX, XXXXXXX, KC_PGDN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, KC_TRNS,  KC_TRNS,     KC_TAB, KC_TRNS, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_F1,      F2,   KC_F3,   KC_F4,   KC_F5,                     KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TRNS,   KC_F11,KC_F12,KC_TRNS,KC_TRNS,QK_BOOT,                         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, QK_CAPS_WORD_TOGGLE,  KC_DEL,     KC_TRNS, KC_TRNS, KC_NO
                                      //`--------------------------'  `--------------------------'
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_G):
        case LGUI_T(KC_H):
            return TAPPING_TERM + 200;
        case LSFT_T(KC_K):
        case LSFT_T(KC_D):
            return 150;
        /* case TD(DANCE_MUTE): */

        /* case TD(DANCE_VOLU): */
        /* case TD(DANCE_VOLD): */
        /*     return TAPPING_TERM + 200; */
        default:
            return 200;
    }
}

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void)
{
    if (leader_sequence_one_key(KC_L))
    {
        SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)));
    }

    if (leader_sequence_one_key(KC_A))
    {
        SEND_STRING(SS_LCTL(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END))));
    }

    if (leader_sequence_one_key(KC_W))
    {
        SEND_STRING(SS_LCTL(SS_TAP(X_RGHT) SS_LSFT(SS_TAP(X_LEFT))));
    }

    if (leader_sequence_two_keys(KC_D, KC_W))
    {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))) SS_TAP(X_BSPC));
    }

    if (leader_sequence_two_keys(KC_Y, KC_W))
    {
        SEND_STRING(SS_LCTL(SS_TAP(X_RGHT) SS_LSFT(SS_TAP(X_LEFT))) SS_LCTL("c") SS_TAP(X_LEFT));
    }

    if (leader_sequence_two_keys(KC_Y, KC_Y))
    {
        SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)) SS_LCTL("c") SS_TAP(X_LEFT));
    }
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
