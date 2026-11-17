/* @k10d release_owned_object_slot_10473208 @ 0x10473208
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 166_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 4 and 1 on the object stored at offset 4, then nulls that
 *   pointer.
 * summary:
 *   Reads the pointer at param_1+4. If non-null, calls virtual slot 4 (vtable offset 0x24)
 *   with a this-adjustment, then calls virtual slot 1 (vtable offset 0xc) with argument 3.
 *   Finally sets param_1+4 to 0. This is virtual method slot 4 of cls_105aa2f4, called by
 *   its deleting destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_10473208(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
    piVar1 = *(int **)((int)param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
