/* @k10d set_flag_bit_in_object_field_1045757c @ 0x1045757c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 0 of a 16-bit field at offset 0x1000 in an object pointed to by
 *   param_1+0x10.
 * summary:
 *   The function reads a 16-bit value from memory at (*(param_1+0x10) + 0x1000), masks it
 *   with 0xc07e to preserve specific bits, and conditionally sets bit 0 based on param_2.
 *   It then writes the modified value back. No callees are used, and the specific role of
 *   the object or field is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit_in_object_field_1045757c(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) & 0xc07e;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) = uVar1;
  return;
}
