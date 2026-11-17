/* @k10d store_callee_result_at_offset_0x4d4 @ 0x10532038
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_callee_result_at_offset_0x4d4(int param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_table_entry_by_index(param_2,0);
  *(uint32_t *)(iVar2 + 0x4d4) = uVar1;
  return;
}
