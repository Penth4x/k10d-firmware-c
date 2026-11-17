/* @k10d field_setter @ 0x10428900
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_setting_field_if_enabled)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_3 to a byte offset in a settings object, gated by an enable flag at a
 *   range-dependent offset.
 * summary:
 *   The function selects one of three enable-flag bytes (at offsets 0x148, 0x170, or 0x198)
 *   based on the range of param_2 (0xb1-0xd7, 0xd9-0xff, or 0x101-0x127). If the selected
 *   flag is non-zero, it writes param_3 to the byte at offset 0x98 + param_2 in the object
 *   pointed to by param_1. If the flag is zero or param_2 is outside the valid ranges, the
 *   write is skipped. This acts as a conditional setter for individual fields within a
 *   larger configuration or settings block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Object field setter: set(obj, field#, value). */

void field_setter(int param_1,int param_2,uint8_t param_3)

{
  char cVar1;
  
  if ((param_2 < 0xb1) || (0xd7 < param_2)) {
    if ((param_2 < 0xd9) || (0xff < param_2)) {
      if ((param_2 < 0x101) || (0x127 < param_2)) goto LAB_10428960;
      cVar1 = *(char *)(param_1 + 0x198);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x170);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x148);
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_10428960:
  *(uint8_t *)(param_1 + 0x98 + param_2) = param_3;
  return;
}
