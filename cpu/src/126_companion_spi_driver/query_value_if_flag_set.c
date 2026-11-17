/* @k10d query_value_if_flag_set @ 0x1044a16e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a value from a helper only if a preceding check function returns non-zero.
 * summary:
 *   The function calls sdhc_send_command_209 with the input pointer. If that call returns
 *   0, it returns 0. Otherwise, it calls init_subobject_at_offset_0x165 with the same
 *   pointer and returns its result. This acts as a conditional wrapper or gate for the
 *   second function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_value_if_flag_set(uint8_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command_209(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = init_subobject_at_offset_0x165(param_1);
  }
  return uVar2;
}
