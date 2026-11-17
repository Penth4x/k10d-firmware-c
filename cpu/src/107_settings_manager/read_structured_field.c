/* @k10d read_structured_field @ 0x10428704
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 16-bit value from a base pointer offset by a computed index and a mode-
 *   dependent base offset.
 * summary:
 *   The function calculates an offset into memory based on param_2 and param_3 (param_3 * 2
 *   + param_2 * 8) and adds it to a base address derived from param_1 and param_4. The base
 *   address is param_1 + 0x50, 0x68, 0x80, or 0x38 depending on whether param_4 is 0, 1, 2,
 *   or other. It then returns the 16-bit value at that computed address. No callees are
 *   present, and the specific data structure or subsystem is not identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_structured_field(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    iVar2 = param_1 + 0x50;
    iVar1 = param_3 * 2 + param_2 * 8;
  }
  else if (param_4 == 1) {
    iVar2 = param_1 + 0x68;
    iVar1 = param_3 * 2 + param_2 * 8;
  }
  else {
    iVar1 = param_3 * 2 + param_2 * 8;
    if (param_4 == 2) {
      iVar2 = param_1 + 0x80;
    }
    else {
      iVar2 = param_1 + 0x38;
    }
  }
  return *(uint16_t *)(iVar2 + iVar1);
}
