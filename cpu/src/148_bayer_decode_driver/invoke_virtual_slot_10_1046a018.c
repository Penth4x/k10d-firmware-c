/* @k10d invoke_virtual_slot_10_1046a018 @ 0x1046a018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_10_1046a018(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x23c) + 4);
  uVar1 = (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0x23c) + (int)*(short *)(iVar2 + 0x50));
  return uVar1;
}
