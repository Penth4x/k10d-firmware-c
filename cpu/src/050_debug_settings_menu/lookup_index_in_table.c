/* @k10d lookup_index_in_table @ 0x103b44c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Returns the index (0-12) of a 16-bit value found in a table of 13 entries within a
 *   structure.
 * summary:
 *   The function compares the input value param_2 against 13 consecutive 16-bit fields in
 *   the structure pointed to by param_1, starting at offset 0x4c. It returns the zero-based
 *   index of the first match, or 0 if no match is found (which is ambiguous with a match at
 *   index 0). No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_index_in_table(int param_1,uint param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == *(ushort *)(param_1 + 0x4c)) {
    uVar1 = 0;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x4e)) {
    uVar1 = 1;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x50)) {
    uVar1 = 2;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x52)) {
    uVar1 = 3;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x54)) {
    uVar1 = 4;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x56)) {
    uVar1 = 5;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x58)) {
    uVar1 = 6;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x5a)) {
    uVar1 = 7;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x5c)) {
    uVar1 = 8;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x5e)) {
    uVar1 = 9;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x60)) {
    uVar1 = 10;
  }
  else if (param_2 == *(ushort *)(param_1 + 0x62)) {
    uVar1 = 0xb;
  }
  else if (param_2 == *(ushort *)(param_1 + 100)) {
    uVar1 = 0xc;
  }
  return uVar1;
}
