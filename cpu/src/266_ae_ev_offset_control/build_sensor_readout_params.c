/* @k10d build_sensor_readout_params @ 0x10505428
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Computes sensor readout geometry (start offsets, dimensions, stride) from a config
 *   struct and passes it to a readout driver.
 * summary:
 *   The function branches on param_2 to select a base offset (0x20 or 0x38) and a flag bit
 *   (1 or 2) for a companion chip command via update_camera_state_flags. It then parses
 *   param_4 to calculate horizontal and vertical start positions, dimensions, and stride
 *   values, applying clamping logic based on a mode flag (iVar4==3). The resulting
 *   parameters are packed into a stack structure and passed to
 *   configure_sensor_readout_params_10505030, which likely initiates the sensor readout or
 *   configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_sensor_readout_params(int param_1,int param_2,void *param_3,int *param_4)

{
  struct {
    uint32_t uStack_80;
    uint8_t uStack_7c;
    uint16_t uStack_7a;
    uint16_t uStack_78;
    uint16_t uStack_76;
    uint16_t uStack_74;
    int iStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    int iStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint16_t uStack_50;
    uint16_t uStack_4e;
    uint16_t uStack_4c;
    uint16_t uStack_4a;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint8_t uStack_44;
    uint8_t uStack_43;
    uint8_t uStack_42;
    uint8_t uStack_41;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    uint16_t uStack_3a;
    int iStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    short sStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_80;
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uintptr_t sp;
  uint uVar7;
  uint uStack_90;
  uint uStack_8c;
  if (param_2 == 0) {
    set_pointer_and_clear_flag((int *)(param_1 + 0x20),param_3);
    pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
    uVar6 = read_bounded_array_element_1051d696(pvVar5,4);
    uVar6 = uVar6 | 1;
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 0x38),param_3);
    pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
    uVar6 = read_bounded_array_element_1051d696(pvVar5,4);
    uVar6 = uVar6 | 2;
  }
  update_camera_state_flags(pvVar5,4,uVar6);
  iVar4 = *param_4;
  bVar1 = false;
  if (iVar4 == 0) {
    _cfg_80.uStack_80 = 2;
  }
  else if (iVar4 == 1) {
    _cfg_80.uStack_80 = 0;
  }
  else if (iVar4 == 2) {
    _cfg_80.uStack_80 = 1;
  }
  else if (iVar4 == 3) {
    _cfg_80.uStack_80 = 7;
    bVar1 = true;
  }
  else {
    _cfg_80.uStack_80 = 2;
  }
  _cfg_80.uStack_7c = 0;
  _cfg_80.uStack_7a = *(uint16_t *)(param_4 + 2);
  _cfg_80.uStack_78 = 0;
  _cfg_80.uStack_76 = *(uint16_t *)(param_4 + 5);
  _cfg_80.uStack_74 = 0;
  _cfg_80.uStack_6c = 0;
  _cfg_80.iStack_70 = (uint)*(ushort *)(param_4 + 2) * (uint)*(ushort *)(param_4 + 7) + param_4[1] +
              (uint)*(ushort *)((int)param_4 + 0x1a);
  _cfg_80.uStack_68 = 0;
  _cfg_80.uStack_64 = 0;
  _cfg_80.uStack_5c = 0;
  _cfg_80.uStack_58 = 0;
  _cfg_80.iStack_60 = (uint)*(ushort *)(param_4 + 5) * (uint)*(ushort *)(param_4 + 8) + param_4[4] +
              (uint)*(ushort *)((int)param_4 + 0x1e);
  _cfg_80.uStack_54 = 0;
  if (bVar1) {
    uStack_90 = 0x100;
    uStack_8c = 0x100;
  }
  else {
    uStack_90 = 0;
    uStack_8c = 0;
  }
  uVar6 = (uint)*(ushort *)(param_4 + 2) * (uint)*(ushort *)(param_4 + 7) + param_4[1] +
          (uint)*(ushort *)((int)param_4 + 0x1a);
  uVar6 = uVar6 - (uVar6 & 0xfffffff0);
  if (uVar6 != 0) {
    uStack_90 = (uVar6 & 0xff) << 8;
  }
  if (*(char *)(param_4 + 0xb) != '\0') {
    uStack_90 = uStack_90 + 0x80;
  }
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    uStack_8c = uStack_8c + 0x80;
  }
  if (bVar1) {
    if (uStack_8c < 0x100) {
      uStack_8c = 0x100;
    }
    else if (0x1ff < uStack_8c) {
      uStack_8c = 0x1ff;
    }
    if (uStack_90 < 0x100) {
      uStack_90 = 0x100;
    }
    else if (0xfff < uStack_90) {
      uStack_90 = 0xfff;
    }
  }
  else {
    if (0xff < uStack_8c) {
      uStack_8c = 0xff;
    }
    if (0xfff < uStack_90) {
      uStack_90 = 0xfff;
    }
  }
  _cfg_80.uStack_50 = (uint16_t)uStack_90;
  _cfg_80.uStack_4e = (uint16_t)uStack_8c;
  _cfg_80.uStack_4c = *(uint16_t *)((int)param_4 + 0x16);
  _cfg_80.uStack_4a = *(uint16_t *)(param_4 + 6);
  uVar6 = ((uint)*(ushort *)((int)param_4 + 10) << 8) / (uint)*(ushort *)((int)param_4 + 0x16);
  uVar7 = ((uint)*(ushort *)(param_4 + 3) << 8) / (uint)*(ushort *)(param_4 + 6);
  if (bVar1) {
    iVar4 = 0x180;
  }
  else {
    iVar4 = 0;
  }
  while (uVar6 = uVar6 & 0xffff,
        (uint)*(ushort *)((int)param_4 + 10) <=
        uVar6 * (*(ushort *)((int)param_4 + 0x16) - 1) + uStack_90 + iVar4 >> 8) {
    uVar6 = uVar6 - 1;
  }
  while (uVar7 = uVar7 & 0xffff,
        (uint)*(ushort *)(param_4 + 3) <=
        uVar7 * (*(ushort *)(param_4 + 6) - 1) + uStack_8c + iVar4 >> 8) {
    uVar7 = uVar7 - 1;
  }
  uVar3 = uVar6;
  if ((*(char *)(param_4 + 9) != '\0') && (uVar3 = uVar7, uVar6 < uVar7)) {
    uVar7 = uVar6;
    uVar3 = uVar6;
  }
  _cfg_80.uStack_48 = (uint16_t)uVar3;
  _cfg_80.uStack_46 = (uint16_t)uVar7;
  if (*(char *)((int)param_4 + 0x2e) == '\0') {
    *(uint16_t *)(param_4 + 0xc) = _cfg_80.uStack_50;
    *(uint16_t *)((int)param_4 + 0x32) = _cfg_80.uStack_4e;
  }
  else {
    _cfg_80.uStack_50 = *(uint16_t *)(param_4 + 0xc);
    _cfg_80.uStack_4e = *(uint16_t *)((int)param_4 + 0x32);
  }
  if (*(char *)(param_4 + 0xd) == '\0') {
    *(uint16_t *)((int)param_4 + 0x36) = _cfg_80.uStack_48;
    *(uint16_t *)(param_4 + 0xe) = _cfg_80.uStack_46;
  }
  else {
    _cfg_80.uStack_48 = *(uint16_t *)((int)param_4 + 0x36);
    _cfg_80.uStack_46 = *(uint16_t *)(param_4 + 0xe);
  }
  _cfg_80.uStack_44 = *(uint8_t *)((int)param_4 + 0x25);
  _cfg_80.uStack_43 = 0;
  _cfg_80.uStack_42 = 0;
  _cfg_80.uStack_41 = 0;
  _cfg_80.uStack_40 = 0;
  _cfg_80.uStack_3e = 0;
  _cfg_80.uStack_3c = 0;
  _cfg_80.uStack_3a = 0;
  _cfg_80.iStack_38 = param_4[10];
  _cfg_80.uStack_34 = 0;
  _cfg_80.uStack_30 = 0;
  _cfg_80.uStack_2c = 0;
  uVar2 = *(short *)(param_4 + 5) * *(short *)(param_4 + 8) + (short)param_4[4] +
          *(short *)((int)param_4 + 0x1e);
  _cfg_80.sStack_28 = uVar2 - (uVar2 & 0xfff0);
  _cfg_80.uStack_26 = *(uint16_t *)((int)param_4 + 0x22);
  _cfg_80.uStack_24 = 0;
  _cfg_80.uStack_22 = 0;
  _cfg_80.uStack_20 = 0;
  _cfg_80.uStack_1e = 0;
  _cfg_80.uStack_1c = 0;
  _cfg_80.uStack_1a = 0;
  _cfg_80.uStack_18 = 0;
  _cfg_80.uStack_16 = 0;
  _cfg_80.uStack_14 = 0;
  _cfg_80.uStack_12 = 0;
  _cfg_80.uStack_10 = 0;
  _cfg_80.uStack_e = 0;
  _cfg_80.uStack_c = 0;
  configure_sensor_readout_params_10505030(param_1,param_2,param_3,&_cfg_80.uStack_80);
  return;
}
