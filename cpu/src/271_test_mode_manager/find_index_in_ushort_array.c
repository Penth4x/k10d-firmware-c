/* @k10d find_index_in_ushort_array @ 0x1050e95e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_index_in_ushort_array(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(ushort *)(*(int *)((int)param_1 + 0x20) + iVar1) == param_2) {
      *(int *)((int)param_1 + 0x24) = iVar2;
      return 1;
    }
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0xa0);
  return 0;
}
