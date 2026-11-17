/* @k10d check_two_conditions_on_field @ 0x10444f92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the first callee fails and the second callee succeeds on the object's
 *   field at offset 0x10.
 * summary:
 *   Reads the pointer at offset 0x10 of the input object. Calls
 *   check_flag_bit7_at_offset_0x20 with that value; if it returns 0, calls
 *   check_flag_bit5_at_offset_0x20 with the same value. Returns 1 only if the first call
 *   returns 0 and the second returns non-zero, otherwise returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_conditions_on_field(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_flag_bit7_at_offset_0x20(*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if ((iVar1 == 0) && (iVar1 = check_flag_bit5_at_offset_0x20(*(uint32_t *)(param_1 + 0x10)), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
