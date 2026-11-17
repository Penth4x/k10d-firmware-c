/* @k10d dispatch_virtual_slot_if_flags_clear @ 0x1048d3a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 5 of an embedded object when two flag fields are zero, otherwise
 *   calls a fallback handler.
 * summary:
 *   Checks that the int at offset 8 of param_1 is non-zero. If the low 5 bits of the first
 *   ushort are zero (or the ushort is zero) and the low 5 bits of the ushort at offset 0x26
 *   are also zero, it performs a virtual call to slot 5 (vtable offset 0x34) on the object
 *   pointer stored at offset 0x10, passing a this-adjusted pointer. In all other cases it
 *   calls fill_buffer_with_pattern. The function is virtual slot 2 of cls_105b3d9c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_if_flags_clear(ushort *param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (((*param_1 & 0x1f) == 0) || (*param_1 == 0)) {
      if ((param_1[0x13] & 0x1f) == 0) {
        (**(code **)(*(int *)(param_1 + 0x10) + 0x34))
                  ((int)*(short *)(*(int *)(param_1 + 0x10) + 0x30) + (int)param_1);
      }
      else {
        fill_buffer_with_pattern((ushort *)__frv_reg_unset(4));
      }
    }
    else {
      fill_buffer_with_pattern((ushort *)__frv_reg_unset(4));
    }
  }
  return;
}
