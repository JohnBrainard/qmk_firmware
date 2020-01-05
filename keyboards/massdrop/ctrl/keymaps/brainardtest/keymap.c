#include QMK_KEYBOARD_H

enum ctrl_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase
    L_BRD,              //LED Brightness Decrease
    L_EDG_I,            //LED Edge Brightness Increase
    L_EDG_D,            //LED Edge Brightness Decrease
    L_EDG_M,            //LED Edge lighting mode
    L_PTN,              //LED Pattern Select Next
    L_PTP,              //LED Pattern Select Previous
    L_PSI,              //LED Pattern Speed Increase
    L_PSD,              //LED Pattern Speed Decrease
    L_T_MD,             //LED Toggle Mode
    L_T_ONF,            //LED Toggle On / Off
    L_ON,               //LED On
    L_OFF,              //LED Off
    L_T_BR,             //LED Toggle Breath Effect
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction and effect
    U_T_AGCR,           //USB Toggle Automatic GCR control
    DBG_TOG,            //DEBUG Toggle On / Off
    DBG_MTRX,           //DEBUG Toggle Matrix Prints
    DBG_KBD,            //DEBUG Toggle Keyboard Prints
    DBG_MOU,            //DEBUG Toggle Mouse Prints
    DBG_FAC,            //DEBUG Factory light testing (All on white)
    MD_BOOT             //Restart into bootloader after hold timeout
};

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM
keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] =
LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, \
 KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, \
 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, \
 KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, \
 KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(
1),   KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
[1] =
LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, _______, _______, \
 _______, TG(
2),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   KC_MPLY, KC_MSTP, KC_VOLU, \
        L_T_BR,  L_PSD,   L_BRI,   L_PSI,   L_EDG_I, _______, _______, _______, U_T_AGCR,_______, _______, _______, _______, _______,   KC_MPRV, KC_MNXT, KC_VOLD, \
        L_T_PTD, L_PTP,   L_BRD,   L_PTN,   L_EDG_D, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        _______, L_T_MD,  L_T_ONF, _______, L_EDG_M, MD_BOOT, TG_NKRO, _______, _______, _______, _______, _______,                              _______,          \
        _______, _______, _______,                   DBG_FAC,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
[2] =
LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
 _______, KC_LALT, KC_LGUI, _______, _______, _______, _______, _______, _______, _______, _______  \

),

/*
[X] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,          \
    _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
),
*/
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;
    static uint8_t scroll_effect = 0;

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                else gcr_desired += LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                else gcr_desired -= LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_EDG_M:
            if (record->event.pressed) {
                led_edge_mode++;
                if (led_edge_mode > LED_EDGE_MODE_MAX) {
                    led_edge_mode = LED_EDGE_MODE_ALL;
                }
            }
            return false;
        case L_EDG_I:
            if (record->event.pressed) {
                led_edge_brightness += 0.1;
                if (led_edge_brightness > 1) { led_edge_brightness = 1; }
            }
            return false;
        case L_EDG_D:
            if (record->event.pressed) {
                led_edge_brightness -= 0.1;
                if (led_edge_brightness < 0) { led_edge_brightness = 0; }
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                I2C3733_Control_Set(!I2C3733_Control_Get());
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                I2C3733_Control_Set(1);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                I2C3733_Control_Set(0);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                scroll_effect++;
                if (scroll_effect == 1) {               //Patterns with scroll move horizontal (Right to left)
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                } else if (scroll_effect == 2) {        //Patterns with scroll move vertical (Top to bottom)
                    led_animation_direction = 1;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 3) {        //Patterns with scroll move vertical (Bottom to top)
                    led_animation_direction = 0;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 4) {        //Patterns with scroll explode from center
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else if (scroll_effect == 5) {        //Patterns with scroll implode on center
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else {                                //Patterns with scroll move horizontal (Left to right)
                    scroll_effect = 0;
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                }
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_FAC:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                led_lighting_mode = LED_MODE_NORMAL;
                led_edge_brightness = 1;
                led_edge_mode = LED_EDGE_MODE_ALL;
                led_animation_breathing = 0;
                led_animation_id = 7; //led_programs.c led_setups leds_white index
                gcr_desired = LED_GCR_MAX;
                I2C3733_Control_Set(1);
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= BOOTKEY_HOLD_MS) {
                    reset_keyboard();
                }
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}


led_instruction_t led_instructions[] = {

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

                // 0b111111110001110000000011110
                .id0 = 0x7F8E01E,

                // 0b111111000000000011111110000
                .id1 = 0x7E007F0,

                // 0b1000000001111100
                .id2 = 0x807C,
                .r = 255,
                .g = 255,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

                // 0b11111000000000000000000111100000
                .id0 = 0xF80001E0,

                // 0b1111000000000111111100000000001
                .id1 = 0x7803F801,

                // 0b11111110000111110000000
                .id2 = 0x7F0F80,
                .r = 0,
                .g = 0,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,

                // 0b1110001111000000001
                .id0 = 0x71E01,

                // 0b10000000000111000000000000001110
                .id1 = 0x801C000E,

                // 0b111000000000011
                .id2 = 0x7003,
                .r = 255,
                .g = 0,
                .b = 0,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 0,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b0
                .id2 = 0x0,

                // 0b11100000000000001110000
                .id3 = 0x700070,
                .r = 255,
                .g = 255,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 0,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b0
                .id2 = 0x0,

                // 0b11111111111110000000
                .id3 = 0xFFF80,
                .r = 0,
                .g = 0,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 0,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b11111111100000000000000000000000
                .id2 = 0xFF800000,

                // 0b1111
                .id3 = 0xF,
                .r = 255,
                .g = 0,
                .b = 0,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 2,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b0
                .id2 = 0x0,

                // 0b11100000000000001110000
                .id3 = 0x700070,
                .r = 255,
                .g = 255,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 2,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b11111111100000000000000000000000
                .id2 = 0xFF800000,

                // 0b1111
                .id3 = 0xF,
                .r = 0,
                .g = 0,
                .b = 255,
        },

        {
                .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB | LED_FLAG_MATCH_LAYER,
                .layer = 2,


                // 0b0
                .id0 = 0x0,

                // 0b0
                .id1 = 0x0,

                // 0b0
                .id2 = 0x0,

                // 0b11111111111110000000
                .id3 = 0xFFF80,
                .r = 255,
                .g = 0,
                .b = 0,
        },


        {.end = 1}
};
