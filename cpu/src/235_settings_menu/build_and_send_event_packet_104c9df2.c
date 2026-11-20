/* @k10d build_and_send_event_packet_104c9df2 @ 0x104c9df2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 235_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_and_send_event_packet_104c9df2(int param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint16_t param_5,
                uint32_t param_6,uint32_t param_7)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t *puVar9;
  uint8_t auStack_58 [28];
  uint32_t auStack_14 [2];
  uint32_t uStack_c;
  
  puVar9 = (uint32_t *)auStack_58;
  uVar1 = *(uint32_t *)(param_2 + 0x20);
  uVar2 = *(uint32_t *)(param_2 + 0x24);
  uVar3 = *(uint32_t *)(param_2 + 0x28);
  uVar4 = return_first_word_1045c514((uint32_t *)(param_2 + 0x2c));
  uVar5 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x2c));
  alloc_two_word_pair_1045c3dc(auStack_14,uVar4 & 0xffff,uVar5 & 0xffff);
  iVar8 = *(int *)(param_2 + 0x1c);
  uStack_c = 0;
  uVar6 = *(uint32_t *)(param_1 + 0x4c);
  *puVar9 = (uintptr_t)(auStack_14);
  puVar9[1] = iVar8;
  puVar9[2] = param_4;
  *(uint16_t *)((int)puVar9 + 0xe) = param_5;
  puVar9[4] = param_6;
  puVar9[5] = param_7;
  puVar9[6] = (uintptr_t)(&uStack_c);
  iVar7 = build_and_send_event_packet_104c2d7c(uVar6,uVar1,uVar2,uVar3,(uint32_t *)*puVar9,puVar9[1],puVar9[2],
                       *(uint16_t *)((int)puVar9 + 0xe),puVar9[4],puVar9[5],
                       (uint32_t *)puVar9[6]);
  if (iVar7 != 0) {
    param_3[6] = uStack_c;
    uVar1 = return_first_word_1045c514(auStack_14);
    *param_3 = uVar1;
    uVar1 = read_struct_field_at_offset_4(auStack_14);
    param_3[1] = uVar1;
    param_3[0xb] = param_4;
    param_3[4] = (uint)*(ushort *)(param_1 + 0x1da);
    param_3[5] = (uint)*(ushort *)(param_1 + 0x1de);
    param_3[2] = (uint)*(ushort *)(param_1 + 0x1d8);
    param_3[3] = (uint)*(ushort *)(param_1 + 0x1dc);
    param_3[7] = 1;
    if (iVar8 == 2) {
      param_3[8] = 2;
    }
    else if (iVar8 == 1) {
      param_3[8] = 1;
    }
    else {
      param_3[8] = 0xffffffff;
    }
    param_3[10] = 1;
    *(uint16_t *)(param_3 + 9) = 8;
  }
  free_heap_if_flagged_1045c402(auStack_14,2);
  return iVar7;
}
