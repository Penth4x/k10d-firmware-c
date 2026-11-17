/* @k10d invoke_virtual_method_on_nested_object_104dfc4c @ 0x104dfc4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_nested_object_104dfc4c(void *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = (*(uint32_t **)((int)param_1 + 0x38))[2];
  uVar2 = **(uint32_t **)((int)param_1 + 0x38);
  (*(code *)0x104e04a8/*ROM*/)(*(uint32_t *)((int)param_1 + 0x3c));
  iVar3 = **(int **)((int)param_1 + 0x30);
  iVar3 = (**(code **)(iVar3 + 0xc))
                    ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar3 + 8),uVar1,uVar2,0)
  ;
  uVar1 = 9;
  if (iVar3 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}
