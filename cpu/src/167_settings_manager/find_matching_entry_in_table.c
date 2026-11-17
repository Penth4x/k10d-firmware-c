/* @k10d find_matching_entry_in_table @ 0x1047a280
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_matching_entry_in_table(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    psVar2 = (short *)(param_1 + 0x20 + iVar1);
    if (((*psVar2 == *(short *)(param_2 + 0x58)) && (psVar2[1] == *(short *)(param_2 + 0x5a))) ||
       (psVar2[1] == 0)) break;
    iVar1 = iVar1 + 0x3c;
    iVar3 = iVar3 + 1;
  } while (iVar1 < 0xea24);
  iVar1 = 0;
  if (iVar3 != 999) {
    iVar1 = param_1 + 0x20 + iVar3 * 0x3c;
  }
  return iVar1;
}
