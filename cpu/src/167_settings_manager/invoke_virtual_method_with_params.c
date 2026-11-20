/* @k10d invoke_virtual_method_with_params @ 0x1047802e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_with_params(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x74) = 3;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  iVar2 = **(int **)(param_1 + 0x88);
  (((vtbl_entry*)(iVar2))[2].fn)
            ((int)*(int **)(param_1 + 0x88) + (int)((vtbl_entry*)(iVar2))[2].adj,0x60000,param_2);
  iVar2 = **(int **)(param_1 + 0x88);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x88) + (int)((vtbl_entry*)(iVar2))[2].adj,0x60001,
                     (uint32_t *)(param_1 + 0x74));
  return uVar1;
}
