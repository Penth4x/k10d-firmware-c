/* @k10d accumulate_array_values_by_type @ 0x1051dd2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool accumulate_array_values_by_type(uint32_t param_1,int param_2,void *param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(short *)((int)param_3 + 2) == 4) {
    uVar3 = 0;
    if (*(int *)((int)param_3 + 4) != 0) {
      do {
        iVar1 = read_table_entry_by_index(param_3,uVar3);
        iVar4 = iVar1 + iVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_3 + 4));
    }
  }
  else if ((*(short *)((int)param_3 + 2) == 3) && (uVar3 = 0, *(int *)((int)param_3 + 4) != 0)) {
    do {
      uVar2 = read_u16_from_struct_array((int)param_3,uVar3);
      iVar4 = (uint)uVar2 + iVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_3 + 4));
  }
  *(int *)(param_2 + 0x18) = iVar4;
  return iVar4 != 0;
}
