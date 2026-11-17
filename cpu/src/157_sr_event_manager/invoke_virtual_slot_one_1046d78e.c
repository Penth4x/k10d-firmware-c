/* @k10d invoke_virtual_slot_one_1046d78e @ 0x1046d78e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method (slot 3) on an object pointer stored in the first argument's
 *   structure.
 * summary:
 *   The function first calls write_pattern_to_offset_0x10 with a field at offset 0x1c of
 *   param_1 and param_2. It then dereferences the pointer at offset 0x18 of param_1 to get
 *   an object pointer, and invokes the virtual function at offset 0x24 of that object's
 *   vtable. The 'this' pointer is adjusted by the short value at offset 0x20 of the vtable.
 *   This follows the Cfront virtual call idiom for slot (0x24-4)/8 = 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_1046d78e(int param_1,int param_2)

{
  int iVar1;
  
  write_pattern_to_offset_0x10(*(int *)(param_1 + 0x1c),param_2);
  iVar1 = **(int **)(param_1 + 0x18);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x20),1);
  return;
}
