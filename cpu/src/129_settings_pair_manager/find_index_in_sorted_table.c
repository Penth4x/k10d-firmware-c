/* @k10d find_index_in_sorted_table @ 0x1045b5fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char find_index_in_sorted_table(uint32_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    if (param_2 <= (int)(uint)*(ushort *)(&DAT_105a48b8/*ROM*/ + iVar2)) {
      return cVar1;
    }
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
  } while (iVar2 < 0xb2);
  return 'X';
}
