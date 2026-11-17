/* @k10d invoke_virtual_method_on_indexed_object_10529494 @ 0x10529494
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of an object found in a table indexed by param_2, passing a
 *   computed pointer as the first argument.
 * summary:
 *   The function checks if param_2 is less than 0x10. If so, it loads a pointer from a
 *   table at offset 0x1054 + param_2 * 0x20c + 0x208 within the object pointed to by
 *   param_1. It then performs a virtual call to slot 3 (offset 0x1c) of that object,
 *   passing a pointer calculated as param_1 + 0x1054 + this_adjustment + param_2 * 0x20c.
 *   If param_2 is out of range, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_indexed_object_10529494(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if (param_2 < 0x10) {
    iVar1 = *(int *)(param_1 + 0x1054 + param_2 * 0x20c + 0x208);
    uVar2 = (**(code **)(iVar1 + 0x1c))
                      (param_1 + 0x1054 + (int)*(short *)(iVar1 + 0x18) + param_2 * 0x20c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
