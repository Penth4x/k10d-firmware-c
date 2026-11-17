/* @k10d store_four_shifted_values @ 0x105326a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_four_shifted_values(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = read_u16_from_struct_array(param_2,0);
  *(short *)(iVar2 + 8) = (short)((int)(uint)uVar1 >> 5);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = read_u16_from_struct_array(param_2,1);
  *(short *)(iVar2 + 10) = (short)((int)(uint)uVar1 >> 5);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = read_u16_from_struct_array(param_2,2);
  *(short *)(iVar2 + 0xc) = (short)((int)(uint)uVar1 >> 5);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = read_u16_from_struct_array(param_2,3);
  *(short *)(iVar2 + 0xe) = (short)((int)(uint)uVar1 >> 5);
  return;
}
