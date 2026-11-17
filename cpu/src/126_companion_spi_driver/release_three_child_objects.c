/* @k10d release_three_child_objects @ 0x10440ad6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on up to three child object pointers stored in the struct to
 *   release them.
 * summary:
 *   The function iterates over three pointer fields at offsets 4, 8, and 0xc of the input
 *   structure. For each non-null pointer, it performs a virtual call to slot 2 (offset 0x1c
 *   in the vtable) with a this-adjustment and an argument of 0. This pattern is consistent
 *   with releasing or detaching child objects in a C++ class hierarchy. No specific camera
 *   subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_three_child_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)param_1 + 4);
  if (*piVar1 != 0) {
    (**(code **)(*(int *)(*piVar1 + 4) + 0x1c))
              (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 0x18),0);
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar2 + 0x1c))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x18),0);
  }
  if (*(int *)((int)param_1 + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
    (**(code **)(iVar2 + 0x1c))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x18),0);
  }
  return 1;
}
