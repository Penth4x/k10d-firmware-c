/* @k10d release_member_and_clear @ 0x104402a0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases a member object via virtual calls and nulls the pointer field.
 * summary:
 *   This is virtual slot 4 of cls_105a0adc. It checks if the member pointer at offset 4 is
 *   non-null, then makes two virtual calls on that member (slots 3 and 1) with adjusted
 *   this pointers, and finally sets the member pointer to zero. The virtual calls likely
 *   perform cleanup or release operations on the member object before it is detached from
 *   the parent.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_member_and_clear(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 4) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
