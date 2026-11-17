/* @k10d get_value_if_flag_set_1042fdbe @ 0x1042fdbe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns a value from a global struct if a check on param_1 passes, otherwise returns 0.
 * summary:
 *   Calls get_or_init_cached_value with param_1 and constant 2. If the result is non-zero,
 *   it retrieves a pointer via get_or_init_singleton_object_104b50ec, dereferences the
 *   second field (offset +4), and passes it to call_subroutine_with_offset_0x60. Returns
 *   the result of call_subroutine_with_offset_0x60 or 0 if the initial check failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_if_flag_set_1042fdbe(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_init_cached_value(param_1,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = get_or_init_singleton_object_104b50ec();
    uVar2 = call_subroutine_with_offset_0x60(*(int *)(iVar1 + 4));
  }
  return uVar2;
}
