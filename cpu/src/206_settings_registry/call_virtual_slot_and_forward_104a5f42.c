/* @k10d call_virtual_slot_and_forward_104a5f42 @ 0x104a5f42
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and forwards the result to a helper.
 * summary:
 *   Reads a pointer from param_1+0x18, then performs a Cfront-style virtual call using the
 *   vtable at offset 0x2c and this-adjustment at 0x28. The returned pointer is passed as
 *   the second argument to copy_bytes_to_struct_field along with param_2 and the constant
 *   0x45. The function acts as a thin wrapper that bridges an object method call to a
 *   downstream handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_104a5f42(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x18);
  pvVar1 = (void *)(**(code **)(iVar2 + 0x2c))
                             ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x28));
  copy_bytes_to_struct_field(param_2,pvVar1,0x45);
  return;
}
