/* @k10d build_and_send_command_packet_104ca462 @ 0x104ca462
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 235_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_send_command_packet_104ca462(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint32_t *puVar3;
  uint16_t uVar4;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t *puVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_78 [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uVar5;
  uint16_t extraout_r4;
  
  puVar11 = auStack_78;
  uVar6 = return_first_word_1045c514((uint32_t *)(param_2 + 0x2c));
  uVar7 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x2c));
  puVar10 = (uint32_t *)(param_3 + 0x1c);
  puVar3 = (uint32_t *)(param_3 + 0x2c);
  uVar8 = return_first_word_1045c514(puVar3);
  uVar9 = read_struct_field_at_offset_4(puVar3);
  extraout_r4 = (uint16_t)uVar9;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  uStack_40 = 1;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar4 = (uint16_t)uVar6;
  uVar5 = (uint16_t)uVar8;
  uStack_14 = uVar5;
  uStack_12 = extraout_r4;
  if (param_4 == 0) {
    *(uint16_t *)(param_1 + 0x1d8) = 0;
    *(uint16_t *)(param_1 + 0x1da) = uVar5;
    *(uint16_t *)(param_1 + 0x1dc) = 0;
    *(uint16_t *)(param_1 + 0x1de) = extraout_r4;
    uStack_3c = *(uint32_t *)(param_2 + 0x20);
    uStack_38 = *(uint32_t *)(param_2 + 0x24);
    uStack_34 = *(uint32_t *)(param_2 + 0x28);
    uStack_40 = *(uint32_t *)(param_2 + 0x1c);
    uStack_2a = 0;
    uStack_28 = 0;
    uStack_20 = *(uint32_t *)(param_3 + 0x20);
    uStack_1c = *(uint32_t *)(param_3 + 0x24);
    uStack_18 = *(uint32_t *)(param_3 + 0x28);
    uStack_24 = *puVar10;
    uStack_e = 0;
    uStack_c = 0;
    uStack_30 = uVar4;
    uStack_2e = (short)uVar7;
    uStack_2c = uVar4;
  }
  else {
    *(uint16_t *)(param_1 + 0x1d8) = *(uint16_t *)(param_1 + 0x1d0);
    *(uint16_t *)(param_1 + 0x1da) = *(uint16_t *)(param_1 + 0x1d2);
    *(uint16_t *)(param_1 + 0x1dc) = *(uint16_t *)(param_1 + 0x1d4);
    *(uint16_t *)(param_1 + 0x1de) = *(uint16_t *)(param_1 + 0x1d6);
    bVar2 = DAT_105b94e1/*ROM*/;
    bVar1 = DAT_105b94e0/*ROM*/;
    uStack_20 = *(uint32_t *)(param_3 + 0x20);
    uStack_1c = *(uint32_t *)(param_3 + 0x24);
    uStack_18 = *(uint32_t *)(param_3 + 0x28);
    uStack_24 = *puVar10;
    uStack_e = 0;
    uStack_c = 0;
    uVar6 = *(uint32_t *)(param_1 + 0x4c);
    uStack_10 = uVar5;
    *(ushort *)(puVar11 + 2) = (ushort)DAT_105b94e2/*ROM*/;
    forward_event_with_payload(uVar6,&uStack_24,(ushort)bVar1,(ushort)bVar2,*(uint16_t *)(puVar11 + 2));
    uStack_3c = *(uint32_t *)(param_2 + 0x20);
    uStack_38 = *(uint32_t *)(param_2 + 0x24);
    uStack_34 = *(uint32_t *)(param_2 + 0x28);
    uStack_40 = *(uint32_t *)(param_2 + 0x1c);
    uStack_2a = 0;
    uStack_28 = 0;
    uStack_20 = *(uint32_t *)(param_3 + 0x20);
    uStack_1c = *(uint32_t *)(param_3 + 0x24);
    uStack_18 = *(uint32_t *)(param_3 + 0x28);
    uStack_24 = *puVar10;
    uStack_30 = uVar4;
    uStack_2e = (short)uVar7;
    uStack_2c = uVar4;
    return_first_word_1045c514(puVar3);
    uStack_12 = *(uint16_t *)(param_1 + 0x1d6);
    uStack_e = *(uint16_t *)(param_1 + 0x1d0);
    uStack_c = *(uint16_t *)(param_1 + 0x1d4);
    uStack_14 = *(uint16_t *)(param_1 + 0x1d2);
  }
  uStack_10 = uVar5;
  uVar6 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
  return uVar6;
}
