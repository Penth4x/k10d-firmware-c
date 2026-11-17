/* @k10d convert_ms_to_fixed_point @ 0x1046cfe2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void convert_ms_to_fixed_point(uint32_t param_1,uint16_t *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_3 & 0xffff) * 1000;
  iVar2 = (param_3 >> 0x10) * 1000 + (uVar1 >> 0x10);
  *(uint *)(param_2 + 2) = iVar2 * 0x10000 + (uVar1 & 0xffff);
  *param_2 = (short)((uint)iVar2 >> 0x10);
  return;
}
