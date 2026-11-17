/* @k10d initialize_dual_object_members @ 0x10445b96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes two sub-objects stored in the first two pointers of the
 *   target structure.
 * summary:
 *   The function allocates 0x10 bytes for a member at offset 4, initializes it with
 *   cls_105a1748_new, and calls a virtual method (slot 2) with argument 0. If that call
 *   returns non-zero, it allocates a second 0x10-byte member at offset 8, initializes it
 *   with cls_105a16c8_new, and calls the same virtual slot with argument 0. It also calls
 *   store_value_if_valid with constants 0xa2 and 0xa3 respectively, likely setting type or
 *   state identifiers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_dual_object_members(void *param_1)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a1748_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 4) = iVar1;
  store_value_if_valid((void *)iVar1,0xa2);
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  iVar1 = (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  if (iVar1 != 0) {
    iVar1 = heap_alloc((void *)0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105a16c8_new((void *)iVar1);
    }
    *(int *)((int)param_1 + 8) = iVar1;
    store_value_if_valid((void *)iVar1,0xa3);
    iVar1 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar1 + 0x14))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x10),0);
  }
  return;
}
