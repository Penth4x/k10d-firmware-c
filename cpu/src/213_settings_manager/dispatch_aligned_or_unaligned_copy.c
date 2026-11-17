/* @k10d dispatch_aligned_or_unaligned_copy @ 0x104ad3be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects an aligned or unaligned copy helper based on pointer alignment, then reports
 *   the result.
 * summary:
 *   Checks that both param_1 and *param_2 are non-null. If the offset in param_2[2] and
 *   param_1[3] are both 4-byte aligned, it calls advance_buffer_pointer with a computed
 *   pointer (offset shifted by a global shift amount and added to *param_2); otherwise it
 *   calls advance_stream_read_cursor with a byte pointer. The return value is passed to
 *   advance_buffer_read_pointer_104ad348 and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_aligned_or_unaligned_copy(int *param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *param_2;
  if ((*param_1 != 0) && (iVar1 != 0)) {
    uVar2 = param_2[2];
    if (((uVar2 & 3) == 0) && ((param_1[3] & 3U) == 0)) {
      iVar3 = advance_buffer_pointer(param_1,(uint32_t *)((uVar2 >> (_DAT_800491c0/*SDRAM*/ & 0x1f)) * 4 + iVar1),
                           param_3);
    }
    else {
      iVar3 = advance_stream_read_cursor(param_1,(uint8_t *)(iVar1 + uVar2),param_3);
    }
    advance_buffer_read_pointer_104ad348(param_2,iVar3);
  }
  return iVar3;
}
