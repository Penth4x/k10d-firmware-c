/* @k10d invoke_virtual_slot_2_on_members @ 0x104667f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_2_on_members(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  piVar1 = *(int **)((int)param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  return uVar2;
}
