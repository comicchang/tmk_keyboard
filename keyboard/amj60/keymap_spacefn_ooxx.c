#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
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
     * |FN6 |Alt |Cmd |      Space             |Alt |Gui |Caps|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN8, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,FN10,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN1,  \
        LCTL,LALT,LGUI,          FN0,                     RALT,RGUI,CAPS,RCTL),


    /* Overlay 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Bsp|Bsp|
     * |-----------------------------------------------------------|
     * |     |   |PgU|   |   |   |   |   |   |Psc|Slk|Pau|Ins  |Del|
     * |-----------------------------------------------------------|
     * |TRNS  |Hom|PgD|End|   |   |Lef|Dow|Up |Rig|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|`  |~  |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, BSPC,BSPC, \
        TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,INS, DEL,  \
        TRNS,HOME,PGDN,END, TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     PENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,SPC, GRV, FN2, TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 2: MouseKey
     * ,-----------------------------------------------------------.
     * |   |F14|F15|FN3|FN4|   |   |PRV|PLY|NXT|Mut|VoD|VlU|   |   |
     * |-----------------------------------------------------------|
     * |     |Mb2|MUp|Mb1|WUp|   |   |   | Up|   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |MLf|MDn|MDn|WDn|   |   |Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |         Mb1            |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        TRNS,F14, F15, FN3, FN4, TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,TRNS,TRNS, \
        TRNS,BTN2,MS_U,BTN1,WH_U,TRNS,TRNS,TRNS,UP,  TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,MS_L,MS_D,MS_R,WH_D,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          BTN1,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 3: PASSWORD
     * ,-----------------------------------------------------------.
     * |CLR|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |  J|   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        FN20,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN11,TRNS,TRNS,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 4: PASSWORD
     * ,-----------------------------------------------------------.
     * |   |PW1|PW2|PW3|   |   |   |   |   |   |   |   |   |   |   |
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
        TRNS,FN21,FN22,FN23,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

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
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
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
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),                                // SPACE LAYER
    [1] = ACTION_LAYER_MOMENTARY(2),                                        // MOUSE LAYER
    [2] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),                                // tilde

    // Media keys in mousekey layer
    [3] = ACTION_MODS_KEY(MOD_LCTL, KC_UP),                                 // Mission Control
    [4] = ACTION_MODS_KEY(MOD_LALT|MOD_LGUI, KC_L),                         // LaunchCenter
    //[5] = ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LSFT|MOD_LALT|MOD_LGUI, KC_F19), // MAGIC KEY
    //[6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),                            // click LCTL without other key = ESC
    //[7] = ACTION_FUNCTION_TAP(DOUBLE_CTRL),
    [8] = ACTION_FUNCTION (TRICKY_ESC),
    // ' + J = password layer
    [10] = ACTION_LAYER_TAP_KEY(3, KC_QUOT),                                // SPACE LAYER
    [11] = ACTION_LAYER_TAP_KEY(4, KC_J),                                // SPACE LAYER

    [20] = ACTION_MACRO(CLEAR),
    [21] = ACTION_MACRO(PASSWORD1),
    [22] = ACTION_MACRO(PASSWORD2),
    [23] = ACTION_MACRO(PASSWORD3),
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

