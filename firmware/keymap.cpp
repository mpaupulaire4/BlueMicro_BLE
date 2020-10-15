/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                        KC_NO,    KC_NO,    KC_NO
    )};
#if KEYBOARD_SIDE == SINGLE
uint32_t layers[LAYERS][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
        KC_1,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,
        KC_2,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
        KC_3,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,
                                            KC_4,   KC_5,   KC_6
    )
};
#endif


#if KEYBOARD_SIDE == LEFT
uint32_t layers[LAYERS][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------+------|
 * | TAB  |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+------|
 * | LCBR |   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+------|
 * |      |      |      |  GUI | L(1) |Space |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_ESC, KC_Q,   KC_W,   KC_E,    KC_R,      KC_T,
        KC_TAB, KC_A,   KC_S,   KC_D,    KC_F,      KC_G,
        KC_NO,  KC_Z,   KC_X,   KC_C,    KC_V,      KC_B,
                                KC_LGUI, LAYER_1,   KC_LSFT
    ),
/* Layer 1 (Raise)
 * ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |
 * |------+------+------+------+------+------|
 * |   `  |   !  |  @   |   #  |  $   |  %   |
 * |------+------+------+------+------+------|
 * |   (  |   \  |   ^  |   ^  |   &  |   |  |
 * |------+------+------+------+------+------|
 * |      |      |      |  GUI | L(1) |Space |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_TRNS,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_UNDS,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
        KC_LPRN,  KC_BSLS, KC_CIRC, KC_CIRC, KC_AMPR, KC_PIPE,
                                    KC_TRNS, KC_TRNS, KC_TRNS
    ),
/* Layer 2 (lower)
 * ,-----------------------------------------.
 * |  Esc |   !  |   @  |   #  |   $  |   %  |
 * |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * | LCBR |      |      |      |      |      |
 * |------+------+------+------+------+------|
 * |      |      |      | GUI  | L(3) |Shift |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_TRNS, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
        KC_TRNS, KC_NO,   KC_LSFT,  KC_LALT, KC_LCTL, KC_NO,
        KC_TRNS, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,
                                    KC_TRNS, KC_TRNS, KC_NO
    )
};

#endif  // left



#if KEYBOARD_SIDE == RIGHT
uint32_t layers[LAYERS][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------.
 * |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+-------------|
 * |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------|------|
 * |   N  |   M  |   ,  |   .  |   /  | RCBR |
 * |------+------+------+------+------+------|
 * | Space| L(2) | Alt  |      |      |      |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCOLON, KC_QUOT,
        KC_N,    KC_M,    KC_COMMA,KC_DOT,  KC_SLSH,   KC_NO,
        KC_SPC, LAYER_2, KC_ENT
    ),

/* Layer 1 (Raise)
 * ,-----------------------------------------.
 * |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+-------------|
 * |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------|------|
 * |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------|
 * | Space| L(2) | Left |      |      |      |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_6,    KC_7,    KC_8,   KC_9,    KC_0,      KC_TRNS,
        KC_PPLS, KC_4,    KC_5,   KC_6,    KC_MINS,   KC_GRV,
        KC_PAST, KC_1,    KC_2,   KC_3,    KC_SLSH,   KC_RPRN,
        KC_LSFT, KC_P0,   KC_EQUAL
    ),

    /* Layer 2 (lower)
 * ,-----------------------------------------.
 * |   ^  |   &  |   *  |   (  |   )  | Bspc |
 * |------+------+------+------+-------------|
 * |   -  |   =  |   {  |   }  |   |  |  `   |
 * |------+------+------+------+------|------|
 * |   _  |   +  |   [  |   ]  |   \  |  ~   |
 * |------+------+------+------+------+------|
 * | Space| L(2) |  Alt |      |      |      |
 * `-----------------------------------------'
 */
    KEYMAP(
        KC_PGUP,  KC_HOME, KC_UP,   KC_END,  KC_NO,  KC_TRNS,
        KC_PGDOWN,KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,  KC_TRNS,
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS
    )
};

#endif

void setupKeymap() {
    for (int layer = 0; layer < LAYERS; ++layer)
    {
        for (int row = 0; row < MATRIX_ROWS; ++row)
        {
            for (int col = 0; col < MATRIX_COLS; ++col)
            {
                matrix[row][col].addActivation(layer, Method::PRESS, layers[layer][row][col]);
            }
        }
    }

#if KEYBOARD_SIDE == RIGHT
    matrix[2][0].addActivation(0, Method::MT_TAP, KC_RBRC);
    matrix[2][0].addActivation(0, Method::MT_HOLD, KC_RCTL);
#endif

#if KEYBOARD_SIDE == LEFT
    matrix[2][0].addActivation(0, Method::MT_TAP, KC_LBRC);
    matrix[2][0].addActivation(0, Method::MT_HOLD, KC_LCTL);
#endif
}
