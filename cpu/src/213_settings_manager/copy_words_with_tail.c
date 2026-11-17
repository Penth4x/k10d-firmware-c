/* @k10d copy_words_with_tail @ 0x104ac966
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 words from param_2 to param_1, clamped by param_4, using a word loop
 *   plus a tail handler.
 * summary:
 *   Clamps the copy length to param_4 when param_4 is non-zero and smaller. Calls
 *   extract_bitfield_with_offset with the length, 2, and 0; if the result is non-zero,
 *   decrements by 3 and copies in 3-word chunks while at least 3 remain, then copies the
 *   remaining words one at a time. If the original length is odd, calls copy_bytes_aligned
 *   with the destination, source, 1, and 0. Returns the (possibly clamped) length.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_words_with_tail(uint16_t *param_1,uint16_t *param_2,uint param_3,uint param_4)

{
  uint16_t uVar1;
  int iVar2;
  
  if ((param_4 != 0) && (param_4 < param_3)) {
    param_3 = param_4;
  }
  iVar2 = extract_bitfield_with_offset(param_3,2,0);
  if (iVar2 != 0) {
    iVar2 = iVar2 + -3;
    if (2 < iVar2) {
      do {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        param_1 = param_1 + 3;
        iVar2 = iVar2 + -3;
        param_2 = param_2 + 3;
      } while (-1 < iVar2);
    }
    for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  if ((param_3 & 1) != 0) {
    copy_bytes_aligned((void *)param_1,(void *)param_2,param_3 & 1,0);
  }
  return param_3;
}
