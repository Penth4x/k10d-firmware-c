/* @k10d invoke_virtual_then_call_helper_104948ca @ 0x104948ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1, then calls a helper with
 *   param_1.
 * summary:
 *   Reads a pointer from param_1+0x48, then dereferences it to get an object pointer
 *   (iVar1). Performs a Cfront-style virtual call on slot 10 (offset 0x54) of that object,
 *   passing the this-adjusted pointer. Finally calls dispatch_object_event_and_notify with
 *   the original param_1. The specific subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_call_helper_104948ca(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
  (**(code **)(iVar1 + 0x54))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x50));
  dispatch_object_event_and_notify(param_1);
  return;
}
