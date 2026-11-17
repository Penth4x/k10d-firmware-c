/* @k10d set_object_flag_bit2_1044ad88 @ 0x1044ad88
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears or sets bit 2 of a byte at offset 0x28 in an object's sub-structure, bracketed
 *   by two helper calls.
 * summary:
 *   The function calls call_kernel_with_short_id on the object pointer, then modifies a
 *   specific byte located at param_1[2] + 0x28. If param_2 is 0, it clears bit 2 (mask
 *   0xfb); otherwise, it sets bit 2 (OR 4). It writes the modified byte back, sets the
 *   global _DAT_00000300 to 0, and finally calls check_kernel_call_success_10459d88. The
 *   specific meaning of the flag and the helpers is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_object_flag_bit2_1044ad88(uint32_t *param_1,int param_2)

{
  byte bVar1;
  
  call_kernel_with_short_id(param_1);
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1[2] + 0x28) & 0xfb;
  }
  else {
    bVar1 = *(byte *)(param_1[2] + 0x28) | 4;
  }
  _DAT_00000300 = 0;
  *(byte *)(param_1[2] + 0x28) = bVar1;
  check_kernel_call_success_10459d88(param_1);
  return;
}
