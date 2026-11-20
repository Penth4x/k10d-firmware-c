/* @k10d advance_buffer_pointer @ 0x104ad36a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Advances a pointer within a buffer structure by a computed offset, using either a
 *   scaled offset or a direct offset based on alignment.
 * summary:
 *   The function takes a pointer to a structure (param_1) where the first field is a base
 *   pointer and the fourth field is an offset. It checks if the offset is 4-byte aligned.
 *   If aligned, it calls copy_bytes_with_alignment with a scaled offset and remaining size;
 *   otherwise, it calls copy_bytes_aligned with the new absolute address. It then updates
 *   the offset field in the structure by the returned value and returns that value. The
 *   specific behavior of the callees is unknown, but the structure manipulation suggests a
 *   buffer or stream cursor advancement.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int advance_buffer_pointer(int *param_1,uint32_t *param_2,uint32_t param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 0;
  if (iVar2 != 0) {
    uVar1 = param_1[3];
    if ((uVar1 & 3) == 0) {
      iVar3 = copy_bytes_with_alignment((uint32_t *)((uVar1 >> (_DAT_800491c0/*SDRAM*/ & 0x1f)) * 4 + iVar2),(uint32_t *)(param_2),(uint)(param_3), (uint)(param_1[1] - uVar1));
    }
    else {
      iVar3 = copy_bytes_aligned((uint8_t *)(iVar2 + uVar1),(uint8_t *)__frv_reg_unset(5),(uint)(__frv_reg_unset(6)),(uint)(__frv_reg_unset(7)));
    }
    param_1[3] = param_1[3] + iVar3;
  }
  return iVar3;
}
