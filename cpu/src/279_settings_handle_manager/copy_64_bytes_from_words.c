/* @k10d copy_64_bytes_from_words @ 0x10520992
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_64_bytes_from_words(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x3f;
  iVar1 = 0;
  param_1 = param_1 + 4;
  do {
    *(char *)(param_1 + iVar2) = (char)*(uint32_t *)(param_2 + iVar1);
    *(char *)(param_1 + iVar2 + 1) = (char)*(uint32_t *)(param_2 + iVar1 + 4);
    *(char *)(param_1 + iVar2 + 2) = (char)*(uint32_t *)(param_2 + iVar1 + 8);
    *(char *)(param_1 + iVar2 + 3) = (char)*(uint32_t *)(param_2 + iVar1 + 0xc);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar3);
  return;
}
