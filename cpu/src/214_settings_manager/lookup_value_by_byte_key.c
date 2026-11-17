/* @k10d lookup_value_by_byte_key @ 0x104b27e4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a table selected by a byte key, falling back to a default.
 * summary:
 *   Iterates over 16 entries (0x10) comparing param_2 to a byte table at 0x105b7ecc. On
 *   match, it dereferences a pointer array at *param_1 indexed by the loop counter and
 *   returns the found value, or the default if the slot is null. If no key matches, it
 *   returns the default value computed from param_1[4] and param_3. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_value_by_byte_key(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1[4] + param_3 * 4);
  uVar2 = 0;
  do {
    if (param_2 == *(byte *)(uVar2 + 0x105b7ecc/*ROM*/)) {
      iVar1 = *(int *)(*param_1 + uVar2 * 4);
      if (iVar1 == 0) {
        return iVar3;
      }
      return iVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return iVar3;
}
