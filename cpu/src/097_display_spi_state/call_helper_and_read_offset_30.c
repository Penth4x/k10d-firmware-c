/* @k10d call_helper_and_read_offset_30 @ 0x10410c58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1, param_2, and 1, then returns the 16-bit value at
 *   param_1+0x1e.
 * summary:
 *   The function invokes write_two_byte_pair_to_ch2 with the first two arguments and a
 *   constant third argument of 1. It then reads and returns a 16-bit value from offset 0x1e
 *   (30) of the structure pointed to by param_1. The specific role of the helper and the
 *   structure field is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t call_helper_and_read_offset_30(cls_1059be70 *param_1,uint32_t param_2)

{
  uint16_t uVar1;
  
  write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(param_2),(int)(1));
  uVar1 = (uVar1 & ~(((uint64_t)0xff) << 0)) | ((((uint64_t)(param_1->field_0x1e)) & ((uint64_t)0xff)) << 0);
  uVar1 = (uVar1 & ~(((uint64_t)0xff) << 8)) | ((((uint64_t)(param_1->field_0x1f)) & ((uint64_t)0xff)) << 8);
  return uVar1;
}
