/* @k10d dispatch_mode_transition_104884a8 @ 0x104884a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * dispatch_mode_transition_104884a8(uint32_t *param_1)

{
  uint16_t uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  void *puVar6;
  uint uVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_3c [12];
  int iStack_18;
  uint32_t *puStack_14;
  
  puVar8 = auStack_3c;
  uVar2 = param_1[0x11];
  cVar4 = read_byte_at_offset_0x4d_104888f8(param_1);
  cVar5 = read_byte_at_offset_0x4c_104888cc(param_1);
  puStack_14 = param_1;
  if (cVar5 == '\0') {
    if (cVar4 != '\0') {
      if (uVar2 == 2) {
        *(bool *)((int)param_1 + 0x4e) = *(char *)((int)param_1 + 0x4e) == '\0';
      }
      else if (uVar2 == 3) {
        *(bool *)((int)param_1 + 0x4f) = *(char *)((int)param_1 + 0x4f) == '\0';
      }
      else if (uVar2 == 4) {
        *(bool *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) == '\0';
      }
      else if (uVar2 == 5) {
        *(bool *)((int)param_1 + 0x51) = *(char *)((int)param_1 + 0x51) == '\0';
      }
    }
  }
  else {
    switch(uVar2) {
    case 2:
    case 3:
    case 4:
    case 5:
      invoke_virtual_method_one_arg(*param_1,*(uint8_t *)((int)param_1 + 0x4e));
      invoke_virtual_method_one(*param_1,*(uint8_t *)((int)param_1 + 0x4f));
      invoke_virtual_method_with_arg(*param_1,*(uint8_t *)(param_1 + 0x14));
      invoke_virtual_slot_one_1046d78e(*param_1,*(uint8_t *)((int)param_1 + 0x51));
      call_single_helper_1046d812(*param_1);
      trigger_sr_cal_transfer_104867c0((int)param_1);
      set_byte_at_offset_0x52(param_1,1);
      puStack_14 = (uint32_t *)0x0;
      break;
    case 6:
      *(uint8_t *)((int)param_1 + 0x53) = 1;
      deactivate_app_mode_context(*param_1);
      store_four_status_bytes(param_1);
      trigger_sr_cal_transfer_104867c0((int)param_1);
      dispatch_two_param_operation(*param_1,2,1);
      set_byte_at_offset_0x52(param_1,1);
      break;
    case 7:
      trigger_sr_cal_transfer_104867c0((int)param_1);
      initialize_subsystem_object_10470732(*param_1);
      set_byte_at_offset_0x52(param_1,1);
      puStack_14 = (uint32_t *)0x0;
      break;
    default:
    }
  }
  cVar4 = read_byte_at_offset_0x52(param_1);
  if (cVar4 == '\0') {
    uVar7 = 2;
    iStack_18 = 1;
    do {
      *(uint16_t *)(puVar8 + 2) = 7;
      *(uint16_t *)(puVar8 + 6) = 0xff;
      puVar8[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar7 & 0xffff,0,(void *)&DAT_105b3398/*ROM*/,*(uint16_t *)(puVar8 + 2),
                   *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
      *(uint16_t *)(puVar8 + 2) = 7;
      *(uint16_t *)(puVar8 + 6) = 0xff;
      puVar8[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar7 + 1 & 0xffff,0,(void *)&DAT_105b3398/*ROM*/,*(uint16_t *)(puVar8 + 2),
                   *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
      *(uint16_t *)(puVar8 + 2) = 7;
      *(uint16_t *)(puVar8 + 6) = 0xff;
      puVar8[0xb] = 0;
      build_and_dispatch_draw_params((int)param_1,uVar7 + 2 & 0xffff,0,(void *)&DAT_105b3398/*ROM*/,*(uint16_t *)(puVar8 + 2),
                   *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
      uVar7 = uVar7 + 3;
      iStack_18 = iStack_18 + -1;
    } while (-1 < iStack_18);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar2 & 0xffff,0,(void *)&DAT_105b339c/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    puVar8[0xb] = 0xd;
    build_and_dispatch_draw_params((int)param_1,1,7,(void *)&DAT_105b33a0/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      puVar6 = (void *)&DAT_105b33c8/*ROM*/;
    }
    else {
      puVar6 = (void *)&DAT_105b33b0/*ROM*/;
    }
    iVar3 = uVar2 * 2;
    uVar1 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,2,2,puVar6,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
                 puVar8[0xb]);
    if (*(char *)((int)param_1 + 0x4f) == '\0') {
      puVar6 = (void *)&DAT_105b33f8/*ROM*/;
    }
    else {
      puVar6 = (void *)&DAT_105b33e0/*ROM*/;
    }
    uVar1 = *(uint16_t *)(&DAT_105b2e04/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,3,2,puVar6,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
                 puVar8[0xb]);
    if (*(char *)(param_1 + 0x14) == '\0') {
      puVar6 = (void *)&DAT_105b3428/*ROM*/;
    }
    else {
      puVar6 = (void *)&DAT_105b3410/*ROM*/;
    }
    uVar1 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,4,2,puVar6,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
                 puVar8[0xb]);
    if (*(char *)((int)param_1 + 0x51) == '\0') {
      puVar6 = (void *)&DAT_105b3458/*ROM*/;
    }
    else {
      puVar6 = (void *)&DAT_105b3440/*ROM*/;
    }
    uVar1 = *(uint16_t *)(&DAT_105b2e2c/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,5,2,puVar6,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
                 puVar8[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,6,2,(void *)&DAT_105b3470/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    uVar1 = *(uint16_t *)(&DAT_105b2e54/*ROM*/ + iVar3);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = uVar1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,7,2,(void *)&DAT_105b3488/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,2,(void *)&DAT_105b34a0/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,8,(void *)&DAT_105b34a8/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 1;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,0x12,(void *)&DAT_105b34b0/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
    *(uint16_t *)(puVar8 + 2) = 7;
    *(uint16_t *)(puVar8 + 6) = 0xff;
    puVar8[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,8,0x16,(void *)&DAT_105b34b8/*ROM*/,*(uint16_t *)(puVar8 + 2),
                 *(uint16_t *)(puVar8 + 6),puVar8[0xb]);
  }
  clear_flag_at_offset_0x4c_104888d2(param_1);
  clear_byte_at_offset_0x4d_104888fe(param_1);
  return puStack_14;
}
