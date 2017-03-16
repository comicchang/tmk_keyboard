#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */

#define ____ TRNS

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Overlay 1: Default Keyboard Layout
     * ,-----------------------------------------------------------.
     * |ESC|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  Bsp|
     * |-----------------------------------------------------------|
     * |CAPS  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift| FN1|
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |      Space             |Alt |Gui |Caps|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN8, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN1,  \
        LCTL,LALT,LGUI,          SPC,                     RALT,RGUI,CAPS,RCTL),

    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |FN8|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  Bsp|
     * |-----------------------------------------------------------|
     * |CAPS  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift| FN1|
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |      SpaceFN           |Alt |Gui |Caps|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,____, \
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,      \
        FN5 ,____,____,____,____,____,____,____,____,____,____,____,     ____,      \
        ____,____,____,____,____,____,____,____,____,____,____,     ____,____,      \
        ____,____,____,          FN0,                     ____,____,____,____),

    /* Overlay 2: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Bsp|Bsp|
     * |-----------------------------------------------------------|
     * |     |   |PgU|   |   |   |   |   |   |Psc|Slk|Pau|Ins  |Del|
     * |-----------------------------------------------------------|
     * |____  |Hom|PgD|End|   |   |Lef|Dow|Up |Rig|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|`  |~  |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, BSPC,BSPC, \
        ____,____,PGUP,____,____,____,____,____,____,PSCR,SLCK,PAUS,INS, DEL,  \
        ____,HOME,PGDN,END, ____,____,LEFT,DOWN,UP,  RGHT,____,____,     PENT, \
        ____,____,____,____,____,SPC, GRV, FN2, ____,____,____,     ____,____, \
        ____,____,____,          ____,                    ____,____,____,____),

    /* Overlay 3: MouseKey
     * ,-----------------------------------------------------------.
     * |CLR|F14|F15|FN3|FN4|   |   |PRV|PLY|NXT|Mut|VoD|VlU|   |   |
     * |-----------------------------------------------------------|
     * |     |Mb2|MUp|Mb1|WUp|   |   |   | Up|   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |MLf|MDn|MDn|WDn|   |   |Lef|Dow|Rig|   |F20|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |         Mb1            |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN30,F14, F15, FN3, FN4, ____,____,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,____,____, \
        ____,BTN2,MS_U,BTN1,WH_U,____,____,____,UP,  ____,____,____,____,____,      \
        ____,MS_L,MS_D,MS_R,WH_D,____,____,LEFT,DOWN,RGHT,____,FN20,     ____,      \
        ____,____,____,____,____,____,____,____,____,____,____,     ____,____,      \
        ____,____,____,          BTN1,                    ____,____,____,____),

    /* Overlay 4: PASSWORD
     * ,-----------------------------------------------------------.
     * |EXT|CLR|PW1|PW2|PW3|   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN21,FN22,FN23,FN24,FN25,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21, \
        FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,      \
        FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,____,     FN21,      \
        FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,FN21,     FN21,____,      \
        FN21,FN21,FN21,          FN21,                    FN21,FN21,FN21,FN21),


    /* Overlay X: xxxxxx
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
/*
    KEYMAP_HHKB(
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,____, \
        ____,____,____,____,____,____,____,____,____,____,____,____,____,____,      \
        ____,____,____,____,____,____,____,____,____,____,____,____,     ____,      \
        ____,____,____,____,____,____,____,____,____,____,____,     ____,____,      \
        ____,____,____,          ____,                    ____,____,____,____),
*/
};

enum function_id {
    TRICKY_ESC,
    DOUBLE_CTRL,
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
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),                                // SPACE LAYER
    [1] = ACTION_LAYER_MOMENTARY(3),                                        // MOUSE LAYER
    [2] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),                                // tilde

    // Media keys in mousekey layer
    [3] = ACTION_MODS_KEY(MOD_LCTL, KC_UP),                                 // Mission Control
    [4] = ACTION_MODS_KEY(MOD_LALT|MOD_LGUI, KC_L),                         // LaunchCenter

    [5] = ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LSFT|MOD_LALT|MOD_LGUI, KC_F18), // Soft MAGIC KEY
    //[6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),                            // click LCTL without other key = ESC
    //[7] = ACTION_FUNCTION_TAP(DOUBLE_CTRL),

    // Shift + ESC = ~
    [8] = ACTION_FUNCTION (TRICKY_ESC),

    // FN + ' = password layer
    [20] = ACTION_LAYER_INVERT(4,ON_BOTH),
    [21] = ACTION_LAYER_OFF(4,ON_PRESS),
    [22] = ACTION_MACRO(CLEAR),
    [23] = ACTION_MACRO(PASSWORD1),
    [24] = ACTION_MACRO(PASSWORD2),
    [25] = ACTION_MACRO(PASSWORD3),

    // FN + ESC = Toggle SpaceFN off (or game mode)
    [30] = ACTION_LAYER_INVERT(1, ON_PRESS)
};


/*
 * Macro definition
 */
#include "keymap_passwords.h"
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case CLEAR: if (record->event.pressed) {return MACRO_CLEAR;};
        case PASSWORD1: if (record->event.pressed) {return MACRO_PASSWORD1;};
        case PASSWORD2: if (record->event.pressed) {return MACRO_PASSWORD2;};
        case PASSWORD3: if (record->event.pressed) {return MACRO_PASSWORD3;};
    }
    return MACRO_NONE;
}

#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t tricky_esc_registered;
    switch (id) {
//        case DOUBLE_CTRL:
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

