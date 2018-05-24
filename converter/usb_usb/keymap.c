/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of   the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"

#define ____ TRNS

enum keymap_layout {
    BASE = 0,
    MAC,
    SPACEFN,
    MOUSE,
    PASSWD,
};



const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Layer 0: base Keyboard Layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return|               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl|Gui|Alt|           Space               |Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|Ent|
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [BASE] = KEYMAP(
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,
        FN5, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI, APP,FN1,      LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    /* Overlay 2: MAC layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |Hyper2|   |   |   |   |   |   |   |   |   |   |   |        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |   |alt|cmd|                               |cmd|alt|   |   | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [MAC] = KEYMAP(
        ____,     ____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,    ____,____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,    ____,____,____,
        CAPS,____,____,____,____,____,____,____,____,____,____,____,     ____,                       ____,____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,          ____,         ____,         ____,____,____,
        ____,LALT,LGUI,         ____,                     RGUI,RALT,____,____,    ____,____,____,    ____,     ____,____
    ),

    /* Overlay 3: SpaceFN
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|    Del| |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |   |PgU|   |   |   |   |   |   |Psc|Slk|Pau|Ins  |Del| |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |Hom|PgD|End|   |   |Lef|Dow|Up |Rig|   |   |Enter   |              |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |Spc|`  |~  |   |   |   |     |    |    |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |   |   |   |                               |   |   |   |   | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [SPACEFN] = KEYMAP(
        ____,     ____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,
        ____,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, DEL,    ____,____,____,    ____,____,____,____,
        ____,____,PGUP,____,____,____,____,____,____,PSCR,SLCK,PAUS, INS,____,    ____,____,____,    ____,____,____,
        ____,HOME,PGDN,END ,____,____,LEFT,DOWN,  UP,RGHT,____,____,     PENT,                       ____,____,____,____,
        ____,____,____,____,____, SPC, GRV, FN2,____,____,____,          ____,         ____,         ____,____,____,
        ____,____,____,         ____,                     ____,____,____,____,    ____,____,____,    ____,     ____,____
    ),

    /* Overlay 4: MouseKey
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |SPC|   |F14|F15|FN3|FN4| |   |   |PRV|PLY| |NXT|Mut|VoD|VlU| |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |SPC|F14|F15|FN3|FN4|   |   |PRV|PLY|NXT|Mut|VoD|VlU|       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |Mb2|MUp|Mb1|WUp|   |   |   | Up|   |   |   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |MLf|MDn|MDn|WDn|   |   |Lef|Dow|Rig|   |F20|        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |   |   |   |                               |   |   |   |   | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [MOUSE] = KEYMAP(
            FN30,     F14 ,F15 ,FN3 ,FN4 ,____,____,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,    ____,____,____,
            FN30,F14 ,F15 ,FN3 ,FN4 ,____,____,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,____,    ____,____,____,    ____,____,____,____,
        ____,BTN2,MS_U,BTN1,WH_U,____,____,____,UP  ,____,____,____,____,____,    ____,____,____,    ____,____,____,
        CAPS,MS_L,MS_D,MS_R,WH_D,____,____,LEFT,DOWN,RGHT,____,FN20,     ____,                       ____,____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,          ____,         ____,         ____,____,____,
        FN31,____,____,         BTN1,                     ____,____,____,____,    ____,____,____,    ____,     ____,____
    ),

    /* Overlay 5: PASSWORD
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |   |   |SPC|MAC|RST|   | |   |   |   |   | |   |   |   |   | |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |EXT|CLR|PW1|PW2|PW3|   |   |   |   |   |   |   |   |       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |SPC|MAC|   |RST|   |   |   |   |   |   |   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |   |   |   |                               |   |   |   |   | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    [PASSWD] = KEYMAP(
        FN21,     FN30,FN31,FN29,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,    FN21,FN21,FN21,
        FN21,FN22,FN23,FN24,FN25,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,    FN21,FN21,FN21,    FN21,FN21,FN21,FN21,
        FN21,FN30,FN31,FN21,FN29,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,    FN21,FN21,FN21,    FN21,FN21,FN21,
        FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,____,     FN21,                       FN21,FN21,FN21,FN21,
        FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,          FN21,         FN21,         FN21,FN21,FN21,
        FN21,FN21,FN21,         FN21,                     FN21,FN21,FN21,____,    FN21,FN21,FN21,    FN21,     FN21,FN21
    ),


    /* ANSI layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |   |   |   |   |   |   | |   |   |   |   | |   |   |   |   | |   |   |   |
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     | |   |   |   | |   |   |   |   |
     * |-----------------------------------------------------------| `-----------' |-----------|   |
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |               |   |   |   |   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |     |   |     |   |   |   |   |
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |   |   |   |                               |   |   |   |   | |   |   |   | |       |   |   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */

    /*
    [LAYER] = KEYMAP(
        ____,     ____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,    ____,____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,    ____,____,____,    ____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,____,     ____,                       ____,____,____,____,
        ____,____,____,____,____,____,____,____,____,____,____,          ____,         ____,         ____,____,____,
        ____,____,____,         ____,                     ____,____,____,____,    ____,____,____,    ____,     ____,____
    ),
    */

};


enum function_id {
    TRICKY_ESC,
    DOUBLE_CTRL,
    SET_DEFAULT_LAYER_SPACEFN,
    SET_DEFAULT_LAYER_MAC,
    JUMP_BOOTLOADER,
};
enum macro_id {
    CLEAR,
    PASSWORD1,
    PASSWORD2,
    PASSWORD3,
};

/*
 * Fn action definition
 */

const action_t fn_actions[] PROGMEM = {

    [0]  = ACTION_LAYER_TAP_KEY   ( SPACEFN, KC_SPACE), // SPACE LAYER
    [1]  = ACTION_LAYER_MOMENTARY ( MOUSE),             // MOUSE LAYER
    [2]  = ACTION_MODS_KEY        ( MOD_LSFT, KC_GRV),  // tilde

    // Media keys in mousekey layer
    [3] = ACTION_MODS_KEY        ( MOD_LCTL, KC_UP),                              // Mission Control
    [4] = ACTION_MODS_KEY        ( MOD_LALT|MOD_LGUI, KC_L),                      // LaunchCenter
    [5] = ACTION_MODS_TAP_KEY    ( MOD_LCTL|MOD_LSFT|MOD_LALT|MOD_LGUI, KC_F18),  // Soft MAGIC KEY
    [6] = ACTION_MODS_TAP_KEY    ( MOD_LCTL|MOD_LSFT|MOD_LALT|MOD_LGUI, KC_CAPS), // Soft MAGIC KEY

    // Shift + ESC = ~
    [8]  = ACTION_FUNCTION        ( TRICKY_ESC),

    // FN + ' = password layer
    [20] = ACTION_LAYER_INVERT    ( PASSWD,ON_BOTH),
    [21] = ACTION_LAYER_OFF       ( PASSWD,ON_PRESS),
    [22] = ACTION_MACRO           ( CLEAR),
    [23] = ACTION_MACRO           ( PASSWORD1),
    [24] = ACTION_MACRO           ( PASSWORD2),
    [25] = ACTION_MACRO           ( PASSWORD3),

    // FN + ' + F1~F2 = Toggle layers
    // FN + ' + r = reboot to bootloader
    [29] = ACTION_FUNCTION        ( JUMP_BOOTLOADER),
    [30] = ACTION_FUNCTION        ( SET_DEFAULT_LAYER_SPACEFN),
    [31] = ACTION_FUNCTION        ( SET_DEFAULT_LAYER_MAC),

};


/*
 * Macro definition
 */
#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case CLEAR:     if (record->event.pressed) {return MACRO_CLEAR;};
        case PASSWORD1: if (record->event.pressed) {return MACRO_PASSWORD1;};
        case PASSWORD2: if (record->event.pressed) {return MACRO_PASSWORD2;};
        case PASSWORD3: if (record->event.pressed) {return MACRO_PASSWORD3;};
    }
    return MACRO_NONE;
}

#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
extern uint32_t default_layer_state ;
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  static uint8_t tricky_esc_registered;
  switch (id) {
    case SET_DEFAULT_LAYER_MAC:
      if (!record->event.pressed) {
        default_layer_xor((1UL<<MAC));
        //eeconfig_write_default_layer((uint8_t)(default_layer_state));
      }
      break;
    case SET_DEFAULT_LAYER_SPACEFN:
      if (!record->event.pressed) {
        //default_layer_xor((1UL<<NORMAL));
        //eeconfig_write_default_layer((uint8_t)(default_layer_state));
      }
      break;
    case JUMP_BOOTLOADER:
      if (!record->event.pressed) {
        bootloader_jump();
      }
      break;
    case TRICKY_ESC:
      if (record->event.pressed) {
        if (get_mods() & MODS_SHIFT_MASK) {
          tricky_esc_registered = KC_GRV;
        }
        else {
          tricky_esc_registered = KC_ESC;
        }
        add_key(tricky_esc_registered);
        send_keyboard_report();
      }
      else {
        del_key(tricky_esc_registered);
        send_keyboard_report();
      }
    default:
      break;
  }
}
