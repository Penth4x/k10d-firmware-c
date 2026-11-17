/* @k10d read_flag_bit_from_param_1044ae68 @ 0x1044ae68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls two helpers, clears a global, and returns bit 2 of a byte at offset 0x28 in a
 *   sub-object.
 * summary:
 *   Invokes call_kernel_with_short_id and check_kernel_call_success_10459d88 with param_1,
 *   sets _DAT_00000300 to 0, reads a byte from *(param_1+2)+0x28, and returns that byte
 *   ANDed with 4. The specific subsystem role is not determinable from the pseudocode or
 *   unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte read_flag_bit_from_param_1044ae68(uint32_t *param_1)

{
  byte bVar1;
  
  call_kernel_with_short_id(param_1);
  _DAT_00000300 = 0;
  bVar1 = *(byte *)(param_1[2] + 0x28);
  check_kernel_call_success_10459d88(param_1);
  return bVar1 & 4;
}
