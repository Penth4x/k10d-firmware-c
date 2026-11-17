/* @k10d compute_byte_offset_from_index @ 0x104808f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Returns a byte offset computed as a base value plus an index times 8, or zero if the
 *   index lookup fails.
 * summary:
 *   Calls screen_key_find with a global pointer and param_2 to obtain an index. If the
 *   result is negative, returns 0. Otherwise, adds the result multiplied by 8 to the
 *   integer stored at offset 8 of param_1. The function appears to be a simple offset
 *   calculator for an 8-byte-stride table or array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_byte_offset_from_index(void *param_1,uint8_t *param_2)

{
  int iVar1;
  
  iVar1 = screen_key_find((void *)_DAT_80010030/*SDRAM*/,param_2);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 8) + iVar1 * 8;
  }
  return iVar1;
}
