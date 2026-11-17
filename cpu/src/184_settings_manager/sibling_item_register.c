/* @k10d sibling_item_register @ 0x10489158
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_mode_handler_and_set_params)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to a mode-specific handler based on an object field, then issues a series of
 *   parameter-setting calls with varying indices and values.
 * summary:
 *   The function reads a mode identifier from the object (param_1[0x11]) and, if a
 *   condition is met, dispatches to one of four handlers (write_card_data_in_chunks,
 *   verify_card_data_integrity, read_card_data_in_chunks, write_data_to_cf_card) based on
 *   the mode value (2, 3, 5, or 6). It then issues a series of calls to
 *   build_and_dispatch_draw_params with specific indices (1-8) and parameter values, using
 *   data from tables at 0x105b2df0 and 0x105b36d8. Finally, it calls
 *   clear_flag_at_offset_0x50_104894f6 and heap_free_if_flagged to finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * sibling_item_register(int *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  uint16_t uVar1;
  uint uVar2;
  char cVar4;
  void *pvVar3;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_8c [12];
  uint8_t auStack_5c [83];
  uint8_t uStack_9;
  
  puVar6 = auStack_8c;
  uVar2 = param_1[0x11];
  cVar4 = read_byte_at_offset_0x50_104894f0((int)param_1);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  if (cVar4 != '\0') {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    if (uVar2 == 2) {
      write_card_data_in_chunks(*param_1,&DAT_105b3680/*ROM*/);
      pvVar3 = (void *)get_kernel_object_id(&uStack_9);
      format_string_to_buffer_10545140(auStack_5c,&DAT_105b3690/*ROM*/,pvVar3,param_4);
      iVar5 = verify_card_data_integrity(*param_1,(int)auStack_5c,1);
    }
    else if (uVar2 == 3) {
      pvVar3 = (void *)get_kernel_object_id(&uStack_9);
      format_string_to_buffer_10545140(auStack_5c,&DAT_105b36a0/*ROM*/,pvVar3,param_4);
      iVar5 = write_card_data_in_chunks(*param_1,auStack_5c);
    }
    else if (uVar2 == 5) {
      pvVar3 = (void *)get_kernel_object_id(&uStack_9);
      format_string_to_buffer_10545140(auStack_5c,&DAT_105b36b0/*ROM*/,pvVar3,param_4);
      iVar5 = read_card_data_in_chunks(*param_1,auStack_5c);
    }
    else {
      if (uVar2 != 6) goto LAB_104892a0;
      pvVar3 = (void *)get_kernel_object_id(&uStack_9);
      format_string_to_buffer_10545140(auStack_5c,&DAT_105b36c4/*ROM*/,pvVar3,param_4);
      iVar5 = write_data_to_cf_card(*param_1,auStack_5c);
    }
    if (iVar5 == 0) {
      check_kernel_call_success_10459fea();
    }
  }
LAB_104892a0:
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0,&DAT_105b36d8/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,0,&DAT_105b36d8/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0,&DAT_105b36d8/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,0,&DAT_105b36d8/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,6,0,&DAT_105b36d8/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,uVar2 & 0xffff,0,&DAT_105b36dc/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0xd;
  build_and_dispatch_draw_params((int)param_1,1,7,&DAT_105b36e0/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  iVar5 = uVar2 * 2;
  uVar1 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar5);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = uVar1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,2,&DAT_105b36f0/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e04/*ROM*/ + iVar5);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = uVar1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,2,&DAT_105b3708/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar5);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = uVar1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,2,&DAT_105b3720/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e2c/*ROM*/ + iVar5);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = uVar1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,2,&DAT_105b3738/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar5);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = uVar1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,6,2,&DAT_105b3750/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,2,&DAT_105b3768/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,8,&DAT_105b3770/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 1;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,0x12,&DAT_105b3778/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  *(uint16_t *)(puVar6 + 2) = 7;
  *(uint16_t *)(puVar6 + 6) = 0xff;
  puVar6[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,0x16,&DAT_105b3780/*ROM*/,*(uint16_t *)(puVar6 + 2),
               *(uint16_t *)(puVar6 + 6),puVar6[0xb]);
  clear_flag_at_offset_0x50_104894f6(param_1);
  heap_free_if_flagged(&uStack_9,2);
  return param_1;
}
