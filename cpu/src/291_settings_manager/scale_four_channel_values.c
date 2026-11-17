/* @k10d scale_four_channel_values @ 0x105328aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void scale_four_channel_values(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  
  iVar2 = get_or_init_sram_buffer_1052c5b8();
  puVar5 = *(ushort **)(iVar2 + 0x40);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  uVar1 = **(ushort **)(iVar3 + 0x38);
  uVar4 = read_u16_from_struct_array(param_2,0);
  *(short *)(iVar2 + 0x1a) = (short)((int)((uint)uVar1 * (uint)uVar4) / (int)(uint)*puVar5);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  uVar1 = *(ushort *)(*(int *)(iVar3 + 0x38) + 2);
  uVar4 = read_u16_from_struct_array(param_2,1);
  *(short *)(iVar2 + 0x1c) = (short)((int)((uint)uVar1 * (uint)uVar4) / (int)(uint)puVar5[1]);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  uVar1 = *(ushort *)(*(int *)(iVar3 + 0x38) + 4);
  uVar4 = read_u16_from_struct_array(param_2,2);
  *(short *)(iVar2 + 0x1e) = (short)((int)((uint)uVar1 * (uint)uVar4) / (int)(uint)puVar5[2]);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar2 = get_or_init_sram_buffer_1052c5b8();
  uVar1 = *(ushort *)(*(int *)(iVar2 + 0x38) + 6);
  uVar4 = read_u16_from_struct_array(param_2,3);
  *(short *)(iVar3 + 0x20) = (short)((int)((uint)uVar1 * (uint)uVar4) / (int)(uint)puVar5[3]);
  return;
}
