/* @k10d read_flag_bit_from_param_1044ae9e @ 0x1044ae9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls two helpers, clears a global, and returns bit 1 of a byte field at offset 0x28 in
 *   a sub-object.
 * summary:
 *   The function first calls call_kernel_with_short_id with the input pointer, then sets
 *   global _DAT_00000300 to 0. It reads a byte from the address stored in param_1[2] plus
 *   offset 0x28, calls check_kernel_call_success_10459d88, and returns the result of
 *   masking that byte with 0x2 (bit 1). The specific subsystem role is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte read_flag_bit_from_param_1044ae9e(uint32_t *param_1)

{
  byte bVar1;
  
  call_kernel_with_short_id(param_1);
  _DAT_00000300 = 0;
  bVar1 = *(byte *)(param_1[2] + 0x28);
  check_kernel_call_success_10459d88(param_1);
  return bVar1 & 2;
}
