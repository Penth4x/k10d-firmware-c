/* @k10d copy_eleven_bytes_to_offset_0x2b @ 0x1047f7a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eleven_bytes_to_offset_0x2b(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0xb;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + iVar1 + 0x2b) = *(uint8_t *)(iVar2 + param_2);
  } while (iVar2 != 0);
  return;
}
