/* @k10d copy_aligned_word_block @ 0x104acbca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a block of 32-bit words from param_2 to param_1 using a fast aligned loop plus a
 *   tail handler.
 * summary:
 *   Calls extract_bitfield_with_offset(param_3,4,0) to obtain an aligned word count, then
 *   copies that many words in chunks of three with a remainder loop. If param_3 has a non-
 *   zero low two bits, it copies the remaining bytes via copy_bytes_aligned. The caller is
 *   a virtual method slot, but the callee roles are unknown, so the specific subsystem is
 *   not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_aligned_word_block(uint32_t *param_1,uint32_t *param_2,uint param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar1 = extract_bitfield_with_offset(param_3,4,0);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -3;
    if (2 < iVar1) {
      do {
        *param_1 = *param_2;
        param_1[1] = *param_2;
        param_1[2] = *param_2;
        iVar1 = iVar1 + -3;
        param_1 = param_1 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
    }
  }
  if ((param_3 & 3) != 0) {
    uStack_c = *param_2;
    copy_bytes_aligned(param_1,&uStack_c,param_3 & 3,0);
  }
  return;
}
