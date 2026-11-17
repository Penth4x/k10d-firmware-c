/* @k10d invoke_object_method_and_set_status_104a2ef0 @ 0x104a2ef0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_and_set_status_104a2ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  int *piVar4;
  
  piVar4 = (int *)**(uint32_t **)(*(int *)(param_1 + 0x54) + 0xc);
  uVar3 = *(uint32_t *)(*piVar4 + 4);
  piVar1 = (int *)read_struct_field_or_array(param_1,uVar3);
  *piVar1 = param_1 + 4;
  iVar2 = read_struct_field_or_array(param_1,uVar3);
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x1c) + 0x2c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x1c) + 0x28),piVar4);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(uint8_t *)(*piVar4 + 0x18) = 1;
      *(uint32_t *)(param_1 + 0x40) = 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x40) = 2;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x40) = 0;
  }
  return;
}
