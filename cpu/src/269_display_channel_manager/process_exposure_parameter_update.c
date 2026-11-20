/* @k10d process_exposure_parameter_update @ 0x1050abea
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Updates exposure-related parameters and triggers a hardware sequence via helper calls.
 * summary:
 *   The function reads a block of 16-bit parameters from param_2, calls
 *   compute_clipped_viewport to process them, and writes results back to param_2. It then
 *   constructs a local structure and invokes a sequence of functions (eventflag_clr_flg,
 *   build_sensor_readout_params, eventflag_wai_flg, configure_timer_channel_state) that
 *   appear to control a hardware state machine or communication channel. The logic includes
 *   conditional bit-shifting of parameters based on flags in the input structure,
 *   suggesting adjustment of exposure values or timing parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050ac84) overlaps instruction at (ram,0x1050ac82)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_exposure_parameter_update(int param_1,int *param_2)

{
  struct {
    uint uStack_90;
    uint uStack_8c;
    int iStack_88;
    int iStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
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
  } _cfg_90;
  ushort uVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int *piVar4;
  int *piVar5;
  uintptr_t sp;
  bool bVar6;
  bool bVar7;
  int iStack_a4;
  piVar5 = (int *)*param_2;
  piVar4 = (int *)param_2[1];
  _cfg_90.iStack_70 = 0;
  _cfg_90.iStack_6c = 0;
  _cfg_90.iStack_68 = 0;
  _cfg_90.iStack_64 = 0;
  _cfg_90.iStack_60 = 0;
  _cfg_90.iStack_5c = 0;
  _cfg_90.uStack_58 = 0;
  _cfg_90.uStack_54 = 0;
  _cfg_90.uStack_50 = 0;
  _cfg_90.uStack_4c = 0;
  _cfg_90.uStack_90 = (uint)*(ushort *)(param_2 + 2);
  _cfg_90.uStack_8c = (uint)*(ushort *)((int)param_2 + 10);
  _cfg_90.iStack_88 = (uint)*(ushort *)(param_2 + 3) << 8;
  _cfg_90.iStack_84 = (uint)*(ushort *)((int)param_2 + 0xe) << 8;
  _cfg_90.uStack_80 = (uint)*(ushort *)(piVar4 + 4);
  _cfg_90.uStack_7c = (uint)*(ushort *)((int)piVar4 + 0x12);
  _cfg_90.uStack_78 = (uint)*(ushort *)(piVar5 + 5);
  _cfg_90.uStack_74 = (uint)*(ushort *)((int)piVar5 + 0x12);
  iStack_a4 = compute_clipped_viewport(param_1,&_cfg_90.uStack_90,&_cfg_90.iStack_70);
  if (iStack_a4 != 0) {
    param_2[5] = _cfg_90.iStack_70;
    param_2[6] = _cfg_90.iStack_6c;
    param_2[7] = _cfg_90.iStack_68;
    param_2[8] = _cfg_90.iStack_64;
    param_2[9] = _cfg_90.iStack_60;
    param_2[10] = _cfg_90.iStack_5c;
    _cfg_90.uStack_24 = 0;
    _cfg_90.uStack_23 = 0;
    _cfg_90.uStack_20 = 0;
    _cfg_90.uStack_1c = 0;
    _cfg_90.uStack_1b = 0;
    _cfg_90.uStack_48 = 0;
    if (*(char *)((int)param_2 + 0x11) != '\0') {
      _cfg_90.uStack_48 = 3;
    }
    _cfg_90.iStack_44 = piVar5[1];
    _cfg_90.uStack_40 = *(uint16_t *)(piVar5 + 5);
    _cfg_90.uStack_3e = *(uint16_t *)(piVar5 + 4);
    _cfg_90.uStack_3c = *(uint16_t *)((int)piVar5 + 0x12);
    _cfg_90.iStack_38 = piVar4[1];
    _cfg_90.uStack_34 = *(uint16_t *)(piVar4 + 5);
    _cfg_90.uStack_32 = *(uint16_t *)(piVar4 + 4);
    _cfg_90.uStack_30 = *(uint16_t *)((int)piVar4 + 0x12);
    _cfg_90.uStack_2e = (uint16_t)_cfg_90.uStack_58;
    _cfg_90.uStack_2c = (uint16_t)_cfg_90.uStack_54;
    _cfg_90.uStack_2a = *(uint16_t *)((int)piVar4 + 0x16);
    _cfg_90.uStack_28 = *(uint16_t *)(piVar4 + 6);
    _cfg_90.uStack_26 = *(uint16_t *)(param_2 + 0xb);
    _cfg_90.uStack_1a = 1;
    _cfg_90.uStack_14 = 1;
    _cfg_90.uStack_18 = (uint16_t)_cfg_90.uStack_50;
    _cfg_90.uStack_16 = (uint16_t)_cfg_90.uStack_4c;
    _cfg_90.uStack_12 = *(uint16_t *)(param_2 + 2);
    _cfg_90.uStack_10 = *(uint16_t *)((int)param_2 + 10);
    puVar3 = (uint32_t *)(param_1 + 0x28);
    eventflag_clr_flg(puVar3,1);
    build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(0),(void *)(param_1 + 4),(int *)(&_cfg_90.uStack_48));
    if (*(char *)(param_2 + 4) != '\0') {
      bVar6 = *piVar5 == 2;
      bVar7 = *piVar4 != 2;
      _cfg_90.uStack_90 = (uint)*(ushort *)(param_2 + 2);
      if ((bVar6) || (bVar7)) {
        _cfg_90.uStack_8c = (uint)*(ushort *)((int)param_2 + 10);
      }
      else {
        _cfg_90.uStack_8c = (uint)*(ushort *)((int)param_2 + 10) << 1;
      }
      _cfg_90.iStack_88 = (uint)*(ushort *)(param_2 + 3) << 7;
      _cfg_90.iStack_84 = (uint)*(ushort *)((int)param_2 + 0xe) << 8;
      if (bVar6) {
        _cfg_90.iStack_84 = (uint)*(ushort *)((int)param_2 + 0xe) << 7;
      }
      _cfg_90.uStack_80 = (int)(uint)*(ushort *)(piVar4 + 4) >> 1;
      if (bVar7) {
        _cfg_90.uStack_7c = (uint)*(ushort *)((int)piVar4 + 0x12);
      }
      else {
        _cfg_90.uStack_7c = (int)(uint)*(ushort *)((int)piVar4 + 0x12) >> 1;
      }
      _cfg_90.uStack_78 = (uint)(*(ushort *)(piVar5 + 5) >> 1);
      uVar1 = *(ushort *)((int)piVar5 + 0x12);
      if (bVar6) {
        uVar1 = uVar1 >> 1;
      }
      _cfg_90.uStack_74 = (uint)uVar1;
      iStack_a4 = compute_clipped_viewport(param_1,&_cfg_90.uStack_90,&_cfg_90.iStack_70);
      if (iStack_a4 != 0) {
        _cfg_90.iStack_44 = piVar5[2];
        _cfg_90.uStack_40 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 5) >> 1);
        _cfg_90.uStack_3e = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 4) >> 1);
        _cfg_90.uStack_3c = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x12) >> 1);
        _cfg_90.iStack_38 = piVar4[2];
        _cfg_90.uStack_34 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 5) >> 1);
        _cfg_90.uStack_32 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 4) >> 1);
        if (bVar7) {
          _cfg_90.uStack_30 = *(uint16_t *)((int)piVar4 + 0x12);
        }
        else {
          _cfg_90.uStack_30 = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x12) >> 1);
        }
        _cfg_90.uStack_2e = (uint16_t)_cfg_90.uStack_58;
        _cfg_90.uStack_2c = (uint16_t)_cfg_90.uStack_54;
        _cfg_90.uStack_2a = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x16) >> 1);
        if (bVar7) {
          _cfg_90.uStack_28 = *(uint16_t *)(piVar4 + 6);
        }
        else {
          _cfg_90.uStack_28 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 6) >> 1);
        }
        _cfg_90.uStack_26 = *(uint16_t *)((int)param_2 + 0x2e);
        _cfg_90.uStack_1a = 1;
        _cfg_90.uStack_18 = (uint16_t)_cfg_90.uStack_50;
        _cfg_90.uStack_14 = 1;
        _cfg_90.uStack_16 = (uint16_t)_cfg_90.uStack_4c;
        _cfg_90.uStack_12 = (uint16_t)_cfg_90.uStack_90;
        _cfg_90.uStack_10 = (uint16_t)_cfg_90.uStack_8c;
        puVar2 = (uint32_t *)(param_1 + 0x28);
        eventflag_clr_flg(puVar2,2);
        build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(param_1 + 4),(int *)(&_cfg_90.uStack_48));
        eventflag_wai_flg(puVar2,2,&_cfg_90.uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,2);
        configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
        _cfg_90.iStack_44 = piVar5[3];
        _cfg_90.iStack_38 = piVar4[3];
        _cfg_90.uStack_26 = *(uint16_t *)(param_2 + 0xc);
        eventflag_clr_flg(puVar2,2);
        build_sensor_readout_params((int)(*(uint32_t *)(param_1 + 0x24)),(int)(1),(void *)(param_1 + 4),(int *)(&_cfg_90.uStack_48));
        eventflag_wai_flg(puVar2,2,&_cfg_90.uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,2);
        configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),1);
      }
    }
    eventflag_wai_flg(puVar3,1,&_cfg_90.uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,1);
    configure_timer_channel_state(*(uint32_t *)(param_1 + 0x24),0);
  }
  return iStack_a4;
}
