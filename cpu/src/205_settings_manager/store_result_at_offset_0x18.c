/* @k10d store_result_at_offset_0x18 @ 0x1049b9ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x18(int param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_table_entry_by_index(param_2,0);
  *(uint32_t *)(iVar2 + 0x18) = uVar1;
  return;
}
