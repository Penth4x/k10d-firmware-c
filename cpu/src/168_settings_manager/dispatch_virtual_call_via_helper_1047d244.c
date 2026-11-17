/* @k10d dispatch_virtual_call_via_helper_1047d244 @ 0x1047d244
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes virtual slot 6 with two parameters.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and the value at param_3+0xc to obtain an
 *   object pointer. Performs a Cfront-style virtual call on slot 6 (offset 0x34) of that
 *   object, passing the this-adjusted object pointer, param_2, and param_3. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_helper_1047d244(int param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check(param_1,*(uint32_t *)(param_3 + 0xc));
  (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_2,param_3);
  return;
}
