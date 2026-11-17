/* @k10d copy_32_bytes_from_callback @ 0x10532d7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_32_bytes_from_callback(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  iVar3 = 0x20;
  do {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + iVar2 + 0x510) = *(uint8_t *)(iVar3 + iVar1);
  } while (iVar3 != 0);
  return;
}
