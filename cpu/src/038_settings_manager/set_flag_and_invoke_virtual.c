/* @k10d set_flag_and_invoke_virtual @ 0x10390b40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual(int param_1)

{
  int *piVar1;
  
  *(uint8_t *)(param_1 + 0x5d) = 1;
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
  }
  set_flg_obj((uint32_t *)(param_1 + 0x4c));
  return;
}
