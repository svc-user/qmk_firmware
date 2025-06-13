#include QMK_KEYBOARD_H
#include "keymap_danish.h"
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#define _____ _______
#define BASE 0
#define NAV_NUM 1
#define FNC_SPC 2
#define MEDIA 3

enum {
	TD_AE,
	TD_OE,
	TD_AA
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_OE] = ACTION_TAP_DANCE_DOUBLE(DK_O, DK_OSTR),
    [TD_AE] = ACTION_TAP_DANCE_DOUBLE(DK_E, DK_AE),
    [TD_AA] = ACTION_TAP_DANCE_DOUBLE(DK_A, DK_ARNG),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x6_3(
        KC_ESC,		DK_Q,		DK_W,	TD(TD_AE),	DK_R,	DK_T,		DK_Y,	DK_U,			DK_I,		TD(TD_OE),	DK_P,		KC_LGUI,	
        KC_BSPC,	TD(TD_AA),	DK_S,	DK_D,		DK_F,	DK_G,		DK_H,	DK_J,			DK_K,		DK_L,		DK_LABK,	KC_TAB,	
        KC_LSFT,	DK_Z,		DK_X,	DK_C,		DK_V,	DK_B,		DK_N,	LT(3, DK_M),	DK_COMM,	DK_DOT,		DK_MINS,	KC_RSFT,	
        
         		KC_LCTL,	LT(2,KC_SPC),	LT(1,KC_LGUI),		LT(1,KC_PENT),	KC_SPC,	KC_RALT
    ),
    
    [NAV_NUM] = LAYOUT_split_3x6_3(
		QK_BOOT,	_____,		_____,		_____,		_____,		_____,		DK_AT,	DK_LBRC,	DK_RBRC,	DK_7,	DK_8,	DK_9,
		KC_DEL,		KC_LEFT,	KC_UP,		KC_DOWN,	KC_RGHT,	_____,		DK_DLR,	DK_LCBR,	DK_RCBR,	DK_4,	DK_5,	DK_6,
		_____,		_____,		KC_HOME,	KC_END,		_____,		_____,		DK_PND,	DK_EURO,	DK_0,		DK_1,	DK_2,	DK_3,
		
										_____,	_____,	_____,		_____,	_____,	_____
	),
    
    [FNC_SPC] = LAYOUT_split_3x6_3(
		KC_F1,		KC_F2,	KC_F3,	KC_F4,	KC_F5,	KC_F6,		DK_EXLM,	DK_DQUO,	DK_HASH,	DK_CURR,	DK_PERC,	DK_AMPR,
		KC_F7,		KC_F8,	KC_F9,	KC_F10,	KC_F11,	KC_F12,		DK_SLSH,	DK_LPRN,	DK_RPRN,	DK_EQL,		DK_QUES,	DK_GRV,
		KC_LSFT,	_____,	_____,	_____,	_____,	_____,		DK_BSLS,	DK_ASTR,	DK_SCLN,	DK_COLN,	DK_TILD,	DK_CIRC,
		
								KC_RALT,	_____,	_____,		_____,	_____,	_____
	),

	[MEDIA] = LAYOUT_split_3x6_3(
		_____,	_____,	_____,	_____,	_____,	_____,		_____,	_____,	_____,	_____,	_____,	_____,
		_____,	_____,	_____,	_____,	_____,	_____,		_____,	_____,	_____,	_____,	_____,	_____,
		_____,	_____,	_____,	_____,	_____,	_____,		_____,	_____,	_____,	_____,	_____,	_____,

							_____,	KC_MPLY,	_____,		_____,	_____,	_____
	)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

