/* @k10d call_virtual_slot_and_forward_104a5d16 @ 0x104a5d16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 of an object referenced by param_1 and forwards the result to a
 *   helper.
 * summary:
 *   Reads a vtable pointer from offset 0x40 of param_1, then performs a Cfront-style
 *   virtual call to slot 4 (offset 0x2c) using the this-adjustment at 0x28. The returned
 *   pointer is passed, along with param_2 and the constant 4, to
 *   copy_bytes_to_struct_field. No camera-specific behavior is evident from the pseudocode
 *   or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_and_forward_104a5d16(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x40);
  pvVar1 = (void *)(((vtbl_entry*)(iVar2))[5].fn)
                             ((int)*(int **)(param_1 + 0x40) + (int)((vtbl_entry*)(iVar2))[5].adj);
  copy_bytes_to_struct_field(param_2,pvVar1,4);
  return;
}
