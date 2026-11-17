/* @k10d call_virtual_method_and_forward_result_104a5fa2 @ 0x104a5fa2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1 and passes the result to a
 *   helper.
 * summary:
 *   The function dereferences a pointer at offset 0x28 of param_1 to get an object pointer.
 *   It then performs a virtual call on that object using the vtable entry at offset 0x2c,
 *   with a this-adjustment from offset 0x28. The result of this virtual call is passed as
 *   the second argument to copy_bytes_to_struct_field, along with param_1 and a constant
 *   0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_method_and_forward_result_104a5fa2(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x28);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,0x10);
  return;
}
