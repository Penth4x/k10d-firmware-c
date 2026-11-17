/* @k10d link_first_entry_in_list @ 0x1042f67c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 113_screen_element_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool link_first_entry_in_list(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *param_2;
  iVar2 = iVar1 * 4;
  bVar3 = *(int *)((int)param_1 + iVar2 + 0x30) == 0;
  if (bVar3) {
    *(int **)((int)param_1 + iVar2 + 0x30) = param_2;
    write_field_at_index(*(void **)((int)param_1 + 0xcc),iVar1,param_2[5]);
  }
  return bVar3;
}
