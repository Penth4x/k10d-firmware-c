/* @k10d invoke_virtual_slot_3_on_child_104b5160 @ 0x104b5160
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Dereferences a child object pointer at offset 4 and calls its virtual slot 3 with
 *   argument 0.
 * summary:
 *   The function reads a pointer from param_1 + 4. If the pointer is non-null, it performs
 *   a virtual call to slot 3 (offset 0x1c) of the pointed-to object, passing the this-
 *   adjusted object pointer and the integer 0. It always returns 1. No camera-specific
 *   subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_child_104b5160(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  return 1;
}
