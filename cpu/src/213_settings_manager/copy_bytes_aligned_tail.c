/* @k10d copy_bytes_aligned_tail @ 0x104acc2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to param_1 using a word-aligned loop plus a tail
 *   handler.
 * summary:
 *   Calls extract_bitfield_with_offset(param_3,4,0) to obtain a count, then copies that
 *   many 4-byte words from param_2 into param_1 in a do-while loop. A second loop copies
 *   the remaining bytes one at a time. If param_3 is not a multiple of 4, it calls
 *   copy_bytes_aligned(param_1,param_2,param_3 & 3,0) to handle the unaligned tail. The
 *   callees are unnamed, so the exact subsystem is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_aligned_tail(uint32_t *param_1,uint32_t *param_2,uint param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  
  iVar1 = extract_bitfield_with_offset(param_3,4,0);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -3;
    if (2 < iVar1) {
      do {
        *param_1 = *param_2;
        puVar2 = param_2 + 2;
        *param_1 = param_2[1];
        param_2 = param_2 + 3;
        *param_1 = *puVar2;
        iVar1 = iVar1 + -3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar3;
    }
  }
  if ((param_3 & 3) != 0) {
    copy_bytes_aligned((void *)param_1,(void *)param_2,param_3 & 3,0);
  }
  return;
}
