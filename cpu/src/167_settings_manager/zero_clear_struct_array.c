/* @k10d zero_clear_struct_array @ 0x1047730e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes an array of 20-byte structures pointed to by param_1[2] and resets the header
 *   fields of param_1.
 * summary:
 *   The function iterates 1999 times, writing 20 bytes (five 32-bit zeros) to each element
 *   of an array whose base address is stored at param_1[2]. After the loop, it clears the
 *   first 8 bytes of the param_1 structure itself (param_1[0], param_1[1], and the word at
 *   offset 6). No callees are invoked, and the specific data structure or subsystem is not
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_clear_struct_array(uint32_t *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1999;
  iVar2 = 0;
  piVar1 = param_1 + 2;
  do {
    *(uint32_t *)(*piVar1 + iVar2) = 0;
    *(uint32_t *)(*piVar1 + iVar2 + 4) = 0;
    *(uint32_t *)(*piVar1 + iVar2 + 8) = 0;
    *(uint32_t *)(*piVar1 + iVar2 + 0xc) = 0;
    *(uint32_t *)(*piVar1 + iVar2 + 0x10) = 0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x14;
  } while (-1 < iVar3);
  *param_1 = 0;
  *(uint16_t *)(param_1 + 1) = 0;
  *(uint16_t *)((int)param_1 + 6) = 0;
  return;
}
