/* @k10d call_virtual_slot_and_forward_result_104a65f8 @ 0x104a65f8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object referenced by param_1 and forwards the result to
 *   a helper.
 * summary:
 *   Reads a pointer from offset 0x34 of param_1, then performs a Cfront-style virtual call
 *   using the vtable at offset 0x2c of that object (slot 4, with this-adjustment from
 *   offset 0x28). The return value of that virtual call is passed as the second argument to
 *   copy_bytes_to_struct_field along with param_2 and the constant 0xc. The function itself
 *   returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_result_104a65f8(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x34);
  pvVar1 = (void *)(((vtbl_entry*)(iVar2))[5].fn)
                             ((int)*(int **)(param_1 + 0x34) + (int)((vtbl_entry*)(iVar2))[5].adj);
  copy_bytes_to_struct_field(param_2,pvVar1,0xc);
  return;
}
