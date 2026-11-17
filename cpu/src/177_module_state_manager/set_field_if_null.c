/* @k10d set_field_if_null @ 0x10483f84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the struct field at offset 0xc if that field is currently zero,
 *   returning 1 on success.
 * summary:
 *   Checks if the integer at offset 0xc of the object pointed to by param_1 is zero. If so,
 *   and if param_2 is non-zero, it writes param_2 to that location and returns 1.
 *   Otherwise, it returns 0. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_field_if_null(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (*(int *)((int)param_1 + 0xc) == 0)) {
    *(int *)((int)param_1 + 0xc) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}
