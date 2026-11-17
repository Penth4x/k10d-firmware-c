/* @k10d invoke_virtual_slot_six_10493af4 @ 0x10493af4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 6 of an object reached via a pointer at offset 0x60 of the input
 *   object.
 * summary:
 *   Reads a pointer from param_1+0x60, then reads a sub-object pointer from offset 0xc of
 *   that. It then performs a Cfront-style virtual call on the sub-object using vtable
 *   offset 0x3c (slot 6), passing the sub-object adjusted by the this-adjustment short at
 *   vtable offset 0x38. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_six_10493af4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
  (**(code **)(iVar1 + 0x3c))(**(int **)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x38));
  return;
}
