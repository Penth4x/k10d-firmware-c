/* @k10d release_two_virtual_objects @ 0x10446902
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 on two optional object pointers stored in the first two fields
 *   of the input structure.
 * summary:
 *   The function checks two pointers at offsets 4 and 8 of param_1. For each non-null
 *   pointer, it performs a virtual call to slot 7 (offset 0x5c in the vtable) with a this-
 *   adjustment read from offset 0x58 and an argument of 0. It returns 1 unconditionally. No
 *   specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_two_virtual_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)param_1 + 4);
  if (*piVar1 != 0) {
    (**(code **)(*(int *)(*piVar1 + 4) + 0x5c))
              (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 0x58),0);
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar2 + 0x5c))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x58),0);
  }
  return 1;
}
