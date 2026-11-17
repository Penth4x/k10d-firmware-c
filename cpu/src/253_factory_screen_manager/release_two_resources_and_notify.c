/* @k10d release_two_resources_and_notify @ 0x104e7d9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_resources_and_notify(void *param_1)

{
  int *piVar1;
  
  kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 4) + 0x1c));
  kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 8) + 0x10));
  piVar1 = (int *)get_or_create_sram_object_1039fa94();
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  return;
}
