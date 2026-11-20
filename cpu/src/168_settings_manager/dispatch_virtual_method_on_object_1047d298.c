/* @k10d dispatch_virtual_method_on_object_1047d298 @ 0x1047d298
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes a virtual method on it with two parameters.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and a value from param_3+0xc to obtain an
 *   object pointer. Then performs a Cfront-style virtual call to slot 8 (offset 0x44) of
 *   that object, passing the this-adjusted pointer, param_2, and param_3. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_1047d298(cls_105aac00 *param_1,uint32_t param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check((int)param_1,*(uint32_t *)(param_3 + 0xc));
  (((vtbl_entry*)(*piVar1))[8].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[8].adj,param_2,param_3);
  return;
}
