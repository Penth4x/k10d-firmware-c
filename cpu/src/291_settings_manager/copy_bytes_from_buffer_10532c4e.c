/* @k10d copy_bytes_from_buffer_10532c4e @ 0x10532c4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_from_buffer_10532c4e(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x4e8);
  if (iVar3 != 0) {
    iVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x4ec);
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(uint8_t *)(iVar1 + iVar3) = *(uint8_t *)(iVar1 + iVar2 + 2);
    }
  }
  return;
}
