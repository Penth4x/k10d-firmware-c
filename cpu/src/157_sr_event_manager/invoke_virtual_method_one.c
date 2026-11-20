/* @k10d invoke_virtual_method_one @ 0x1046d70a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a field then invokes virtual slot 3 of an object pointer with
 *   argument 1.
 * summary:
 *   The function first calls debug_flag_writer_0x08 with the value at param_1+0x1c and
 *   param_2. It then loads an object pointer from param_1+0x18 and performs a Cfront-style
 *   virtual call to slot 3 (offset 0x24) with a this-adjustment from offset 0x20 and the
 *   constant argument 1. The role of the object and the virtual method is not determinable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_one(int param_1,int param_2)

{
  int iVar1;
  
  debug_flag_writer_0x08(*(int *)(param_1 + 0x1c),param_2);
  iVar1 = **(int **)(param_1 + 0x18);
  (((vtbl_entry*)(iVar1))[4].fn)((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar1))[4].adj,1);
  return;
}
