/* @k10d init_event_queue_struct_104f84b4 @ 0x104f84b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes a queue control block on the stack and registers it with a queue management
 *   subsystem.
 * summary:
 *   The function constructs a large structure on the stack (local_8c) containing fixed
 *   constants (0x100, 0x167, 0xfe99) and copies parameters into specific fields. It then
 *   calls eventflag_clr_flg, build_and_send_structured_packet, eventflag_wai_flg, and
 *   configure_timer_channel_state, passing pointers to the stack structure and fields from
 *   param_1 (offsets 0x28 and 0x38). The pattern of initializing a block with a pointer to
 *   a constant table (_DAT_105a2af0) and calling a sequence of setup/teardown functions
 *   suggests the creation and registration of a kernel object, likely a message queue or
 *   event queue, given the REALOS context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_event_queue_struct_104f84b4(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,ushort param_8,
                 uint16_t param_9,int param_10,int param_11,int param_12)

{
  struct {
    uint32_t uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    ushort uStack_50;
    uint16_t uStack_4e;
    ushort uStack_4c;
    ushort uStack_4a;
    ushort uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    uint16_t uStack_3a;
    uint16_t uStack_38;
    uint16_t uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t * puStack_2c;
    uint8_t uStack_28;
    uint8_t uStack_27;
    uint8_t uStack_26;
    uint8_t uStack_25;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_74;
  uint32_t *puVar1;
  uintptr_t sp;
  uint16_t local_8c;
  uint16_t uStack_8a;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint16_t uStack_78;
  uint16_t uStack_76;
  _cfg_74.uStack_54 = 0;
  _cfg_74.uStack_1e = 0;
  _cfg_74.uStack_10 = 0;
  _cfg_74.uStack_74 = 1;
  _cfg_74.uStack_64 = 0;
  _cfg_74.uStack_60 = param_5;
  _cfg_74.uStack_5c = param_6;
  _cfg_74.uStack_25 = 0;
  _cfg_74.uStack_58 = param_7;
  _cfg_74.uStack_50 = param_8;
  _cfg_74.uStack_44 = 0;
  _cfg_74.uStack_42 = 0;
  _cfg_74.uStack_40 = 0;
  _cfg_74.uStack_4e = (uint16_t)((int)(uint)param_8 >> 1);
  _cfg_74.uStack_3e = 0;
  _cfg_74.uStack_4c = param_8;
  _cfg_74.uStack_4a = param_8;
  _cfg_74.uStack_48 = param_8;
  _cfg_74.uStack_34 = 0;
  _cfg_74.uStack_32 = 0;
  _cfg_74.uStack_30 = 0;
  _cfg_74.uStack_46 = param_9;
  _cfg_74.uStack_28 = param_10 != 0;
  _cfg_74.uStack_2e = 0;
  _cfg_74.uStack_27 = param_11 != 0;
  _cfg_74.uStack_26 = param_12 != 0;
  _cfg_74.uStack_22 = 1;
  _cfg_74.uStack_20 = 2;
  _cfg_74.uStack_24 = 0;
  _cfg_74.iStack_1c = param_10;
  _cfg_74.iStack_18 = param_11;
  _cfg_74.iStack_14 = param_12;
  local_8c = 0x100;
  uStack_8a = 0;
  uStack_88 = 0x167;
  uStack_86 = 0xfe99;
  uStack_84 = 0x100;
  uStack_82 = 0xffa8;
  uStack_80 = 0xff49;
  uStack_7e = 0x10f;
  uStack_7c = 0x100;
  uStack_7a = 0x1c6;
  uStack_78 = 0;
  uStack_76 = 0xfe3a;
  _cfg_74.puStack_2c = &local_8c;
  _cfg_74.uStack_c = 0;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  _cfg_74.uStack_3c = 0;
  _cfg_74.uStack_3a = 0;
  _cfg_74.uStack_38 = 0;
  _cfg_74.uStack_36 = 0;
  _cfg_74.uStack_70 = param_2;
  _cfg_74.uStack_6c = param_3;
  _cfg_74.uStack_68 = param_4;
  eventflag_clr_flg(puVar1,1);
  build_and_send_structured_packet((int)(*(uint32_t *)(param_1 + 0x28)),(int)(1),(void *)(param_1 + 4),(uint32_t *)(&_cfg_74.uStack_74));
  eventflag_wai_flg(puVar1,1,&_cfg_74.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x28),1);
  return;
}
