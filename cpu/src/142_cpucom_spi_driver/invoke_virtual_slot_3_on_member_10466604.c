/* @k10d invoke_virtual_slot_3_on_member_10466604 @ 0x10466604
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_member_10466604(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
  }
  return;
}
