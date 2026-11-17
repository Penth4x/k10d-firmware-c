/* @k10d call_virtual_slot_and_forward_104a62f6 @ 0x104a62f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1 and forwards the result to
 *   copy_bytes_to_struct_field.
 * summary:
 *   The function reads a pointer from offset 0x4c of param_1, then performs a Cfront-style
 *   virtual call using the vtable at offset 0x2c of that object, applying the this-
 *   adjustment from offset 0x28. The return value of the virtual call is passed as the
 *   second argument to copy_bytes_to_struct_field along with param_2 and the constant 6.
 *   The specific subsystem or camera role is not determinable from the provided pseudocode
 *   and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_104a62f6(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x4c);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,6);
  return;
}
