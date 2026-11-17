/* @k10d destroy_member_and_null @ 0x104419ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 and slot 1 on the object stored at offset 4, then nulls the
 *   pointer.
 * summary:
 *   This function acts as a cleanup routine for a member object. It checks if the pointer
 *   at offset 4 is non-null, then calls virtual slot 2 (offset 0x24) and virtual slot 1
 *   (offset 0xc) on that member object. Finally, it sets the pointer at offset 4 to zero.
 *   It is called by the deleting destructor of cls_105a0c74.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_and_null(void *param_1)

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
