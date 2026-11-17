/* @k10d release_child_object_if_present @ 0x10441994
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on the object pointer stored at offset 4 of param_1, passing 0,
 *   then returns 1.
 * summary:
 *   Checks if the pointer at param_1+4 is non-null. If so, it loads the vtable pointer from
 *   that child object, retrieves the function pointer at vtable offset 0x1c (slot 2), and
 *   calls it with the this-adjusted child object and an argument of 0. This is a standard
 *   Cfront virtual call pattern for releasing or resetting a contained object. No camera-
 *   specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_child_object_if_present(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0x1c))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  }
  return 1;
}
