/* @k10d sr_fl_menu_build_b @ 0x103ffe08
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed register_value_with_digit_count)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to a buffer, computes its digit count, and registers it via a
 *   helper and virtual call.
 * summary:
 *   The function reads a 16-bit value from a table indexed by unaff_r9, stores it at
 *   unaff_r14-2, and determines a digit count (1, 2, or 3) based on the value's magnitude.
 *   It calls menu_item_register to obtain a pointer, passes it to menu_list_build along
 *   with the buffer address and digit count, then performs a virtual method call on the
 *   object returned by a second call to menu_item_register. The specific subsystem is not
 *   verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* SR focal-length menu list builder #2. */

void sr_fl_menu_build_b(void)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  int *caller_r8;
  int caller_r9;
  uint32_t uVar4;
  int caller_r14;
  
  uVar1 = *(ushort *)(&DAT_10598388/*ROM*/ + (caller_r9 + 1) * 2);
  uVar4 = 3;
  *(ushort *)(caller_r14 + -2) = uVar1;
  if ((uVar1 < 100) && (9 < uVar1)) {
    uVar4 = 2;
  }
  else if (uVar1 < 10) {
    uVar4 = 1;
  }
  uVar2 = menu_item_register(*caller_r8);
  menu_list_build((int *)(uVar2),(uint16_t *)(caller_r14 + -2),(uint8_t)(uVar4),(uint8_t)(1));
  iVar3 = menu_item_register(*caller_r8);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  return;
}
