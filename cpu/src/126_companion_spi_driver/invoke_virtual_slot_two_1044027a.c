/* @k10d invoke_virtual_slot_two_1044027a @ 0x1044027a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_1044027a(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    (**(code **)(iVar1 + 0x1c))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  }
  return 1;
}
