// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum silakka54_stenography_layers {
    _STENODEF,               // default layout that similar with polyglot layout
    _GRAPHY,                  // steno layout but didn't have number bar
    _QWERTY,                 // default QWERTY layout
    _FNLAY,
    _V,
    _VI,
    _SWITCH,                 // TO layout change see layout below
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
        XXXXXXX, STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_NA,       STN_NB,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NC,
        XXXXXXX, STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,      STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        XXXXXXX,  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,      STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
        KC_ESC,  KC_LSFT, KC_LCTL, KC_LALT, KC_LWIN, KC_SPC,       KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
                                   MO(_SWITCH), STN_A, STN_O,      STN_E,   STN_U,   KC_ENT
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
        STN_N1,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,      STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        STN_N2,  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,      STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
        XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LWIN, KC_SPC,       KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
                                   MO(_SWITCH), STN_A, STN_O,      STN_A,   STN_O,   XXXXXXX
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
                                   KC_LGUI, MO(_FNLAY), KC_SPC,   KC_ENT,  KC_RCTL, KC_RALT
    ),

    // ....................................................................... Function
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │   `  │  F1  │  F2  │  F3  │  F4  │  F5  │   │  F6  │  F7  │  F8  │  F9  │  F10 │  F11 │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │      │      │      │      │   │ PgUp │ PgDn │ Home │  End │  Del │  F12 │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │StnDef│      │      │      │      │      │   │ Left │ Down │  Up  │ Right│   [  │   ]  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │Steno │      │      │      │      │      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │      │      │      │     │      │      │      │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_FNLAY] = LAYOUT(
        KC_GRV,              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_F12,
        TO(_STENODEF),       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
        TO(_GRAPHY),          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                             XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
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
    //  │STDEF |      │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │STENO │      │      │      │      │      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘
    //                      │      │      │      │     │      │      │      │
    //                      └──────┴──────┴──────┘     └──────┴──────┴──────┘

    [_SWITCH] = LAYOUT(
        TO(_QWERTY),          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        TO(_STENODEF),       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        TO(_GRAPHY),          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                         XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R',
                   'L', 'L', 'L',         'R', 'R', 'R'
);
