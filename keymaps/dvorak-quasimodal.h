/* -*- mode: c++ -*-
* A quasimodal Dvorak layout containing almost all the keys of a standard keyboard. 
* Copyright (C) 2020 Jason Koh <wildlymanifest@fastmail.net>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

/* layers */
#define DVRK 0
#define FNNM 1
#define PUNV 2

#define MO(n) ShiftToLayer(n)
#define LGUI_T(n) MT(LeftGui, n)
#define RGUI_T(n) MT(RightGui, n)
#define LALT_T(n) MT(LeftAlt, n)
#define RALT_T(n) MT(RightAlt, n)

/* *INDENT-OFF* */
KEYMAPS(
  /* Dvorak */
  [DVRK] = KEYMAP_STACKED
  (
       Key_Quote       ,Key_Comma   ,Key_Period  ,Key_P         ,Key_Y
      ,Key_A           ,Key_O       ,Key_E       ,Key_U         ,Key_I
      ,Key_Semicolon   ,Key_Q       ,Key_J       ,Key_K         ,Key_X
      ,Key_LeftControl ,Key_LeftGui ,Key_LeftAlt ,MO(FNNM)      ,Key_LeftShift ,Key_Backspace

                 ,Key_F          ,Key_G     ,Key_C        ,Key_R        ,Key_L
                 ,Key_D          ,Key_H     ,Key_T        ,Key_N        ,Key_S
                 ,Key_B          ,Key_M     ,Key_W        ,Key_V        ,Key_Z
      ,Key_Space ,Key_RightShift ,MO(PUNV)  ,Key_RightAlt ,Key_RightGui ,Key_RightControl
  ),
  /* Function keys, numeric keypad */
  [FNNM] = KEYMAP_STACKED
  (
       Key_F11 ,Key_F12 ,System_PowerDown ,M(RESET) ,Key_Sysreq
      ,Key_F6  ,Key_F7  ,Key_F8           ,Key_F9   ,Key_F10
      ,Key_F1  ,Key_F2  ,Key_F3           ,Key_F4   ,Key_F5
      ,___     ,___     ,___              ,___      ,___     ,Key_Escape

                  ,Key_KeypadDivide   ,Key_Keypad7  ,Key_Keypad8  ,Key_Keypad9        ,Key_KeypadSubtract
                  ,Key_KeypadMultiply ,Key_Keypad4  ,Key_Keypad5  ,Key_Keypad6        ,Key_KeypadAdd
                  ,Key_KeypadEquals   ,Key_Keypad1  ,Key_Keypad2  ,Key_Keypad3        ,Key_KeypadEnter
      ,Key_Enter  ,___                ,Key_Keypad0  ,___          ,RGUI_T(KeypadDot)  ,___
   ),
  /* Punctuation, Navigation */
  [PUNV] = KEYMAP_STACKED
  (
       Key_Backtick ,Key_Slash      ,Key_Backslash  ,Key_LeftBracket  ,Key_RightBracket
      ,Key_6        ,Key_7          ,Key_8          ,Key_9            ,Key_0
      ,Key_1        ,Key_2          ,Key_3          ,Key_4            ,Key_5
      ,___          ,LGUI_T(Minus)  ,LALT_T(Equals) ,___              ,___              ,Key_Tab

                        ,Key_PageUp               ,Key_Home                   ,Key_UpArrow              ,Key_End                ,Key_Insert
                        ,Key_PageDown             ,Key_LeftArrow              ,Key_DownArrow            ,Key_RightArrow         ,Key_Delete
                        ,Consumer_VolumeDecrement ,Consumer_ScanPreviousTrack ,Consumer_PlaySlashPause  ,Consumer_ScanNextTrack ,Consumer_VolumeIncrement
      ,LSHIFT(Key_Tab)  ,___                      ,___                        ,___                      ,___                    ,___
   )
)
/* *INDENT-ON* */
