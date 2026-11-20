/* @k10d allocate_and_configure_three_buffers_104c5420 @ 0x104c5420
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_configure_three_buffers_104c5420(int param_1,int param_2,void *param_3)

{
  struct {
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint16_t uStack_c;
  } _cfg_24;
  uint32_t uVar1;
  cls_105b934c *pcVar2;
  cls_105b9458 *pcVar3;
  ushort uVar12;
  ushort uVar13;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint32_t uVar14;
  uint32_t *puVar15;
  uint32_t uVar16;
  uintptr_t sp;
  uint *puVar17;
  uint8_t auStack_308 [32];
  int iStack_2c0;
  uint8_t auStack_2a4 [48];
  uint8_t auStack_274 [40];
  int iStack_24c;
  uint8_t uStack_240;
  uint8_t uStack_23f;
  uint8_t uStack_23e;
  uint8_t uStack_23d;
  uint16_t uStack_23c;
  uint16_t uStack_23a;
  uint32_t uStack_238;
  uint32_t uStack_234;
  uint32_t auStack_230 [122];
  uint32_t auStack_48 [2];
  uint32_t auStack_40 [4];
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  puVar17 = (uint *)auStack_308;
  uVar12 = (*(code *)0x104c285c/*ROM*/)(param_2 + 0x34,*(uint32_t *)(param_2 + 0x18));
  uVar13 = (*(code *)0x104c286c/*ROM*/)(param_2 + 0x34,*(uint32_t *)(param_2 + 0x18));
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b934c_new((cls_105b934c *)auStack_2a4);
  pcVar2 = (cls_105b934c *)(auStack_2a4 + 0x18);
  cls_105b934c_new(pcVar2);
  cls_105b934c_new((cls_105b934c *)auStack_274);
  iVar11 = (uint)uVar12 * (uint)uVar13;
  iVar4 = init_buffer_with_pool_alloc((void*)((cls_105b934c *)auStack_2a4),iVar11);
  iVar5 = init_buffer_with_pool_alloc((void*)(pcVar2),iVar11);
  iVar6 = init_buffer_with_pool_alloc((void*)((cls_105b934c *)auStack_274),iVar11);
  if (((iVar4 == 0) || (iVar5 == 0)) || (iVar6 == 0)) {
    if (iVar11 != 0) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)((int)param_3 + 0x210) = 0;
  }
  else {
    uVar16 = *(uint32_t *)(param_1 + 0x4c);
    uVar7 = get_aligned_next_pointer(param_2);
    uVar8 = get_aligned_next_pointer((int)auStack_2a4);
    uVar9 = get_aligned_next_pointer((int)pcVar2);
    uVar10 = get_aligned_next_pointer((int)auStack_274);
    *puVar17 = uVar10;
    *(ushort *)((int)puVar17 + 6) = uVar12;
    *(ushort *)((int)puVar17 + 10) = uVar13;
    iStack_2c0 = send_three_config_words(uVar16,uVar7,uVar8,uVar9,*puVar17,*(short *)((int)puVar17 + 6),
                              *(uint16_t *)((int)puVar17 + 10));
    pcVar3 = (cls_105b9458 *)(auStack_274 + 0x18);
    cls_105b9458_new(pcVar3);
    alloc_two_word_pair_1045c3dc(auStack_48,(uint)uVar12,(uint)uVar13);
    iVar11 = compute_buffer_size_and_init(pcVar3,auStack_48,1);
    if (iVar11 == 0) {
      if (iStack_24c == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    else {
      if (iStack_2c0 != 0) {
        uVar14 = *(uint32_t *)(param_1 + 0x4c);
        uVar7 = get_aligned_next_pointer((int)auStack_2a4);
        uVar8 = get_aligned_next_pointer((int)pcVar2);
        uVar9 = get_aligned_next_pointer((int)auStack_274);
        uVar1 = uStack_234;
        uVar16 = uStack_238;
        *puVar17 = *(uint32_t *)&uStack_23c;
        puVar17[1] = uVar16;
        puVar17[2] = uVar1;
        *(ushort *)((int)puVar17 + 0xe) = uVar12;
        *(ushort *)((int)puVar17 + 0x12) = uVar13;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        iStack_2c0 = build_and_send_config_packet(uVar14,uVar7,uVar8,uVar9,*puVar17,puVar17[1],puVar17[2],
                                  *(ushort *)((int)puVar17 + 0xe),
                                  *(uint16_t *)((int)puVar17 + 0x12),puVar17[5],puVar17[6],
                                  puVar17[7]);
      }
      iVar11 = compute_buffer_size_and_init(param_3,auStack_48,2);
      if (iVar11 != 0) {
        uStack_30 = 0;
        uStack_2e = 0;
        uStack_2c = 0;
        uStack_2a = 0;
        uStack_28 = 0;
        *(uint16_t*)((char*)&(auStack_40[1])+0) = uStack_23c;
        *(uint16_t*)((char*)&(auStack_40[1])+2) = uStack_23a;
        auStack_40[2] = uStack_238;
        auStack_40[3] = uStack_234;
        *(uint8_t*)((char*)&(auStack_40[0])+0) = uStack_240;
        *(uint8_t*)((char*)&(auStack_40[0])+1) = uStack_23f;
        *(uint8_t*)((char*)&(auStack_40[0])+2) = uStack_23e;
        *(uint8_t*)((char*)&(auStack_40[0])+3) = uStack_23d;
        uVar16 = return_first_word_1045c514(auStack_230);
        uStack_2c = (short)uVar16;
        uVar16 = return_first_word_1045c514(auStack_230);
        uStack_30 = (short)uVar16;
        uVar16 = read_struct_field_at_offset_4(auStack_230);
        uStack_2a = 0;
        uStack_28 = 0;
        _cfg_24.uStack_14 = 0;
        _cfg_24.uStack_12 = 0;
        _cfg_24.uStack_10 = 0;
        _cfg_24.uStack_e = 0;
        _cfg_24.uStack_c = 0;
        _cfg_24.uStack_20 = *(uint32_t *)((int)param_3 + 0x20);
        _cfg_24.uStack_1c = *(uint32_t *)((int)param_3 + 0x24);
        _cfg_24.uStack_18 = *(uint32_t *)((int)param_3 + 0x28);
        _cfg_24.uStack_24 = *(uint32_t *)((int)param_3 + 0x1c);
        puVar15 = (uint32_t *)((int)param_3 + 0x2c);
        uStack_2e = (short)uVar16;
        uVar16 = return_first_word_1045c514(puVar15);
        _cfg_24.uStack_10 = (short)uVar16;
        uVar16 = return_first_word_1045c514(puVar15);
        _cfg_24.uStack_14 = (short)uVar16;
        uVar16 = read_struct_field_at_offset_4(puVar15);
        _cfg_24.uStack_e = 0;
        _cfg_24.uStack_c = 0;
        _cfg_24.uStack_12 = (short)uVar16;
        if (iStack_2c0 != 0) {
          iStack_2c0 = build_and_send_two_param_blocks_104c319c(*(uint32_t *)(param_1 + 0x4c),auStack_40,&_cfg_24.uStack_24);
        }
        free_heap_if_flagged_1045c402(auStack_48,2);
        cls_105b9458_delete(pcVar3,2);
        cls_105b934c_delete((cls_105b934c *)auStack_274,2);
        cls_105b934c_delete(pcVar2,2);
        cls_105b934c_delete((cls_105b934c *)auStack_2a4,2);
        return iStack_2c0;
      }
      if (*(int *)((int)param_3 + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
    }
    *(uint8_t *)((int)param_3 + 0x210) = 0;
    free_heap_if_flagged_1045c402(auStack_48,2);
    cls_105b9458_delete(pcVar3,2);
  }
  cls_105b934c_delete((cls_105b934c *)auStack_274,2);
  cls_105b934c_delete(pcVar2,2);
  cls_105b934c_delete((cls_105b934c *)auStack_2a4,2);
  return 0;
}
