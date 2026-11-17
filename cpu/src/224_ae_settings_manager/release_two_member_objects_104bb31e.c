/* @k10d release_two_member_objects_104bb31e @ 0x104bb31e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys and nulls the two object pointers stored at offsets 4 and 8 of the class
 *   instance.
 * summary:
 *   This function acts as a virtual cleanup method (slot 4) for class cls_105b931c. It
 *   retrieves the pointers at offsets 4 and 8, calls their virtual destructors (slot 3) and
 *   a secondary virtual method (slot 1) with argument 3 if non-null, then sets both
 *   pointers to zero. It is called by the class's deleting destructor to clean up member
 *   objects before the object itself is freed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_member_objects_104bb31e(void *param_1)

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
  piVar1 = *(int **)((int)param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
    piVar1 = *(int **)((int)param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
  }
  *(uint32_t *)((int)param_1 + 8) = 0;
  return;
}
