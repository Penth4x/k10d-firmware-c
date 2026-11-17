/* @k10d invoke_virtual_then_call_helper_104e0c0e @ 0x104e0c0e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on an object stored at offset 0x2c, then calls a helper with the
 *   value at offset 0x18.
 * summary:
 *   The function dereferences param_1+0x2c to get an object pointer, then performs a
 *   virtual call to slot 2 (offset 0x14) on that object, passing a this-adjusted pointer.
 *   It then calls invoke_virtual_slot_two_on_two_objects_104e0fd8 with the 32-bit value
 *   stored at param_1+0x18. The role of the object and helper is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_call_helper_104e0c0e(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10));
  invoke_virtual_slot_two_on_two_objects_104e0fd8(*(uint32_t *)((int)param_1 + 0x18));
  return;
}
