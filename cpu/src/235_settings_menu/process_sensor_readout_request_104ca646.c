/* @k10d process_sensor_readout_request_104ca646 @ 0x104ca646
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 235_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_sensor_readout_request_104ca646(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t *puVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_a8 [4];
  uint32_t uStack_58;
  uint32_t auStack_54 [7];
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t auStack_14 [2];
  uint8_t local_10 [8];
  
  puVar13 = auStack_a8;
  copy_large_struct((uint32_t *)(param_4 + 0x34),(uint32_t *)(param_3 + 0x34));
  *(uint32_t *)(param_4 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  *(uint8_t *)(param_1 + 0x219) = 0;
  copy_structured_record_104bbb28(local_10,param_2);
  iVar7 = 8;
  do {
    iVar12 = iVar7 + -4;
    *(uint32_t *)((int)auStack_54 + iVar7) = *(uint32_t *)((int)auStack_14 + iVar7);
    iVar7 = iVar12;
  } while (iVar12 != 0);
  auStack_54[3] = 1;
  auStack_54[4] = 0;
  auStack_54[5] = 0;
  auStack_54[6] = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  auStack_14[0] = 0;
  copy_transformed_pair(&uStack_58,param_2);
  uVar5 = return_first_word_1045c514(&uStack_58);
  free_heap_if_flagged_1045c402(&uStack_58,2);
  copy_transformed_pair(&uStack_58,param_2);
  uVar6 = read_struct_field_at_offset_4(&uStack_58);
  free_heap_if_flagged_1045c402(&uStack_58,2);
  puVar4 = auStack_54 + 1;
  iVar7 = return_first_word_1045c514(puVar4);
  iVar12 = read_struct_field_at_offset_4(puVar4);
  iVar8 = compute_buffer_size_and_init((void *)param_4,puVar4,2);
  if (iVar8 == 0) {
    if (*(int *)(param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)(param_4 + 0x210) = 0;
    free_heap_if_flagged_1045c402(puVar4,2);
    iVar7 = 0;
  }
  else {
    uStack_28 = *(uint32_t *)(param_4 + 0x20);
    uStack_24 = *(uint32_t *)(param_4 + 0x24);
    uStack_20 = *(uint32_t *)(param_4 + 0x28);
    uStack_2c = *(uint32_t *)(param_4 + 0x1c);
    puVar3 = (uint32_t *)(param_4 + 0x2c);
    uVar9 = return_first_word_1045c514(puVar3);
    uStack_18 = (short)uVar9;
    uVar9 = return_first_word_1045c514(puVar3);
    uStack_1c = (short)uVar9;
    uVar9 = read_struct_field_at_offset_4(puVar3);
    iVar8 = param_5 * 3;
    uStack_16 = 0;
    auStack_14[0] = 0;
    uVar10 = *(uint32_t *)(param_1 + 0x4c);
    bVar2 = (&DAT_105b94e1/*ROM*/)[iVar8];
    bVar1 = (&DAT_105b94e0/*ROM*/)[iVar8];
    uStack_1a = (short)uVar9;
    *(ushort *)(puVar13 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[iVar8];
    forward_event_with_payload(uVar10,&uStack_2c,(ushort)bVar1,(ushort)bVar2,*(uint16_t *)(puVar13 + 2));
    auStack_54[4] = *(uint32_t *)(param_3 + 0x20);
    auStack_54[5] = *(uint32_t *)(param_3 + 0x24);
    auStack_54[6] = *(uint32_t *)(param_3 + 0x28);
    auStack_54[3] = *(uint32_t *)(param_3 + 0x1c);
    puVar11 = (uint32_t *)(param_3 + 0x2c);
    uVar9 = return_first_word_1045c514(puVar11);
    uStack_34 = (short)uVar9;
    uVar9 = return_first_word_1045c514(puVar11);
    uStack_38 = (short)uVar9;
    uVar9 = read_struct_field_at_offset_4(puVar11);
    uStack_32 = 0;
    uStack_30 = 0;
    uStack_28 = *(uint32_t *)(param_4 + 0x20);
    uStack_24 = *(uint32_t *)(param_4 + 0x24);
    uStack_20 = *(uint32_t *)(param_4 + 0x28);
    uStack_2c = *(uint32_t *)(param_4 + 0x1c);
    uStack_36 = (short)uVar9;
    uVar9 = return_first_word_1045c514(puVar3);
    uStack_1c = (uint16_t)uVar5;
    uStack_1a = (uint16_t)uVar6;
    uStack_16 = (uint16_t)(iVar7 - (uVar5 & 0xffff) >> 1);
    auStack_14[0] = (uint16_t)(iVar12 - (uVar6 & 0xffff) >> 1);
    uStack_18 = (short)uVar9;
    iVar7 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),auStack_54 + 3,&uStack_2c);
    if (iVar7 == 0) {
      *(uint8_t *)(param_4 + 0x210) = 0;
    }
    else {
      *(uint8_t *)(param_4 + 0x210) = 1;
    }
    free_heap_if_flagged_1045c402(puVar4,2);
  }
  return iVar7;
}
