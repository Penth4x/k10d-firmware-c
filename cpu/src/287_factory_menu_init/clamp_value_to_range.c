/* @k10d clamp_value_to_range @ 0x1052c10e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Returns a value clamped between 1 and a limit derived from a queried state.
 * summary:
 *   Calls get_shared_sram_buffer to obtain a state value. If the value is below 0x1f5,
 *   returns 1. Otherwise, calls iterate_object_array_virtual with parameters from param_1
 *   and a local flag. If the call fails (0 or -1), returns 1. Otherwise, clamps the result
 *   of iterate_object_array_virtual (or the state value minus 499) to be no greater than
 *   the state value minus 499, returning the minimum.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_to_range(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint uStack_c;
  
  get_shared_sram_buffer();
  uVar1 = (*(code *)0x104e4bb6/*ROM*/)();
  if (uVar1 < 0x1f5) {
    uVar4 = 1;
  }
  else {
    uStack_c = 1;
    uVar2 = get_shared_sram_buffer();
    iVar3 = iterate_object_array_virtual(uVar2,*(uint16_t *)(param_1 + 0x2b72),*(uint16_t *)(param_1 + 0x2b74),
                         &uStack_c);
    if ((iVar3 == 0) || (iVar3 == -1)) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar1 - 499;
      if (uStack_c < uVar1 - 499) {
        uVar4 = uStack_c;
      }
    }
  }
  return uVar4;
}
