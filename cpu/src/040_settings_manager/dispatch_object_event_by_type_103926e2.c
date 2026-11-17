/* @k10d dispatch_object_event_by_type_103926e2 @ 0x103926e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on the type in param_2, calling a virtual method or helper,
 *   and stores the result in the object.
 * summary:
 *   The function sets a self-reference at offset 0x34 (param_1[0xd]) of the object pointed
 *   to by param_1. It reads the event type from *param_2. If the type is 3 and the subtype
 *   is 0x11, it calls resolve_state_transition_value. If the type is 7, it calls
 *   get_or_create_singleton_object_10396af8 and stores the return value in the object. If
 *   the type is 8, it performs a virtual call via the vtable at offset 0x6c and stores the
 *   result. Finally, it returns the value stored at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_object_event_by_type_103926e2(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0xd] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0x11) {
      resolve_state_transition_value(param_1);
    }
  }
  else if (iVar1 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0xd] = iVar1;
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))
                      ((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,param_1);
    param_1[0xd] = iVar1;
  }
  return param_1[0xd];
}
