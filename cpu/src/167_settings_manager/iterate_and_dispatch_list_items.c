/* @k10d iterate_and_dispatch_list_items @ 0x104768f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_dispatch_list_items(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)0x10476d2e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].fn)
            (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].adj + param_2);
  iVar4 = iVar1;
  do {
    piVar2 = (int *)read_field_at_offset_c(*(int *)(param_1 + 0xc));
    iVar3 = (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj);
    if (iVar3 == 0) {
      (*(code *)0x1047e50c/*ROM*/)(param_2,iVar4,1);
    }
    iVar4 = lookup_value_by_key(*(uint32_t *)(param_1 + 0xc),iVar4);
  } while (iVar4 != iVar1);
  return 1;
}
