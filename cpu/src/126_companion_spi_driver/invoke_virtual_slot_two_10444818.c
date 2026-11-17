/* @k10d invoke_virtual_slot_two_10444818 @ 0x10444818
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_10444818(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x1c))
                      (*(short *)(*(int *)(iVar1 + 4) + 0x18) + iVar1,0);
  }
  return uVar2;
}
