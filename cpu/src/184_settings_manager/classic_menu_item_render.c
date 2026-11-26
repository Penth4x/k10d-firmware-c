/* @k10d classic_menu_item_render @ 0x10488b1e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_mode_code_action)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an action based on a mode code read from param_1[0x11] and updates state via
 *   helper calls.
 * summary:
 *   The function reads a mode code from param_1[0x11] and branches on values 3 through 7.
 *   For each branch, it calls trigger_sr_cal_transfer_104867c0 and then specific helpers
 *   like get_or_init_singleton_10489b4e, menu_ctor_TESTMODE, or menu_ctor_classic_wrapper.
 *   It also calls build_and_dispatch_draw_params repeatedly with various parameters, likely
 *   to update display or state registers. The function concludes by calling
 *   clear_flag_at_offset_0x4c_10488f62 and clear_byte_at_offset_0x4d_10488f82 and returning
 *   a pointer stored in puStack_68.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t *
classic_menu_item_render(uint32_t *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  uint16_t uVar1;
  uint uVar2;
  int iVar3;
  char cVar5;
  char cVar6;
  void *pvVar4;
  bool bVar7;
  void *puVar8;
  uint uVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_90 [12];
  int iStack_6c;
  uint32_t *puStack_68;
  uint8_t auStack_5c [83];
  uint8_t uStack_9;
  
  puVar10 = auStack_90;
  uVar2 = param_1[0x11];
  cVar5 = read_byte_at_offset_0x4d_10488f7c(param_1);
  cVar6 = get_select_flag(param_1);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  puStack_68 = param_1;
  if (cVar6 == '\0') {
    if ((cVar5 != '\0') && (uVar2 == 3)) {
      *(bool *)((int)param_1 + 0x4e) = *(char *)((int)param_1 + 0x4e) == '\0';
    }
  }
  else {
    if (uVar2 == 3) {
      trigger_sr_cal_transfer_104867c0((int)param_1);
      iVar3 = get_or_init_singleton_10489b4e();
      *(uint *)(iVar3 + 0x6c) = (uint)(*(char *)((int)param_1 + 0x4e) != '\0');
      puStack_68 = (uint32_t *)get_or_init_singleton_10489b4e();
    }
    else if (uVar2 == 4) {
      trigger_sr_cal_transfer_104867c0((int)param_1);
      puStack_68 = (uint32_t *)menu_ctor_TESTMODE();
    }
    else {
      if (uVar2 != 5) {
        if (uVar2 == 6) {
          trigger_sr_cal_transfer_104867c0((int)param_1);
          pvVar4 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
          format_string_to_buffer_10545140(auStack_5c,&DAT_105b3514/*ROM*/,pvVar4,param_4);
          iVar3 = eeprom_adj_dump_0xa7(*param_1,auStack_5c);
          if (iVar3 == 0) {
            puVar8 = &DAT_105b3530/*ROM*/;
          }
          else {
            puVar8 = &DAT_105b3524/*ROM*/;
          }
        }
        else {
          if (uVar2 != 7) goto LAB_10488ce2;
          trigger_sr_cal_transfer_104867c0((int)param_1);
          pvVar4 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
          format_string_to_buffer_10545140(auStack_5c,&DAT_105b353c/*ROM*/,pvVar4,param_4);
          bVar7 = read_eeprom_blocks_to_heap(*param_1,auStack_5c);
          if (bVar7) {
            puVar8 = &DAT_105b354c/*ROM*/;
          }
          else {
            puVar8 = &DAT_105b3558/*ROM*/;
          }
        }
        *(uint16_t *)(puVar10 + 2) = 0xb;
        *(uint16_t *)(puVar10 + 6) = 0xff;
        puVar10[0xb] = 0;
        build_and_dispatch_draw_params((int)param_1,4,8,puVar8,*(uint16_t *)(puVar10 + 2),
                     *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
        check_kernel_call_success_10459fea(0x3e8);
        goto LAB_10488ce2;
      }
      trigger_sr_cal_transfer_104867c0((int)param_1);
      iVar3 = menu_ctor_classic_wrapper();
      *(uint32_t *)(iVar3 + 0x6c) = 0;
      puStack_68 = (uint32_t *)menu_ctor_classic_wrapper();
    }
    set_byte_at_offset_0x4f(param_1,1);
  }
LAB_10488ce2:
  cVar5 = read_byte_at_offset_79(param_1);
  if (cVar5 == '\0') {
    uVar9 = 2;
    iStack_6c = 1;
    do {
      *(uint16_t *)(puVar10 + 2) = 7;
      *(uint16_t *)(puVar10 + 6) = 0xff;
      puVar10[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar9 & 0xffff,0,&DAT_105b3564/*ROM*/,*(uint16_t *)(puVar10 + 2),
                   *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
      *(uint16_t *)(puVar10 + 2) = 7;
      *(uint16_t *)(puVar10 + 6) = 0xff;
      puVar10[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar9 + 1 & 0xffff,0,&DAT_105b3564/*ROM*/,*(uint16_t *)(puVar10 + 2),
                   *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
      *(uint16_t *)(puVar10 + 2) = 7;
      *(uint16_t *)(puVar10 + 6) = 0xff;
      puVar10[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar9 + 2 & 0xffff,0,&DAT_105b3564/*ROM*/,*(uint16_t *)(puVar10 + 2),
                   *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
      uVar9 = uVar9 + 3;
      iStack_6c = iStack_6c + -1;
    } while (-1 < iStack_6c);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 0xff;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar2 & 0xffff,0,&DAT_105b3568/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 0xff;
    puVar10[0xb] = 0xd;
    build_and_dispatch_draw_params((int)param_1,1,7,&DAT_105b356c/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    iVar3 = uVar2 * 2;
    uVar1 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,2,2,&DAT_105b357c/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      puVar8 = &DAT_105b35ac/*ROM*/;
    }
    else {
      puVar8 = &DAT_105b3594/*ROM*/;
    }
    uVar1 = *(uint16_t *)(&DAT_105b2e04/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,3,2,puVar8,*(uint16_t *)(puVar10 + 2),*(uint16_t *)(puVar10 + 6),
                 puVar10[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,4,2,&DAT_105b35c4/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e2c/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,5,2,&DAT_105b35dc/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,6,2,&DAT_105b35f4/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e54/*ROM*/ + iVar3);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,7,2,&DAT_105b360c/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,2,&DAT_105b3624/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 0xff;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,8,&DAT_105b362c/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 1;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,0x12,&DAT_105b3634/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
    *(uint16_t *)(puVar10 + 2) = 7;
    *(uint16_t *)(puVar10 + 6) = 0xff;
    puVar10[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,0x16,&DAT_105b363c/*ROM*/,*(uint16_t *)(puVar10 + 2),
                 *(uint16_t *)(puVar10 + 6),puVar10[0xb]);
  }
  clear_flag_at_offset_0x4c_10488f62(param_1);
  clear_byte_at_offset_0x4d_10488f82(param_1);
  heap_free_if_flagged(&uStack_9,2);
  return puStack_68;
}
