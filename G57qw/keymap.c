#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RSFT, KC_QUOTE),
    SC_LCPO,        MT(MOD_LGUI, KC_Z),MT(MOD_LALT, KC_X),KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       MT(MOD_RALT, KC_DOT),MT(MOD_RGUI, KC_SLASH),SC_RCPC,        
                                                    LT(2,KC_SPACE), TD(DANCE_0),                                    TD(DANCE_1),    LT(3,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        
                                                    KC_SPACE,       LT(2,KC_ENTER),                                 TO(0),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_DELETE,      
    LCTL(KC_TAB),   KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_EQUAL,       KC_UNDS,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_NO,          
    LCTL(LSFT(KC_TAB)),LCTL(KC_A),     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_PLUS,        KC_MINUS,       KC_LPRN,        KC_RPRN,        KC_NO,          KC_NO,          
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_PSCR,                                        KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(6)
  ),
  [3] = LAYOUT_voyager(
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,      
    KC_TRANSPARENT, KC_GRAVE,       KC_MINUS,       KC_PLUS,        KC_LCBR,        KC_RCBR,                                        KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_NO,          
    KC_LEFT_SHIFT,  KC_QUOTE,       KC_UNDS,        KC_EQUAL,       KC_LPRN,        KC_RPRN,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_ENTER,       
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,                                        KC_CAPS,        KC_NO,          KC_NO,          KC_NO,          KC_F11,         KC_F12,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SCRL,                                        KC_NUM,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, KC_KP_ENTER,    
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_NO,                                          KC_NO,          KC_KP_0,        KC_NO,          KC_KP_DOT,      KC_KP_SLASH,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    LGUI(KC_GRAVE), LALT(LGUI(LCTL(KC_1))),LALT(LGUI(LCTL(KC_2))),LALT(LGUI(LCTL(KC_3))),LALT(LGUI(LCTL(KC_4))),LALT(LGUI(LCTL(KC_5))),                                TO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_DELETE)),
    KC_TRANSPARENT, LALT(LCTL(KC_A)),KC_NO,          LGUI(LCTL(KC_D)),KC_NO,          LGUI(KC_T),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_O)),LCTL(LSFT(KC_SPACE)),KC_TRANSPARENT, 
    LCTL(LSFT(KC_ESCAPE)),LALT(LGUI(LCTL(LSFT(KC_A)))),LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_F4)),LGUI(LCTL(KC_RIGHT)),KC_NO,                                          LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          LGUI(LSFT(KC_C)),LALT(LGUI(LCTL(LSFT(KC_C)))),KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, AS_TOGG,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          RGB_TOG,        RGB_SLD,                                        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,KC_NO,          KC_NO,          KC_NO,          AS_RPT,         
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          RGB_VAI,        RGB_SAI,                                        RGB_SPI,        RGB_HUI,        KC_NO,          KC_NO,          KC_NO,          AS_UP,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          RGB_VAD,        RGB_SAD,                                        RGB_SPD,        RGB_HUD,        KC_NO,          KC_NO,          KC_NO,          AS_DOWN,        
                                                    TO(0),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_RCTL, KC_0),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_SPACE, KC_5, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_X, KC_TAB, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F5),
    COMBO(combo1, LALT(KC_TAB)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0} },

    [2] = { {0,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {86,255,255}, {43,255,255}, {43,255,255}, {21,255,255}, {21,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {43,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {0,255,255}, {139,255,255}, {139,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {139,255,255}, {139,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {0,0,0}, {139,255,255}, {139,255,255}, {139,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {139,255,255}, {139,255,255}, {139,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {139,255,255}, {139,255,255}, {139,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {43,255,255}, {86,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {21,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {43,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {236,255,255}, {236,255,255}, {236,255,255}, {224,255,193}, {0,0,0}, {0,0,0}, {236,255,255}, {236,255,255}, {236,255,255}, {224,255,193}, {0,0,0}, {0,0,0}, {236,255,255}, {236,255,255}, {236,255,255}, {224,255,193}, {224,255,193}, {0,0,0}, {236,255,255}, {0,0,0}, {224,255,193}, {224,255,193}, {0,0,0}, {0,0,255}, {0,0,0} },

    [5] = { {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,0}, {21,255,255}, {0,0,0}, {86,255,255}, {0,0,0}, {21,255,255}, {0,255,255}, {21,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,0,0}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_SPACE));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_SPACE)); register_code16(LALT(KC_SPACE));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: layer_move(4); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: layer_move(4); break;
        case DOUBLE_SINGLE_TAP: layer_move(4); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD:
          layer_off(5);
        break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};
