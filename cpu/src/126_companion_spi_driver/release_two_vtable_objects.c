/* @k10d release_two_vtable_objects @ 0x10446a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_vtable_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)param_1 + 4);
  if (*piVar1 != 0) {
    (**(code **)(*(int *)(*piVar1 + 4) + 0x5c))
              (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 0x58),1);
  }
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar2 + 0x5c))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x58),1);
  }
  clear_bit23_at_0x6b000004(*(uint32_t *)((int)param_1 + 0x20));
  return;
}
