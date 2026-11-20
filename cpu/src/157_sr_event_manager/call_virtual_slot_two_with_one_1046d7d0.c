/* @k10d call_virtual_slot_two_with_one_1046d7d0 @ 0x1046d7d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer stored in a struct, passing a constant
 *   argument of 1.
 * summary:
 *   The function first calls debug_flag_writer_0x14 with a field at offset 0x1c of param_1
 *   and param_2. It then dereferences the object pointer at offset 0x18 of param_1,
 *   retrieves the function pointer at offset 0x24 of that object, and calls it with the
 *   object pointer (adjusted by the short value at offset 0x20) and the integer 1. This
 *   follows the Cfront virtual call idiom for slot 2 (offset 0x24).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_with_one_1046d7d0(int param_1,int param_2)

{
  int iVar1;
  
  debug_flag_writer_0x14(*(int *)(param_1 + 0x1c),param_2);
  iVar1 = **(int **)(param_1 + 0x18);
  (((vtbl_entry*)(iVar1))[4].fn)((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar1))[4].adj,1);
  return;
}
