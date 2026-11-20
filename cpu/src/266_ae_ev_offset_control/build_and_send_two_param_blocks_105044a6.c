/* @k10d build_and_send_two_param_blocks_105044a6 @ 0x105044a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs two parameter structures from input pointers and sends them via helper
 *   functions.
 * summary:
 *   The function initializes two large stack structures (_cfg_84.uStack_84 and _cfg_84.uStack_48) by
 *   copying fields from param_2 and param_3, applying conditional shifts based on the first
 *   byte of each input. It then calls build_sensor_readout_params twice with these
 *   structures, passing indices 0 and 1 respectively. It also invokes eventflag_clr_flg and
 *   eventflag_wai_flg on a pointer derived from param_1, and finally calls
 *   configure_timer_channel_state twice with indices 0 and 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_two_param_blocks_105044a6(int param_1,int *param_2,int *param_3,int param_4,uint8_t param_5)

{
  struct {
    uint32_t uStack_84;
    int iStack_80;
    uint16_t uStack_7c;
    uint16_t uStack_7a;
    uint16_t uStack_78;
    int iStack_74;
    uint16_t uStack_70;
    uint16_t uStack_6e;
    uint16_t uStack_6c;
    uint16_t uStack_6a;
    uint16_t uStack_68;
    uint16_t uStack_66;
    uint16_t uStack_64;
    uint16_t uStack_62;
    uint8_t uStack_60;
    uint8_t uStack_5f;
    uint32_t uStack_5c;
    uint8_t uStack_58;
    uint8_t uStack_57;
    uint8_t uStack_56;
    uint16_t uStack_54;
    uint16_t uStack_52;
    uint8_t uStack_50;
    uint16_t uStack_4e;
    uint16_t uStack_4c;
    uint32_t uStack_48;
    int iStack_44;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    int iStack_38;
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint8_t uStack_24;
    uint8_t uStack_23;
    uint32_t uStack_20;
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint8_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint8_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint32_t uStack_c;
  } _cfg_84;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  _cfg_84.uStack_5c = 0;
  _cfg_84.uStack_58 = 0;
  _cfg_84.uStack_57 = 0;
  _cfg_84.uStack_56 = 0;
  _cfg_84.uStack_54 = 0;
  _cfg_84.uStack_52 = 0;
  _cfg_84.uStack_50 = 0;
  _cfg_84.uStack_4e = 0;
  _cfg_84.uStack_4c = 0;
  if (param_4 == 0) {
    _cfg_84.uStack_84 = 0;
  }
  else {
    _cfg_84.uStack_84 = 3;
  }
  _cfg_84.iStack_80 = param_2[1];
  _cfg_84.uStack_7c = *(uint16_t *)(param_2 + 5);
  _cfg_84.uStack_7a = *(uint16_t *)(param_2 + 4);
  _cfg_84.uStack_78 = *(uint16_t *)((int)param_2 + 0x12);
  _cfg_84.iStack_74 = param_3[1];
  _cfg_84.uStack_70 = *(uint16_t *)(param_3 + 5);
  _cfg_84.uStack_6e = *(uint16_t *)(param_3 + 4);
  _cfg_84.uStack_6c = *(uint16_t *)((int)param_3 + 0x12);
  _cfg_84.uStack_6a = *(uint16_t *)((int)param_2 + 0x16);
  _cfg_84.uStack_68 = *(uint16_t *)(param_2 + 6);
  _cfg_84.uStack_66 = *(uint16_t *)((int)param_3 + 0x16);
  _cfg_84.uStack_64 = *(uint16_t *)(param_3 + 6);
  _cfg_84.uStack_20 = 0;
  _cfg_84.uStack_62 = 0;
  _cfg_84.uStack_1c = 0;
  _cfg_84.uStack_5f = 0;
  _cfg_84.uStack_1b = 0;
  _cfg_84.uStack_1a = 0;
  _cfg_84.uStack_18 = 0;
  _cfg_84.uStack_60 = param_5;
  _cfg_84.uStack_16 = 0;
  _cfg_84.uStack_14 = 0;
  _cfg_84.uStack_12 = 0;
  _cfg_84.uStack_10 = 0;
  if (param_4 == 0) {
    _cfg_84.uStack_48 = 0;
  }
  else {
    _cfg_84.uStack_48 = 3;
  }
  _cfg_84.iStack_44 = param_2[2];
  _cfg_84.uStack_40 = (uint16_t)((int)(uint)*(ushort *)(param_2 + 5) >> 1);
  _cfg_84.uStack_3e = (uint16_t)((int)(uint)*(ushort *)(param_2 + 4) >> 1);
  if (*param_2 == 1) {
    _cfg_84.uStack_3c = *(uint16_t *)((int)param_2 + 0x12);
  }
  else {
    _cfg_84.uStack_3c = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x12) >> 1);
  }
  _cfg_84.iStack_38 = param_3[2];
  _cfg_84.uStack_34 = (uint16_t)((int)(uint)*(ushort *)(param_3 + 5) >> 1);
  _cfg_84.uStack_32 = (uint16_t)((int)(uint)*(ushort *)(param_3 + 4) >> 1);
  if (*param_3 == 1) {
    _cfg_84.uStack_30 = *(uint16_t *)((int)param_3 + 0x12);
  }
  else {
    _cfg_84.uStack_30 = (uint16_t)((int)(uint)*(ushort *)((int)param_3 + 0x12) >> 1);
  }
  _cfg_84.uStack_2e = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x16) >> 1);
  if (*param_2 == 1) {
    _cfg_84.uStack_2c = *(uint16_t *)(param_2 + 6);
  }
  else {
    _cfg_84.uStack_2c = (uint16_t)((int)(uint)*(ushort *)(param_2 + 6) >> 1);
  }
  _cfg_84.uStack_2a = (uint16_t)((int)(uint)*(ushort *)((int)param_3 + 0x16) >> 1);
  if (*param_3 == 1) {
    _cfg_84.uStack_28 = *(uint16_t *)(param_3 + 6);
  }
  else {
    _cfg_84.uStack_28 = (uint16_t)((int)(uint)*(ushort *)(param_3 + 6) >> 1);
  }
  _cfg_84.uStack_26 = 0x80;
  _cfg_84.uStack_24 = param_5;
  puVar2 = (uint32_t *)(param_1 + 0x2c);
  _cfg_84.uStack_23 = 0;
  eventflag_clr_flg(puVar2,3);
  iVar1 = param_1 + 4;
  build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(0),(void *)(iVar1),(int *)(&_cfg_84.uStack_84));
  build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(iVar1),(int *)(&_cfg_84.uStack_48));
  eventflag_wai_flg(puVar2,2,&_cfg_84.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,2);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
  _cfg_84.iStack_44 = param_2[3];
  _cfg_84.iStack_38 = param_3[3];
  build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(iVar1),(int *)(&_cfg_84.uStack_48));
  twai_flg_obj(puVar2,3,&_cfg_84.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,3);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),0);
  configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
  return;
}
