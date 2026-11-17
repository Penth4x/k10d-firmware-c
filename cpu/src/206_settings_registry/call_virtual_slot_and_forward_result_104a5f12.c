/* @k10d call_virtual_slot_and_forward_result_104a5f12 @ 0x104a5f12
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1 and passes the result to a
 *   helper.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1 to get an object, then
 *   performs a virtual call to slot 5 (offset 0x2c) using the this-adjustment at 0x28. The
 *   return value of this virtual call is passed as the second argument to
 *   copy_bytes_to_struct_field along with param_2 and a constant 0x10. The role of the
 *   virtual method and the helper function is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_result_104a5f12(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,0x10);
  return;
}
