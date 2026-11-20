/* @k10d compute_and_send_checksum @ 0x1053253e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_send_checksum(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int *piVar3;
  void *pvVar13;
  uintptr_t sp;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  pvVar13 = (void *)(*(int *)(param_1 + 0x14) + 0x4a8);
  iVar1 = read_first_word_1045c66c(pvVar13);
  uVar2 = read_first_word_1045c66c(pvVar13);
  bVar4 = read_byte_at_offset_two(pvVar13);
  bVar5 = read_byte_at_offset_three(pvVar13);
  bVar6 = read_byte_at_offset_5(pvVar13);
  bVar7 = read_byte_at_offset_six(pvVar13);
  bVar8 = read_byte_at_offset_seven(pvVar13);
  bVar9 = read_byte_from_struct_offset_104a8c54(param_2,0);
  bVar10 = read_byte_from_struct_offset_104a8c54(param_2,1);
  bVar11 = read_byte_from_struct_offset_104a8c54(param_2,2);
  bVar12 = read_byte_from_struct_offset_104a8c54(param_2,3);
  uVar2 = ((uint)bVar9 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12) ^
          ((uint)bVar6 << 0x18 | (uint)bVar7 << 0x10 | (uint)bVar8 << 8) ^ 0xffffffff ^
          ((iVar1 >> 8) << 0x18 | (uVar2 & 0xff) << 0x10 | (uint)bVar4 << 8 | (uint)bVar5);
  uStack_c = (uint8_t)(uVar2 >> 0x18);
  uStack_b = (uint8_t)(uVar2 >> 0x10);
  uStack_a = (uint8_t)(uVar2 >> 8);
  uStack_9 = (uint8_t)uVar2;
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x10c);
  iVar1 = *piVar3;
  (((vtbl_entry*)(iVar1))[8].fn)((int)piVar3 + (int)((vtbl_entry*)(iVar1))[8].adj,&uStack_c);
  return;
}
