/* @k10d find_entry_by_key_in_table @ 0x104d63d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_entry_by_key_in_table(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1) == param_2) {
      return param_1 + 0xac + iVar2 * 0x1c;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x88);
  return 0;
}
