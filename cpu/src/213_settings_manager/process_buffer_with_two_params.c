/* @k10d process_buffer_with_two_params @ 0x104adaf6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates input parameters and dispatches to a processing routine based on object
 *   state.
 * summary:
 *   Checks if param_2 and param_3 are non-zero. If valid, calls
 *   dispatch_virtual_slot_two_104af096 twice to retrieve configuration values from the
 *   object (using hardcoded 2,1 and dynamic bytes at offsets 8 and 0x21). Passes these
 *   along with param_1[9] and param_2 to dispatch_on_param_two_value. Depending on the
 *   result, it either calls invoke_virtual_slot_two_104ae2e4 and
 *   invoke_virtual_slot_4_104af106 or invoke_virtual_slot_two_104af0c8, returning the
 *   result of the final call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_buffer_with_two_params(int *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    iVar2 = dispatch_virtual_slot_two_104af096((int)param_1,2,1);
    uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,(uint)*(byte *)(param_1 + 8),
                         (uint)*(byte *)((int)param_1 + 0x21));
    iVar2 = dispatch_on_param_two_value(param_1[9],iVar2,param_2,uVar1);
    if (iVar2 == 0) {
      invoke_virtual_slot_two_104ae2e4(param_1);
      uVar1 = invoke_virtual_slot_4_104af106(param_1);
    }
    else {
      uVar1 = invoke_virtual_slot_two_104af0c8(param_1,param_2,iVar2);
    }
  }
  return uVar1;
}
