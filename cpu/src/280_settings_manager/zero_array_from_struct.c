/* @k10d zero_array_from_struct @ 0x10522512
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_array_from_struct(int param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  
  puVar1 = *(uint32_t **)(param_1 + 0x18);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      *puVar1 = 0;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1c));
  }
  return;
}
