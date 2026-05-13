// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum polyglot_layers {
    _STENODEF, 
    _STENO,    
    _QWERTY,
    _NUMBER,
    _SYMBOLS,
    _QSTENO,   
    _V,
    _VI,
    _SWITCH,   
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // ................................................................ Stenography Def
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │  #1  │  S-  │  -T  │  -P  │  -H  │  *1  │   │  *3  │  F-  │  P-  │  L-  │  T-  │  D-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  #2  │  S-  │  -K  │  -W  │  -R  │  *2  │   │  *4  │  R-  │  B-  │  G-  │  S-  │  Z-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Esc │ Shift│ Ctrl │  Alt │  Win │ Space│   │ -Vol │      │      │  Up  │      │ +Vol │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │Switch│      │      │  -A  │  -O  │   │  E-  │  U-  │ Left │ Down │ Right│ Enter│
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_STENODEF] = LAYOUT(
        STN_N1,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,      STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        STN_N2,  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,      STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
        KC_ESC,  KC_LSFT, KC_LCTL, KC_LALT, KC_LWIN, KC_SPC,       KC_VOLD, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_VOLU,
        KC_TRNS, MO(_SWITCH), KC_TRNS, KC_TRNS, STN_A, STN_O,      STN_E,   STN_U,   KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // .......................................................................... Steno
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │  #1  │  S-  │  -T  │  -P  │  -H  │  *1  │   │  *3  │  F-  │  P-  │  L-  │  T-  │  D-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  #2  │  S-  │  -K  │  -W  │  -R  │  *2  │   │  *4  │  R-  │  B-  │  G-  │  S-  │  Z-  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │ TRNS │ TRNS │ TRNS │ TRNS │ TRNS │ TRNS │   │ TRNS │ TRNS │ TRNS │ TRNS │ TRNS │ TRNS │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Esc │Switch│ TRNS │ TRNS │  -A  │  -O  │   │  E-  │  U-  │ TRNS │ TRNS │ TRNS │ Enter│
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_STENO] = LAYOUT(
        STN_N1,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,      STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
        STN_N2,  STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,      STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_ESC,  MO(_SWITCH), KC_TRNS, KC_TRNS, STN_A, STN_O,      STN_E,   STN_U,   KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ......................................................................... Qwerty
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │  Esc │   Q  │   W  │   E  │   R  │   T  │   │   Y  │   U  │   I  │   O  │   P  │ Bksp │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │ Ctrl │   A  │   S  │   D  │   F  │   G  │   │   H  │   J  │   K  │   L  │   ;  │   '  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │StnDef│   Z  │   X  │   C  │   V  │   B  │   │   N  │   M  │   ,  │   .  │   /  │ Enter│
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │Switch│      │  GUI │ Num  │ Space│   │ Space│ Symb │ AltGr│      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        TO(_STENODEF), KC_Z, KC_X, KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        KC_TRNS, MO(_SWITCH), KC_TRNS, KC_LGUI, MO(_NUMBER), KC_SPC, KC_SPC, MO(_SYMBOLS), KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ......................................................................... Number
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │      │   1  │   2  │   3  │   4  │   5  │   │   6  │   7  │   8  │   9  │   0  │ Bksp │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │  Tab │      │      │  Up  │      │ Right│   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │  Del │ Left │ Down │ Right│      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_NUMBER] = LAYOUT(
        KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_RGHT,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ........................................................................ Symbols
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │      │   !  │   @  │   #  │   $  │   %  │   │   ^  │   &  │   * │   (  │   )  │ Bksp │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │ Mute │ -Vol │ +Vol │      │   │   -  │   =  │   [  │   ]  │   \  │   `  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │      │      │      │      │   │   _  │   +  │   {  │   }  │   |  │   ~  │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_SYMBOLS] = LAYOUT(
        KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS,      KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ........................................................................ Q-Steno
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │   1  │   Q  │   W  │   E  │   R  │   T  │   │   Y  │   U  │   I  │   O  │   P  │   [  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │   2  │   A  │   S  │   D  │   F  │   G  │   │   H  │   J  │   K  │   L  │   ;  │   '  │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │      │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │      │Switch│      │      │   C  │   V  │   │   N  │   M  │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_QSTENO] = LAYOUT(
        KC_1,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_2,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, MO(_SWITCH), KC_TRNS, KC_TRNS, KC_C, KC_V,        KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // .............................................................................. V
    [_V] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ............................................................................. VI
    [_VI] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // ......................................................................... Switch
    //
    //  LEFT SIDE                                     RIGHT SIDE
    //  ┌──────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
    //  │      │      │      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │StnDef│ Steno│      │      │      │      │   │      │      │      │      │      │      │
    //  ├──────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
    //  │Qwerty│QSteno│      │      │      │      │   │      │      │      │      │      │      │
    //  └──────┴──────┴──────┴──────┴──────┴──────┘   └──────┴──────┴──────┴──────┴──────┴──────┘

    [_SWITCH] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_STENODEF), TO(_STENO), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_QWERTY), TO(_QSTENO),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R', 
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R', 
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R', 
    'L', 'L', 'L', 'L', 'L', 'L',         'R', 'R', 'R', 'R', 'R', 'R', 
                   'L', 'L', 'L',         'R', 'R', 'R'
);
// clang-format on