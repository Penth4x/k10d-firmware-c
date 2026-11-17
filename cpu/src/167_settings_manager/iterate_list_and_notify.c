/* @k10d iterate_list_and_notify @ 0x1047696c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_list_and_notify(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)0x10476d2e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  (**(code **)(*(int *)(param_2 + 0xc) + 0x24))
            (*(short *)(*(int *)(param_2 + 0xc) + 0x20) + param_2);
  iVar4 = iVar1;
  do {
    piVar2 = (int *)read_field_at_offset_c(*(int *)(param_1 + 0xc));
    iVar3 = (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10));
    if (iVar3 != 0) {
      (*(code *)0x1047e50c/*ROM*/)(param_2,iVar4,1);
    }
    iVar4 = lookup_value_by_key(*(uint32_t *)(param_1 + 0xc),iVar4);
  } while (iVar4 != iVar1);
  return 1;
}
