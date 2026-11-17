/* @k10d invoke_virtual_slot_7_104df79e @ 0x104df79e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 7 of the object stored at offset 8 of the input pointer, or returns
 *   0x81 if that pointer is null.
 * summary:
 *   The function dereferences param_1 + 8 to obtain a vtable pointer. If the pointer is
 *   null, it returns the constant 0x81. Otherwise, it performs a Cfront-style virtual call
 *   to slot 7 (offset 0x1c) using the this-adjustment stored at offset 0x18. No specific
 *   camera subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_7_104df79e(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x81;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
  }
  return uVar2;
}
