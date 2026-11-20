/* @k10d build_and_send_structured_packet @ 0x10505be0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs a 0x80-byte packet from a source struct and sends it via a helper function.
 * summary:
 *   The function initializes a local stack buffer with a command ID derived from *param_4
 *   (mapping 0-17 to 8-25). It populates the buffer with fields from param_4, including
 *   calculated offsets and copied values. It calls set_pointer_and_clear_flag to initialize
 *   part of the structure at param_1 + offset, then calls
 *   configure_sensor_readout_params_10505030 with the base address, size/type, context, and
 *   the constructed buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_structured_packet(int param_1,int param_2,void *param_3,uint32_t *param_4)

{
  struct {
    uint32_t uStack_80;
    uint8_t uStack_7c;
    uint16_t uStack_7a;
    uint16_t uStack_78;
    uint16_t uStack_76;
    uint16_t uStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_54;
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
    uint32_t uStack_38;
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
  ushort uVar1;
  int iVar2;
  uintptr_t sp;
  if (param_2 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 0x38;
  }
  set_pointer_and_clear_flag((int *)(iVar2 + param_1),param_3);
  _cfg_80.uStack_80 = 2;
  switch(*param_4) {
  case 0:
    _cfg_80.uStack_80 = 8;
    break;
  case 1:
    _cfg_80.uStack_80 = 9;
    break;
  case 2:
    _cfg_80.uStack_80 = 10;
    break;
  case 3:
    _cfg_80.uStack_80 = 0xb;
    break;
  case 4:
    _cfg_80.uStack_80 = 0xc;
    break;
  case 5:
    _cfg_80.uStack_80 = 0xd;
    break;
  case 6:
    _cfg_80.uStack_80 = 0xe;
    break;
  case 7:
    _cfg_80.uStack_80 = 0xf;
    break;
  case 8:
    _cfg_80.uStack_80 = 0x10;
    break;
  case 9:
    _cfg_80.uStack_80 = 0x11;
    break;
  case 10:
    _cfg_80.uStack_80 = 0x12;
    break;
  case 0xb:
    _cfg_80.uStack_80 = 0x13;
    break;
  case 0xc:
    _cfg_80.uStack_80 = 0x14;
    break;
  case 0xd:
    _cfg_80.uStack_80 = 0x15;
    break;
  case 0xe:
    _cfg_80.uStack_80 = 0x16;
    break;
  case 0xf:
    _cfg_80.uStack_80 = 0x17;
    break;
  case 0x10:
    _cfg_80.uStack_80 = 0x18;
    break;
  case 0x11:
    _cfg_80.uStack_80 = 0x19;
  }
  _cfg_80.uStack_7c = 0;
  _cfg_80.uStack_7a = *(uint16_t *)(param_4 + 9);
  _cfg_80.uStack_78 = *(uint16_t *)((int)param_4 + 0x26);
  _cfg_80.uStack_76 = *(uint16_t *)(param_4 + 10);
  _cfg_80.uStack_74 = *(uint16_t *)((int)param_4 + 0x2a);
  _cfg_80.iStack_70 = (uint)*(ushort *)(param_4 + 9) * (uint)*(ushort *)((int)param_4 + 0x32) + param_4[1] +
              (uint)*(ushort *)(param_4 + 0xc);
  _cfg_80.iStack_6c = (uint)*(ushort *)(param_4 + 9) * (uint)*(ushort *)((int)param_4 + 0x32) + param_4[2] +
              (uint)*(ushort *)(param_4 + 0xc);
  _cfg_80.iStack_68 = (uint)*(ushort *)(param_4 + 9) * (uint)*(ushort *)((int)param_4 + 0x32) + param_4[3] +
              (uint)*(ushort *)(param_4 + 0xc);
  _cfg_80.iStack_64 = (uint)*(ushort *)(param_4 + 9) * (uint)*(ushort *)((int)param_4 + 0x32) + param_4[4] +
              (uint)*(ushort *)(param_4 + 0xc);
  _cfg_80.iStack_60 = (uint)*(ushort *)(param_4 + 10) * (uint)*(ushort *)((int)param_4 + 0x36) + param_4[5]
              + (uint)*(ushort *)(param_4 + 0xd);
  _cfg_80.iStack_5c = (uint)*(ushort *)(param_4 + 10) * (uint)*(ushort *)((int)param_4 + 0x36) + param_4[6]
              + (uint)*(ushort *)(param_4 + 0xd);
  _cfg_80.iStack_58 = (uint)*(ushort *)(param_4 + 10) * (uint)*(ushort *)((int)param_4 + 0x36) + param_4[7]
              + (uint)*(ushort *)(param_4 + 0xd);
  _cfg_80.uStack_50 = 0;
  _cfg_80.iStack_54 = (uint)*(ushort *)(param_4 + 10) * (uint)*(ushort *)((int)param_4 + 0x36) + param_4[8]
              + (uint)*(ushort *)(param_4 + 0xd);
  _cfg_80.uStack_4e = 0;
  _cfg_80.uStack_4c = *(uint16_t *)(param_4 + 0xb);
  _cfg_80.uStack_4a = *(uint16_t *)((int)param_4 + 0x2e);
  _cfg_80.uStack_48 = 0x100;
  _cfg_80.uStack_46 = 0x100;
  _cfg_80.uStack_44 = *(uint8_t *)(param_4 + 0x13);
  _cfg_80.uStack_43 = *(uint8_t *)((int)param_4 + 0x4d);
  _cfg_80.uStack_42 = *(uint8_t *)((int)param_4 + 0x4e);
  _cfg_80.uStack_41 = *(uint8_t *)((int)param_4 + 0x4f);
  _cfg_80.uStack_40 = *(uint16_t *)(param_4 + 0x14);
  _cfg_80.uStack_3e = *(uint16_t *)((int)param_4 + 0x52);
  _cfg_80.uStack_3c = *(uint16_t *)(param_4 + 0x15);
  _cfg_80.uStack_3a = *(uint16_t *)((int)param_4 + 0x56);
  _cfg_80.uStack_38 = param_4[0x16];
  _cfg_80.uStack_34 = param_4[0x17];
  _cfg_80.uStack_30 = param_4[0x18];
  _cfg_80.uStack_2c = param_4[0x19];
  uVar1 = *(short *)(param_4 + 10) * *(short *)((int)param_4 + 0x36) + (short)param_4[5] +
          *(short *)(param_4 + 0xd);
  _cfg_80.sStack_28 = uVar1 - (uVar1 & 0xfff0);
  _cfg_80.uStack_26 = *(uint16_t *)(param_4 + 0xe);
  _cfg_80.uStack_24 = *(uint16_t *)((int)param_4 + 0x3a);
  _cfg_80.uStack_22 = *(uint16_t *)(param_4 + 0xf);
  _cfg_80.uStack_20 = *(uint16_t *)((int)param_4 + 0x3e);
  _cfg_80.uStack_1e = 0;
  _cfg_80.uStack_1c = 0;
  _cfg_80.uStack_1a = 0;
  _cfg_80.uStack_18 = 0;
  _cfg_80.uStack_16 = 0;
  _cfg_80.uStack_14 = *(uint16_t *)(param_4 + 0x10);
  _cfg_80.uStack_12 = *(uint16_t *)((int)param_4 + 0x42);
  _cfg_80.uStack_10 = *(uint16_t *)(param_4 + 0x11);
  _cfg_80.uStack_e = *(uint16_t *)((int)param_4 + 0x46);
  _cfg_80.uStack_c = param_4[0x12];
  configure_sensor_readout_params_10505030(param_1,param_2,param_3,&_cfg_80.uStack_80);
  return;
}
