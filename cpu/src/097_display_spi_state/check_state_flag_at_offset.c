/* @k10d check_state_flag_at_offset @ 0x1041852c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a specific state condition is met based on two integer fields in the
 *   object.
 * summary:
 *   The function reads two integer values from offsets 0x1564 and 0x1508 of the object
 *   pointed to by param_1. It returns 0 if the value at 0x1564 is 1, otherwise it returns 1
 *   unless the value at 0x1508 is 0, in which case it returns 0. No callees are invoked,
 *   and the specific meaning of these state fields is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_flag_at_offset(int param_1)

{
  uint32_t uVar1;
  
  if (*(int *)(param_1 + 0x1564) == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (*(int *)(param_1 + 0x1508) == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
