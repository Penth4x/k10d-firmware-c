/* @k10d call_helper_on_offset_field_104ef4a4 @ 0x104ef4a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls invoke_virtual_slot_two_104272e4 on a field at offset 0x14 when param_2 matches a
 *   specific constant.
 * summary:
 *   Checks if param_2 equals 0x80000014 (the two's complement of -0x7fffffec). If true, it
 *   invokes invoke_virtual_slot_two_104272e4 with the address of the field at offset 0x14
 *   in the object pointed to by param_1, along with constants 0x10d0001 and 0. Returns 0
 *   unconditionally. The function is virtual slot 5 of cls_105c2e20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_offset_field_104ef4a4(int param_1,int param_2)

{
  if (param_2 == -0x7fffffec) {
    invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x14),0x10d0001,0);
  }
  return 0;
}
