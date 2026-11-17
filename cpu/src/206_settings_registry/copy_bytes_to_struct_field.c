/* @k10d copy_bytes_to_struct_field @ 0x104a8c1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Copies a variable-length byte buffer from param_2 into a field of the object at
 *   param_1.
 * summary:
 *   Reads a length or offset from param_1+0xc. If zero, it copies exactly 4 bytes from
 *   param_2 to param_1+0x8. Otherwise, it calls compute_weighted_value and
 *   clamp_value_to_max_104a8b40 to determine a length, then copies that many bytes from
 *   param_2 to the address at param_1+0xc. The callees are unnamed, so the specific data
 *   type is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_to_struct_field(int param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 4;
    do {
      iVar2 = iVar2 + -1;
      *(uint8_t *)(iVar2 + param_1 + 8) = *(uint8_t *)(iVar2 + (int)param_2);
    } while (iVar2 != 0);
  }
  else {
    iVar1 = compute_weighted_value(param_1);
    iVar1 = clamp_value_to_max_104a8b40(iVar1,param_3);
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(uint8_t *)(iVar1 + iVar2) = *(uint8_t *)(iVar1 + (int)param_2);
    }
  }
  return;
}
