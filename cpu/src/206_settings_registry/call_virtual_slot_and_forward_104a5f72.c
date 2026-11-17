/* @k10d call_virtual_slot_and_forward_104a5f72 @ 0x104a5f72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1 and forwards the result to
 *   copy_bytes_to_struct_field.
 * summary:
 *   The function dereferences a pointer at offset 0x1c of param_1 to get an object pointer.
 *   It then performs a virtual call to slot 5 (offset 0x2c) of that object, passing a this-
 *   adjusted pointer. The return value of this virtual call is passed as the second
 *   argument to copy_bytes_to_struct_field, along with param_2 and the constant 0x1b. The
 *   role of the specific subsystem is not determinable from the provided pseudocode and
 *   unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_104a5f72(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x1c);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,0x1b);
  return;
}
