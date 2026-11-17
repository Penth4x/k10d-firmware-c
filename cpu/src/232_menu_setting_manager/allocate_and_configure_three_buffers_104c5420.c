/* @k10d allocate_and_configure_three_buffers_104c5420 @ 0x104c5420
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_configure_three_buffers_104c5420(int param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  ushort uVar10;
  ushort uVar11;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint32_t uVar12;
  uint32_t *puVar13;
  uint32_t uVar14;
  uintptr_t sp;
  uint *puVar15;
  uint8_t auStack_308 [32];
  int iStack_2c0;
  uint32_t auStack_2a4 [6];
  uint32_t auStack_28c [6];
  uint32_t auStack_274 [6];
  uint8_t auStack_25c [16];
  int iStack_24c;
  uint32_t uStack_240;
  uint32_t uStack_23c;
  uint32_t uStack_238;
  uint32_t uStack_234;
  uint32_t auStack_230 [122];
  uint32_t auStack_48 [2];
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
  
  puVar15 = (uint *)auStack_308;
  uVar10 = (*(code *)0x104c285c/*ROM*/)(param_2 + 0x34,*(uint32_t *)(param_2 + 0x18));
  uVar11 = (*(code *)0x104c286c/*ROM*/)(param_2 + 0x34,*(uint32_t *)(param_2 + 0x18));
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b934c_new(auStack_2a4);
  cls_105b934c_new(auStack_28c);
  cls_105b934c_new(auStack_274);
  iVar9 = (uint)uVar10 * (uint)uVar11;
  iVar2 = init_buffer_with_pool_alloc(auStack_2a4,iVar9);
  iVar3 = init_buffer_with_pool_alloc(auStack_28c,iVar9);
  iVar4 = init_buffer_with_pool_alloc(auStack_274,iVar9);
  if (((iVar2 == 0) || (iVar3 == 0)) || (iVar4 == 0)) {
    if (iVar9 != 0) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)((int)param_3 + 0x210) = 0;
  }
  else {
    uVar14 = *(uint32_t *)(param_1 + 0x4c);
    uVar5 = get_aligned_next_pointer(param_2);
    uVar6 = get_aligned_next_pointer((int)auStack_2a4);
    uVar7 = get_aligned_next_pointer((int)auStack_28c);
    uVar8 = get_aligned_next_pointer((int)auStack_274);
    *puVar15 = uVar8;
    *(ushort *)((int)puVar15 + 6) = uVar10;
    *(ushort *)((int)puVar15 + 10) = uVar11;
    iStack_2c0 = send_three_config_words(uVar14,uVar5,uVar6,uVar7,*puVar15,*(short *)((int)puVar15 + 6),
                              *(uint16_t *)((int)puVar15 + 10));
    cls_105b9458_new(auStack_25c);
    alloc_two_word_pair_1045c3dc(auStack_48,(uint)uVar10,(uint)uVar11);
    iVar9 = compute_buffer_size_and_init(auStack_25c,auStack_48,1);
    if (iVar9 == 0) {
      if (iStack_24c == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    else {
      if (iStack_2c0 != 0) {
        uVar12 = *(uint32_t *)(param_1 + 0x4c);
        uVar5 = get_aligned_next_pointer((int)auStack_2a4);
        uVar6 = get_aligned_next_pointer((int)auStack_28c);
        uVar7 = get_aligned_next_pointer((int)auStack_274);
        uVar1 = uStack_234;
        uVar14 = uStack_238;
        *puVar15 = uStack_23c;
        puVar15[1] = uVar14;
        puVar15[2] = uVar1;
        *(ushort *)((int)puVar15 + 0xe) = uVar10;
        *(ushort *)((int)puVar15 + 0x12) = uVar11;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0;
        iStack_2c0 = build_and_send_config_packet(uVar12,uVar5,uVar6,uVar7,*puVar15,puVar15[1],puVar15[2],
                                  *(ushort *)((int)puVar15 + 0xe),
                                  *(uint16_t *)((int)puVar15 + 0x12),puVar15[5],puVar15[6],
                                  puVar15[7]);
      }
      iVar9 = compute_buffer_size_and_init(param_3,auStack_48,2);
      if (iVar9 != 0) {
        uStack_30 = 0;
        uStack_2e = 0;
        uStack_2c = 0;
        uStack_2a = 0;
        uStack_28 = 0;
        uStack_3c = uStack_23c;
        uStack_38 = uStack_238;
        uStack_34 = uStack_234;
        uStack_40 = uStack_240;
        uVar14 = return_first_word_1045c514(auStack_230);
        uStack_2c = (short)uVar14;
        uVar14 = return_first_word_1045c514(auStack_230);
        uStack_30 = (short)uVar14;
        uVar14 = read_struct_field_at_offset_4(auStack_230);
        uStack_2a = 0;
        uStack_28 = 0;
        uStack_14 = 0;
        uStack_12 = 0;
        uStack_10 = 0;
        uStack_e = 0;
        uStack_c = 0;
        uStack_20 = *(uint32_t *)((int)param_3 + 0x20);
        uStack_1c = *(uint32_t *)((int)param_3 + 0x24);
        uStack_18 = *(uint32_t *)((int)param_3 + 0x28);
        uStack_24 = *(uint32_t *)((int)param_3 + 0x1c);
        puVar13 = (uint32_t *)((int)param_3 + 0x2c);
        uStack_2e = (short)uVar14;
        uVar14 = return_first_word_1045c514(puVar13);
        uStack_10 = (short)uVar14;
        uVar14 = return_first_word_1045c514(puVar13);
        uStack_14 = (short)uVar14;
        uVar14 = read_struct_field_at_offset_4(puVar13);
        uStack_e = 0;
        uStack_c = 0;
        uStack_12 = (short)uVar14;
        if (iStack_2c0 != 0) {
          iStack_2c0 = build_and_send_two_param_blocks_104c319c(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
        }
        free_heap_if_flagged_1045c402(auStack_48,2);
        cls_105b9458_delete(auStack_25c,2);
        cls_105b934c_delete(auStack_274,2);
        cls_105b934c_delete(auStack_28c,2);
        cls_105b934c_delete(auStack_2a4,2);
        return iStack_2c0;
      }
      if (*(int *)((int)param_3 + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    *(uint8_t *)((int)param_3 + 0x210) = 0;
    free_heap_if_flagged_1045c402(auStack_48,2);
    cls_105b9458_delete(auStack_25c,2);
  }
  cls_105b934c_delete(auStack_274,2);
  cls_105b934c_delete(auStack_28c,2);
  cls_105b934c_delete(auStack_2a4,2);
  return 0;
}
