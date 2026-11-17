/* @k10d copy_bytes_with_offset @ 0x1051efae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies up to 8 bytes from param_2 to param_1+2, using a 3-byte unrolled loop for the
 *   bulk.
 * summary:
 *   Calls count_string_bytes(param_2) to obtain a length, clamps it to a maximum of 8. It
 *   then copies that many bytes from param_2 into the destination buffer starting at offset
 *   +2 relative to param_1. The copy is optimized with a 3-byte unrolled loop followed by a
 *   tail loop for the remaining bytes. The role of count_string_bytes is unknown, so the
 *   specific data being copied cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_with_offset(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = count_string_bytes(param_2);
  if (8 < iVar3) {
    iVar3 = 8;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar3 = iVar3 + -3;
    iVar2 = iVar1;
    if (2 < iVar3) {
      do {
        *(char *)((int)param_1 + iVar2 + 2) = param_2[iVar2];
        *(char *)((int)param_1 + iVar2 + 3) = param_2[iVar2 + 1];
        iVar1 = iVar2 + 3;
        iVar3 = iVar3 + -3;
        *(char *)((int)param_1 + iVar2 + 4) = param_2[iVar2 + 2];
        iVar2 = iVar1;
      } while (-1 < iVar3);
    }
    for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
      *(char *)((int)param_1 + iVar1 + 2) = param_2[iVar1];
      iVar1 = iVar1 + 1;
    }
  }
  return;
}
