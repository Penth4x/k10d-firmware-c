/* @k10d copy_struct_fields_to_target @ 0x1047cfb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 16-byte block from an object's offset 0x4c into a target object's offset 0x10
 *   and clears a flag.
 * summary:
 *   The function dereferences a pointer chain from param_1+0x40 to find a target object. It
 *   then copies four 32-bit words (16 bytes) from param_1+0x4c to the target object
 *   starting at offset 0x10. Finally, it writes 0 to param_1+0x2c. No callees are used, and
 *   the specific data structures are not identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_to_target(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x40) + 0xc);
  iVar2 = 0x14;
  do {
    iVar2 = iVar2 + -4;
    *(uint32_t *)(iVar2 + iVar1) = *(uint32_t *)(iVar2 + param_1 + 0x4c);
  } while (iVar2 != 0);
  *(uint32_t *)(param_1 + 0x2c) = 0;
  return;
}
