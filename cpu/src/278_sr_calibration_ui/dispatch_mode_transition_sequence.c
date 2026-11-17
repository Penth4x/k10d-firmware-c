/* @k10d dispatch_mode_transition_sequence @ 0x1051f260
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Executes a mode-specific transition sequence based on a state field, then writes a
 *   series of configuration values to a control block.
 * summary:
 *   The function reads a state value from offset 0x44 of the object and branches on it
 *   (values 2, 3, 5, 6, 7) to call different helper functions, likely handling specific
 *   camera mode changes or status updates. Following the conditional logic, it performs a
 *   loop that writes three consecutive values to a control structure via
 *   build_and_dispatch_draw_params, then writes a series of additional values derived from
 *   lookup tables at 0x105b2df0, 0x105b2e04, etc., indexed by the state value. The function
 *   concludes by calling clear_flag_at_offset_0x50_1051f602 and returning the object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * dispatch_mode_transition_sequence(uint32_t *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  uint16_t uVar1;
  char cVar3;
  void *pvVar2;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_88 [12];
  int iStack_64;
  uint8_t auStack_58 [80];
  
  puVar7 = auStack_88;
  uVar5 = param_1[0x11];
  cVar3 = read_byte_at_offset_0x50_1051f5fc(param_1);
  if (cVar3 != '\0') {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    if (uVar5 == 2) {
      build_and_send_16_byte_command(*param_1,0x105d6e3c/*ROM*/);
      compare_two_read_buffers(*param_1,0x105d6e4c/*ROM*/);
    }
    else if (uVar5 == 3) {
      build_and_send_16_byte_command(*param_1,0x105d6e5c/*ROM*/);
    }
    else if (uVar5 == 5) {
      pvVar2 = (void *)get_cached_high_nibble();
      format_string_to_buffer_10545140(auStack_58,(char *)0x105d6e6c/*ROM*/,pvVar2,param_4);
      *(uint16_t *)(puVar7 + 2) = 7;
      *(uint16_t *)(puVar7 + 6) = 0xff;
      puVar7[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,4,2,auStack_58,*(uint16_t *)(puVar7 + 2),
                   *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
      check_kernel_call_success_10459fea();
      trigger_sr_cal_transfer_104867c0((int)param_1);
    }
    else if (uVar5 == 6) {
      *(uint16_t *)(puVar7 + 2) = 0;
      *(uint16_t *)(puVar7 + 6) = 0xff;
      puVar7[0xb] = 0xd;
      build_and_dispatch_draw_params((int)param_1,4,2,0x105d6e80/*ROM*/,*(uint16_t *)(puVar7 + 2),
                   *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
      iVar6 = get_or_create_singleton_object_104bb22a();
      init_and_start_timer_object(*(uint32_t *)(iVar6 + 8));
    }
    else if (uVar5 == 7) {
      trigger_sr_cal_transfer_104867c0((int)param_1);
      dispatch_two_param_operation(*param_1,3,0);
      check_kernel_call_success_10459fea();
    }
  }
  uVar4 = 2;
  iStack_64 = 1;
  do {
    *(uint16_t *)(puVar7 + 2) = 7;
    *(uint16_t *)(puVar7 + 6) = 0xff;
    puVar7[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar4 & 0xffff,0,0x105d6e9c/*ROM*/,*(uint16_t *)(puVar7 + 2),
                 *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
    *(uint16_t *)(puVar7 + 2) = 7;
    *(uint16_t *)(puVar7 + 6) = 0xff;
    puVar7[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar4 + 1 & 0xffff,0,0x105d6e9c/*ROM*/,*(uint16_t *)(puVar7 + 2),
                 *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
    *(uint16_t *)(puVar7 + 2) = 7;
    *(uint16_t *)(puVar7 + 6) = 0xff;
    puVar7[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar4 + 2 & 0xffff,0,0x105d6e9c/*ROM*/,*(uint16_t *)(puVar7 + 2),
                 *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
    iStack_64 = iStack_64 + -1;
    uVar4 = uVar4 + 3;
  } while (-1 < iStack_64);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 0xff;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,uVar5 & 0xffff,0,0x105d6ea0/*ROM*/,*(uint16_t *)(puVar7 + 2),
               *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 0xff;
  puVar7[0xb] = 0xd;
  build_and_dispatch_draw_params((int)param_1,1,7,0x105d6ea4/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  iVar6 = uVar5 * 2;
  uVar1 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,2,0x105d6eb4/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e04/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,2,0x105d6ed0/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,2,0x105d6eec/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e2c/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,2,0x105d6f08/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,6,2,0x105d6f24/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e54/*ROM*/ + iVar6);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = uVar1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,7,2,0x105d6f40/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,2,0x105d6f5c/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 0xff;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,8,0x105d6f64/*ROM*/,*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6),
               puVar7[0xb]);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 1;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,0x12,0x105d6f6c/*ROM*/,*(uint16_t *)(puVar7 + 2),
               *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
  *(uint16_t *)(puVar7 + 2) = 7;
  *(uint16_t *)(puVar7 + 6) = 0xff;
  puVar7[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,0x16,0x105d6f74/*ROM*/,*(uint16_t *)(puVar7 + 2),
               *(uint16_t *)(puVar7 + 6),puVar7[0xb]);
  clear_flag_at_offset_0x50_1051f602(param_1);
  return param_1;
}
