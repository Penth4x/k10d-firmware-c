/* @k10d copy_bytes_with_alignment @ 0x104ac8f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to param_1, using a word-aligned bulk loop plus a
 *   tail handler.
 * summary:
 *   Clamps the copy length to param_4 if param_4 is non-zero and smaller. Calls
 *   extract_bitfield_with_offset with the length, 4, and 0 to obtain an aligned count, then
 *   copies in 3-word chunks followed by a byte-wise tail. If the original length is not a
 *   multiple of 4, calls copy_bytes_aligned to handle the remaining bytes. Returns the
 *   effective length.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint copy_bytes_with_alignment(uint32_t *param_1,uint32_t *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_4 != 0) && (param_4 < param_3)) {
    param_3 = param_4;
  }
  iVar1 = extract_bitfield_with_offset(param_3,4,0);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -3;
    if (2 < iVar1) {
      do {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        param_1 = param_1 + 3;
        iVar1 = iVar1 + -3;
        param_2 = param_2 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  if ((param_3 & 3) != 0) {
    copy_bytes_aligned(param_1,param_2,param_3 & 3,0);
  }
  return param_3;
}
