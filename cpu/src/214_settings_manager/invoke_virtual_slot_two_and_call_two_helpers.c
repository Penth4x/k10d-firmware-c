/* @k10d invoke_virtual_slot_two_and_call_two_helpers @ 0x104b03d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object if non-null, then calls two unnamed helper
 *   functions.
 * summary:
 *   Reads the first pointer from param_1; if non-null, performs a Cfront-style virtual call
 *   to slot 2 (offset 0x10 in the vtable pointer, slot index (0xc-4)/8=1? actually
 *   (0xc-4)/8=1, wait: offset 0xc in vtable means slot (0xc-4)/8 = 1, but the this-adjust
 *   is from offset 8. Let me re-read: `(**(code **)(*(int *)(iVar1 + 0x10) + 0xc))` -
 *   vtable ptr at iVar1+0x10, entry at +0xc. Slot = (0xc - 4)/8 = 1. So it's slot 1, not 2.
 *   The this-adjust is `*(short *)(*(int *)(iVar1 + 0x10) + 8)`. It passes 3 as the second
 *   argument. Then calls get_or_init_sram_buffer_104af136 and release_three_object_handles
 *   unconditionally. The callees are unnamed, so the subsystem is unclear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_and_call_two_helpers(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(*(short *)(*(int *)(iVar1 + 0x10) + 8) + iVar1,3);
  }
  get_or_init_sram_buffer_104af136();
  release_three_object_handles((int *)__frv_reg_unset(4));
  return;
}
