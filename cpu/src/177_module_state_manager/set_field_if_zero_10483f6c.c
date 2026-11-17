/* @k10d set_field_if_zero_10483f6c @ 0x10483f6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the 8th byte-offset field of param_1 only if that field is
 *   currently zero, returning 1 on success.
 * summary:
 *   The function checks if param_2 is non-zero and the integer at param_1+8 is zero. If
 *   both conditions hold, it writes param_2 to that location and returns 1; otherwise it
 *   returns 0. No callees are invoked, and the specific role of the object at param_1 is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_field_if_zero_10483f6c(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (*(int *)((int)param_1 + 8) == 0)) {
    *(int *)((int)param_1 + 8) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}
