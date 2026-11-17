/* @k10d find_index_in_fixed_array @ 0x104d753a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_index_in_fixed_array(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)param_1 + iVar1 + 4) == param_2) {
      *param_3 = iVar2;
      return 1;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x68);
  return 0;
}
