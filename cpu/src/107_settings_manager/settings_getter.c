/* @k10d settings_getter @ 0x10428ca2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_indexed_byte)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a byte from an object at an offset, with conditional gating for three specific
 *   index ranges.
 * summary:
 *   The function takes an object pointer (param_1) and an index (param_2). For indices in
 *   [0xb0-0xd7], [0xd8-0xff], and [0x100-0x127], it checks a specific byte at offsets
 *   0x148, 0x170, or 0x198 respectively; if that byte is zero, it returns 0. Otherwise, or
 *   for other indices, it returns the byte at offset 0x98 + param_2. This pattern suggests
 *   a sparse or conditional data structure where certain fields are gated by enable flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Persistent-settings getter: get(obj, setting#). [state+0x164] = the settings/calibration store.
    */

uint8_t settings_getter(int param_1,int param_2)

{
  char cVar1;
  
  if ((param_2 < 0xb0) || (0xd7 < param_2)) {
    if ((param_2 < 0xd8) || (0xff < param_2)) {
      if ((param_2 < 0x100) || (0x127 < param_2)) goto LAB_10428cba;
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
    return 0;
  }
LAB_10428cba:
  return *(uint8_t *)(param_1 + 0x98 + param_2);
}
