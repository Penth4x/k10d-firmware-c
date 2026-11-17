/* @k10d convert_time_to_ticks @ 0x1046d010
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void convert_time_to_ticks(uint32_t param_1,int *param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)*param_3;
  uVar2 = *(uint *)(param_3 + 2);
  if ((uVar1 < 999) || ((uVar1 < 1000 && (uVar2 < 0xfffffc18)))) {
    uVar1 = (uVar1 * 0x400000) / 1000;
    iVar3 = uVar1 * 0x400 + uVar2 / 1000 + (uVar1 * -0xfa000 + uVar2 % 1000) / 1000;
  }
  else {
    iVar3 = -1;
  }
  *param_2 = iVar3;
  return;
}
