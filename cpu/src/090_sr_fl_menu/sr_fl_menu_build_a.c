/* @k10d sr_fl_menu_build_a @ 0x103ffd50
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed update_value_and_visibility)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Updates a 16-bit value field and a visibility flag on an object based on a table lookup
 *   and index.
 * summary:
 *   The function reads a 16-bit value from a table at 0x10598388 using an index. It
 *   calculates the number of digits (1, 2, or 3) and calls menu_list_build with the value
 *   pointer and digit count. It then uses a virtual call to set a flag (1 or 0) on an
 *   object retrieved via menu_item_register. If the index in r9 is 0x21, it sets the flag
 *   to 0 twice; otherwise, it updates the value and sets the flag to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR focal-length menu list builder #1 (reads u16 FL table @0x10598388, 34 entries 8-800mm). */

void sr_fl_menu_build_a(void)

{
  ushort uVar1;
  int r0_in;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  int *caller_r8;
  uint caller_r9;
  int caller_r14;
  
  *(uint16_t *)(caller_r14 + -2) = *(uint16_t *)(DAT_10598388/*ROM*/ + (r0_in + -1) * 2);
  uVar2 = menu_item_register(*caller_r8);
  uVar1 = *(ushort *)(caller_r14 + -2);
  uVar4 = 3;
  if ((uVar1 < 100) && (9 < uVar1)) {
    uVar4 = 2;
  }
  else if (uVar1 < 10) {
    uVar4 = 1;
  }
  menu_list_build((int *)(uVar2),(uint16_t *)(caller_r14 + -2),(uint8_t)(uVar4),(uint8_t)(1));
  iVar3 = menu_item_register(*caller_r8);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  send_mode_specific_commands(caller_r8,caller_r9);
  if (caller_r9 == 0x21) {
    iVar3 = menu_item_register(*caller_r8);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
    iVar3 = menu_item_register(*caller_r8);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  }
  else {
    uVar1 = *(ushort *)(DAT_10598388/*ROM*/ + (caller_r9 + 1) * 2);
    uVar2 = 3;
    *(ushort *)(caller_r14 + -2) = uVar1;
    if ((uVar1 < 100) && (9 < uVar1)) {
      uVar2 = 2;
    }
    else if (uVar1 < 10) {
      uVar2 = 1;
    }
    uVar4 = menu_item_register(*caller_r8);
    menu_list_build((int *)(uVar4),(uint16_t *)(caller_r14 + -2),(uint8_t)(uVar2),(uint8_t)(1));
    iVar3 = menu_item_register(*caller_r8);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  }
  return;
}
