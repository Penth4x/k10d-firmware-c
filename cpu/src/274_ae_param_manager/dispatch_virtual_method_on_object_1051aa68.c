/* @k10d dispatch_virtual_method_on_object_1051aa68 @ 0x1051aa68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_1051aa68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  forward_two_args_to_helper_1049c38e((void *)(param_1 + 0x3c),*(uint32_t *)(param_2 + 8));
  iVar2 = 0x48;
  if (*(int *)(param_1 + 0x54) != -1) {
    iVar2 = 0x44;
  }
  iVar1 = **(int **)(iVar2 + param_1);
  (**(code **)(iVar1 + 0x1c))
            ((int)*(short *)(iVar1 + 0x18) + (int)*(int **)(iVar2 + param_1),
             *(uint32_t *)(param_2 + 0xc));
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 4) + 0xc))(*(short *)(*(int *)(param_2 + 4) + 8) + param_2,3);
  }
  return;
}
