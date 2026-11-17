/* @k10d dispatch_virtual_call_via_helper_1047d26e @ 0x1047d26e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes virtual slot 7 with two arguments.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and a field at param_3+0xc to obtain an
 *   object pointer. Then performs a Cfront-style virtual call to slot 7 (offset 0x3c) on
 *   that object, passing the this-adjusted pointer, param_2, and param_3. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_helper_1047d26e(int param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check(param_1,*(uint32_t *)(param_3 + 0xc));
  (**(code **)(*piVar1 + 0x3c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x38),param_2,param_3);
  return;
}
