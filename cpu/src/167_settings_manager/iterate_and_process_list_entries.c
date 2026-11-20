/* @k10d iterate_and_process_list_entries @ 0x10476748
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_process_list_entries(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  
  iVar2 = (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].fn)
                    (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[4].adj + param_2);
  uVar5 = 0;
  if (iVar2 != 0) {
    bVar1 = true;
    iVar3 = (*(code *)0x10475326/*ROM*/)(*(uint32_t *)(param_1 + 8));
    iVar2 = iVar3;
    do {
      iVar4 = invoke_virtual_slot_two_and_store_result(param_1,iVar2,*(uint32_t *)(param_1 + 0x10));
      if (iVar4 == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = (*(code *)0x10476cca/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
        if (iVar4 != 0) {
          (*(code *)0x1047e50c/*ROM*/)(param_2,iVar2,1);
        }
        iVar2 = get_value_from_struct_field(*(uint32_t *)(param_1 + 8),iVar2);
      }
    } while ((iVar2 != iVar3) && (bVar1));
    uVar5 = 1;
  }
  return uVar5;
}
