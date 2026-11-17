/* @k10d dispatch_event_to_object_104a2e78 @ 0x104a2e78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_104a2e78(int param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  initialize_struct_header((void *)(param_1 + 0x40));
  *(int *)(param_1 + 0x54) = param_2;
  uVar2 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar2 = 0x42000;
    invoke_object_method_and_set_status_104a2ef0(param_1);
  }
  else if (*(int *)(param_2 + 4) == 1) {
    uVar2 = 0x42001;
    invoke_object_method_and_set_status_104a2f5e(param_1);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x54) + 8);
  iVar3 = *piVar1;
  (**(code **)(iVar3 + 0x14))((int)piVar1 + (int)*(short *)(iVar3 + 0x10),uVar2,param_1 + 0x40);
  free_object_if_flag_set_1052107a(*(void **)(param_1 + 0x54),3);
  *(uint32_t *)(param_1 + 0x54) = 0;
  return;
}
