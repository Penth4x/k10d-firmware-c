/* @k10d dispatch_virtual_message_0x118001 @ 0x1051d292
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if a specific message ID matches and the object
 *   pointer is valid.
 * summary:
 *   Checks if param_2 equals 0x118001. If so, dereferences a pointer at offset 8 of param_1
 *   to get an object pointer. If the object is non-null, it performs a virtual call to slot
 *   3 (offset 0x1c) of the object's vtable, passing the adjusted object pointer and the
 *   constant 0x118001. Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_message_0x118001(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 == 0x118001) && (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0x118001);
  }
  return 1;
}
