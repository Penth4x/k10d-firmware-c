/* @k10d expand_bytes_to_words @ 0x105209d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t expand_bytes_to_words(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x3f;
  iVar1 = 0;
  param_1 = param_1 + 4;
  do {
    *(uint *)(param_2 + iVar1) = (uint)*(byte *)(param_1 + iVar2);
    *(uint *)(param_2 + iVar1 + 4) = (uint)*(byte *)(param_1 + iVar2 + 1);
    *(uint *)(param_2 + iVar1 + 8) = (uint)*(byte *)(param_1 + iVar2 + 2);
    *(uint *)(param_2 + iVar1 + 0xc) = (uint)*(byte *)(param_1 + iVar2 + 3);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar3);
  return 0x100;
}
