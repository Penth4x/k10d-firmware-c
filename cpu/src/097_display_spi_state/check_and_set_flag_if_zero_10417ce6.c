/* @k10d check_and_set_flag_if_zero_10417ce6 @ 0x10417ce6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object field, and if a helper returns zero, sets a flag on the
 *   object.
 * summary:
 *   The function dereferences the pointer at offset 0x50 of the object in param_1 and
 *   passes it to check_mode_flag_or_byte. If the result is zero, it calls
 *   compute_image_size_divisor with the object and the value 1. The specific roles of the
 *   callees and the object field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_if_zero_10417ce6(int param_1)

{
  int iVar1;
  
  iVar1 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  if (iVar1 == 0) {
    compute_image_size_divisor(param_1,1);
  }
  return;
}
