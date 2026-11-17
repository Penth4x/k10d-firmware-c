/* @k10d lookup_table_entry_by_index_104e31de @ 0x104e31de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lookup_table_entry_by_index_104e31de(int param_1,uint param_2,int *param_3,uint32_t *param_4)

{
  int iVar1;
  
  if (((int)param_2 < 0x1001) || (0x101d < (int)param_2)) {
    *param_3 = *(int *)(param_1 + 0xb4);
    *param_4 = 0;
  }
  else {
    switch(param_2) {
    case 0x1001:
    case 0x1004:
    case 0x1005:
    case 0x1007:
    case 0x1008:
    case 0x1009:
    case 0x100a:
    case 0x101b:
      *param_3 = *(int *)((param_2 & 0x1f) * 4 + param_1 + 0x40);
      *param_4 = *(uint32_t *)(param_1 + 0xc4);
      iVar1 = *param_3;
      break;
    default:
      *param_3 = *(int *)(param_1 + 0x40 + (param_2 & 0x1f) * 4);
      *param_4 = 0;
      iVar1 = *param_3;
      break;
    case 0x100c:
    case 0x100d:
      *param_3 = *(int *)((param_2 & 0x1f) * 4 + param_1 + 0x40);
      *param_4 = *(uint32_t *)(param_1 + 0xc0);
      iVar1 = *param_3;
    }
    if (iVar1 == 0) {
      *param_3 = *(int *)(param_1 + 0x40);
    }
  }
  return;
}
