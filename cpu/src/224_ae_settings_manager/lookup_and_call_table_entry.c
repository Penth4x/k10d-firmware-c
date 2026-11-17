/* @k10d lookup_and_call_table_entry @ 0x104be0f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Indexes a table of short pairs by param_2 and calls a helper if the entry is non-zero.
 * summary:
 *   Computes a pointer into a table located at param_1 + 0x2c4c, where each entry is 0xb34
 *   bytes (2836) and starts with two shorts. If both shorts are zero, returns 0. Otherwise
 *   calls read_byte_at_offset_1051ed64 with the entry pointer and param_3, returning its
 *   result. The caller is resolve_pointer_with_fallback.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t lookup_and_call_table_entry(int param_1,uint param_2,int param_3)

{
  short *psVar1;
  uint8_t uVar2;
  
  uVar2 = 0;
  psVar1 = (short *)(param_1 + 0x2c4c + (param_2 & 0xffff) * 0xb34);
  if ((*psVar1 != 0) || (psVar1[1] != 0)) {
    uVar2 = read_byte_at_offset_1051ed64(psVar1,param_3);
  }
  return uVar2;
}
