/* @k10d dispatch_virtual_method_via_vtable @ 0x1047d5ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object pointer and invokes a virtual method at vtable offset 0xcc with
 *   three arguments.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and param_3 to obtain an object pointer.
 *   Extracts the vtable from the object's first word and the this-adjustment from offset
 *   200 (0xc8). Invokes the virtual function at vtable slot 0xcc (slot 20) with the
 *   adjusted object pointer and params 2, 3, and 4. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_via_vtable(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check(param_1,param_3);
  (**(code **)(*piVar1 + 0xcc))
            ((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_2,param_3,param_4);
  return;
}
