/* @k10d copy_eleven_bytes @ 0x1047f96c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eleven_bytes(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0xb;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 0x47) = *(uint8_t *)(iVar2 + param_2);
  } while (iVar2 != 0);
  return;
}
