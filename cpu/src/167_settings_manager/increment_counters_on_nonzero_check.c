/* @k10d increment_counters_on_nonzero_check @ 0x10477dea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a struct field and increments two counters if the helper returns non-
 *   zero.
 * summary:
 *   Reads the 4-byte value at offset 0x20 of the object pointed to by param_1 and passes it
 *   to register_event_handler_104745d0. If the returned value is non-zero, it increments
 *   the integers at offsets 0x64 and 0x6c of the same object. Returns the helper's result
 *   in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int increment_counters_on_nonzero_check(int param_1)

{
  int iVar1;
  
  iVar1 = register_event_handler_104745d0(*(uint32_t *)(param_1 + 0x20),(uint32_t *)__frv_reg_unset(5));
  if (iVar1 != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  return iVar1;
}
