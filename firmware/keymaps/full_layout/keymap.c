// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum silakka54_stenography_layers {
    _STENODEF,               // default layout that similar with polyglot layout
    _GRAPHY,                  // steno layout but didn't have number bar
    _QWERTY,                 // default QWERTY layout
    _FNLAY,
    _DFSIX,                   // clean version of STENOFEF - Layer one  only have switch key, ESC, and Enter left
    _GRCLQ,                   // clean version of GRAPHY   - Layer two  only have switch key, ESC, and Enter left
    _V,
    _VI,
    _SWITCH,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // ................................................................ Stenography Default
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │      │  #1  │  #2  │  #3  │  #4  │  #A  │   │  #B  │  #6  │  #7  │  #8  │  #9  │  #C  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │  -S  │  -T  │  -P  │  -H  │  *1  │   │  *3  │  -F  │  -P  │  -L  │  -T  │  -D  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │  -S  │  -K  │  -W  │  -R  │  *2  │   │  *4  │  -R  │  -B  │  -G  │  -S  │  -Z  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Esc │ Shift│ Ctrl │  Alt │  Win │ Space│   │ -Vol │ Left │ Down │  Up  │ Right│ +Vol │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │Switch│  -A  │  -O  │     │  E-  │  U-  │ Enter│
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_STENODEF] = LAYOUT(
        XXXXXXX, ST_N1,  ST_N2,  ST_N3,  ST_N4,  ST_NA,       ST_NB,  ST_N6,  ST_N7,  ST_N8,  ST_N9,  ST_NC,
        XXXXXXX, ST_S1,  ST_TL,  ST_PL,  ST_HL,  ST_ST1,      ST_ST3, ST_FR,  ST_PR,  ST_LR,  ST_TR,  ST_DR,
        XXXXXXX,  ST_S2,  ST_KL,  ST_WL,  ST_RL,  ST_ST2,      ST_ST4, ST_RR,  ST_BR,  ST_GR,  ST_SR,  ST_ZR,
        KC_ESC,  KC_LSFT, KC_LCTL, KC_LALT, KC_LWIN, KC_SPC,       KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
                                   MO(_SWITCH), ST_A, ST_O,      ST_E,   ST_U,   KC_ENT
    ),

    // .......................................................................... Steno
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │  #1  │  S-  │  -T  │  -P  │  -H  │  *1  │   │  *3  │  F-  │  P-  │  L-  │  T-  │  D-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  #2  │  S-  │  -K  │  -W  │  -R  │  *2  │   │  *4  │  R-  │  B-  │  G-  │  S-  │  Z-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │ Shift│ Ctrl │  Alt │  Win │ Space│   │ -Vol │ Left │ Down │  Up  │ Right│ +Vol │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Esc │      │      │      │      │      │   │      │      │      │      │      │ Enter│
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │Switch│  -A  │  -O  │     │  -A  │  -O  │      │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_GRAPHY] = LAYOUT(
        ST_N1,  ST_S1,  ST_TL,  ST_PL,  ST_HL,  ST_ST1,      ST_ST3, ST_FR,  ST_PR,  ST_LR,  ST_TR,  ST_DR,
        ST_N2,  ST_S2,  ST_KL,  ST_WL,  ST_RL,  ST_ST2,      ST_ST4, ST_RR,  ST_BR,  ST_GR,  ST_SR,  ST_ZR,
        XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LWIN, KC_SPC,       KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
                                   MO(_SWITCH), ST_A, ST_O,      ST_A,   ST_O,   XXXXXXX
    ),

    // ......................................................................... Qwerty
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │  Esc │   1  │   2  │   3  │   4  │   5  │   │   6  │   7  │   8  │   9  │   0  │   -  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Tab │   Q  │   W  │   E  │   R  │   T  │   │   Y  │   U  │   I  │   O  │   P  │ Bksp │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │ Ctrl │   A  │   S  │   D  │   F  │   G  │   │   H  │   J  │   K  │   L  │   ;  │   '  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │ Shift│   Z  │   X  │   C  │   V  │   B  │   │   N  │   M  │   ,  │   .  │   /  │ Shift│
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │  GUI │ Funct│ Space│     │ Enter│ Ctrl │  Alt │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                              KC_LGUI, MO(_FNLAY), KC_SPC,          KC_ENT,  KC_RCTL, KC_RALT
    ),

    // ....................................................................... Function
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │   `  │  F1  │  F2  │  F3  │  F4  │  F5  │   │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │      │      │      │      │   │ PgUp │ PgDn │ Home │  End │  Del │  F12 │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │STDef│      │      │      │      │      │   │ Left │ Down │  Up  │ Right│   [  │   ]  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │Steno │      │      │      │      │      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │      │      │      │     │      │      │      │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_FNLAY] = LAYOUT(
        KC_GRV,              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_F12,
        TO(_STENODEF),    TO(_DFSIX), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
        TO(_GRAPHY),      TO(_GRCLQ), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                             XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
    ),


    [_DFSIX] = LAYOUT(
        XXXXXXX, ST_N1,  ST_N2,  ST_N3,  ST_N4,  ST_NA,       ST_NB,  ST_N6,  ST_N7,  ST_N8,  ST_N9,  ST_NC,
        XXXXXXX, ST_S1,  ST_TL,  ST_PL,  ST_HL,  ST_ST1,      ST_ST3, ST_FR,  ST_PR,  ST_LR,  ST_TR,  ST_DR,
        XXXXXXX,  ST_S2,  ST_KL,  ST_WL,  ST_RL,  ST_ST2,      ST_ST4, ST_RR,  ST_BR,  ST_GR,  ST_SR,  ST_ZR,
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   MO(_SWITCH), ST_A, ST_O,      ST_E,   ST_U,   KC_ENT
    ),


    [_GRCLQ] = LAYOUT(
        ST_N1,  ST_S1,  ST_TL,  ST_PL,  ST_HL,  ST_ST1,      ST_ST3, ST_FR,  ST_PR,  ST_LR,  ST_TR,  ST_DR,
        ST_N2,  ST_S2,  ST_KL,  ST_WL,  ST_RL,  ST_ST2,      ST_ST4, ST_RR,  ST_BR,  ST_GR,  ST_SR,  ST_ZR,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
                                   MO(_SWITCH), ST_A, ST_O,      ST_A,   ST_O,   XXXXXXX
    ),



    // .............................................................................. V
    [_V] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // ............................................................................. VI
    [_VI] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // ......................................................................... Switch
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │Qwerty│      │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │STDEF │DFSIX │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │STENO │GRCLQ │      │      │      │      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │      │      │      │     │      │      │      │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_SWITCH] = LAYOUT(
        TO(_QWERTY),       XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,            XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        TO(_STENODEF),     TO(_DFSIX), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        TO(_GRAPHY),       TO(_GRCLQ), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L',         'R', 'R', 'R'
);
