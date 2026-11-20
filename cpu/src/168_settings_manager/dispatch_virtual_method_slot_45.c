/* @k10d dispatch_virtual_method_slot_45 @ 0x1047d53e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes virtual method slot 45 with three
 *   parameters.
 * summary:
 *   Calls dispatch_on_state_check with param_1 and param_3 to obtain an object pointer.
 *   Uses the Cfront virtual call idiom to invoke virtual slot 45 (offset 0xb4) on the
 *   returned object, passing the this-adjusted object pointer along with param_2, param_3,
 *   and param_4. The specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_slot_45(cls_105aac00 *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check((int)param_1,param_3);
  (((vtbl_entry*)(*piVar1))[22].fn)
            ((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[22].adj,param_2,param_3,param_4);
  return;
}
