/* @k10d send_three_parameter_blocks @ 0x105048c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs and transmits three sequential data blocks derived from two source
 *   structures via a helper routine.
 * summary:
 *   The function builds a local stack buffer containing fields from param_2 and param_3,
 *   then calls build_and_send_param_struct_1050584a three times to transmit these blocks.
 *   Between transmissions, it calls eventflag_clr_flg and eventflag_wai_flg, likely for
 *   synchronization or status checking, and finally calls configure_timer_channel_state.
 *   The data fields are shifted or copied from specific offsets in the input structures.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_three_parameter_blocks(int param_1,void *param_2,int param_3)

{
  struct {
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint16_t uStack_30;
    uint32_t uStack_2c;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t * puStack_18;
    uint16_t uStack_14;
    uint8_t uStack_12;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_38;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint16_t uStack_3a;
  _cfg_38.uStack_12 = 0;
  _cfg_38.uStack_38 = 0;
  _cfg_38.uStack_10 = 0;
  uStack_4a = 0x10;
  uStack_48 = 0x10;
  uStack_46 = 0x10;
  uStack_44 = 0x10;
  uStack_42 = 0x80;
  uStack_40 = 0x10;
  uStack_3e = 0x10;
  uStack_3c = 0x10;
  uStack_3a = 0x10;
  _cfg_38.uStack_34 = *(uint32_t *)((int)param_2 + 4);
  _cfg_38.uStack_30 = *(uint16_t *)((int)param_2 + 0x14);
  _cfg_38.uStack_2c = *(uint32_t *)(param_3 + 4);
  _cfg_38.uStack_28 = *(uint16_t *)(param_3 + 0x14);
  _cfg_38.uStack_26 = *(uint16_t *)((int)param_2 + 0x10);
  _cfg_38.uStack_24 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_38.uStack_22 = *(uint16_t *)((int)param_2 + 0x16);
  _cfg_38.uStack_20 = *(uint16_t *)((int)param_2 + 0x18);
  _cfg_38.uStack_1e = *(uint16_t *)(param_3 + 0x16);
  _cfg_38.uStack_1c = *(uint16_t *)(param_3 + 0x16);
  _cfg_38.puStack_18 = &uStack_4a;
  puVar2 = (uint32_t *)(param_1 + 0x2c);
  _cfg_38.uStack_14 = 0;
  _cfg_38.uStack_c = 0;
  eventflag_clr_flg(puVar2,1);
  iVar1 = param_1 + 4;
  build_and_send_param_struct_1050584a((int)(*(uint32_t *)(param_1 + 0x24)),(int)(0),(void *)(iVar1),(int *)(&_cfg_38.uStack_38));
  eventflag_wai_flg(puVar2,1,&_cfg_38.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),0);
  _cfg_38.uStack_34 = *(uint32_t *)((int)param_2 + 8);
  _cfg_38.uStack_30 = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x14) >> 1);
  _cfg_38.uStack_2c = *(uint32_t *)(param_3 + 8);
  _cfg_38.uStack_28 = (uint16_t)((int)(uint)*(ushort *)(param_3 + 0x14) >> 1);
  _cfg_38.uStack_26 = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x10) >> 1);
  _cfg_38.uStack_24 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_38.uStack_22 = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x16) >> 1);
  _cfg_38.uStack_20 = *(uint16_t *)((int)param_2 + 0x18);
  _cfg_38.uStack_1e = (uint16_t)((int)(uint)*(ushort *)(param_3 + 0x16) >> 1);
  _cfg_38.uStack_1c = *(uint16_t *)(param_3 + 0x16);
  eventflag_clr_flg(puVar2,1);
  build_and_send_param_struct_1050584a((int)(*(uint32_t *)(param_1 + 0x24)),(int)(0),(void *)(iVar1),(int *)(&_cfg_38.uStack_38));
  eventflag_wai_flg(puVar2,1,&_cfg_38.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),0);
  _cfg_38.uStack_34 = *(uint32_t *)((int)param_2 + 0xc);
  _cfg_38.uStack_2c = *(uint32_t *)(param_3 + 0xc);
  eventflag_clr_flg(puVar2,1);
  build_and_send_param_struct_1050584a((int)(*(uint32_t *)(param_1 + 0x24)),(int)(0),(void *)(iVar1),(int *)(&_cfg_38.uStack_38));
  eventflag_wai_flg(puVar2,1,&_cfg_38.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),0);
  return;
}
