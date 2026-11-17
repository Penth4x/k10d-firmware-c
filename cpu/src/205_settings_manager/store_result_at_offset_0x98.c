/* @k10d store_result_at_offset_0x98 @ 0x1049c210
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x98(int param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = read_table_entry_by_index(param_2,0);
  *(uint32_t *)(iVar2 + 0x98) = uVar1;
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x9c) = 0x100;
  return;
}
