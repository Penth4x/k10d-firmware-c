/* @k10d copy_buffer_with_padding @ 0x104ba484
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_buffer_with_padding(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 * _DAT_80048310/*SDRAM*/;
  iVar2 = *(int *)(param_1 + 0x44);
  iVar1 = _DAT_80048310/*SDRAM*/;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + param_3) = *(uint8_t *)(iVar1 + iVar2 + param_2);
  }
  if (param_4 == 0) {
    *(uint8_t *)(param_3 + 0x2d) = 0xff;
    *(uint8_t *)(param_3 + 0x2e) = 0xff;
    *(uint8_t *)(param_3 + 0x2f) = 0xff;
    *(uint8_t *)(param_3 + 0x39) = 0xff;
    *(uint8_t *)(param_3 + 0x38) = 0xff;
  }
  return;
}
