/* @k10d build_and_send_param_struct_1050584a @ 0x1050584a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs a large stack-allocated structure from input parameters and passes it to a
 *   helper function.
 * summary:
 *   The function calculates an offset based on param_2 and calls set_pointer_and_clear_flag
 *   to initialize a header at that location. It then populates a stack structure with
 *   values derived from param_4, including arithmetic operations on short integers and
 *   direct copies. Finally, it passes this structure to
 *   configure_sensor_readout_params_10505030 along with the original parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_param_struct_1050584a(int param_1,int param_2,void *param_3,int *param_4)

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
    int iStack_c;
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
  if (*param_4 == 0) {
    _cfg_80.uStack_80 = 3;
  }
  else {
    _cfg_80.uStack_80 = 6;
  }
  _cfg_80.uStack_7c = 0;
  _cfg_80.uStack_7a = *(uint16_t *)(param_4 + 2);
  _cfg_80.uStack_78 = 0;
  _cfg_80.uStack_76 = *(uint16_t *)(param_4 + 4);
  _cfg_80.uStack_74 = 0;
  _cfg_80.uStack_6c = 0;
  _cfg_80.iStack_70 = (uint)*(ushort *)(param_4 + 2) * (uint)*(ushort *)(param_4 + 6) + param_4[1] +
              (uint)*(ushort *)((int)param_4 + 0x16);
  _cfg_80.uStack_68 = 0;
  _cfg_80.uStack_64 = 0;
  _cfg_80.uStack_5c = 0;
  _cfg_80.iStack_60 = (uint)*(ushort *)(param_4 + 4) * (uint)*(ushort *)(param_4 + 7) + param_4[3] +
              (uint)*(ushort *)((int)param_4 + 0x1a);
  _cfg_80.uStack_58 = 0;
  _cfg_80.uStack_54 = 0;
  if (*param_4 == 0) {
    if ((*(short *)((int)param_4 + 0x12) == *(short *)(param_4 + 2)) &&
       (*(short *)((int)param_4 + 0x12) == *(short *)(param_4 + 4))) {
      _cfg_80.uStack_50 = 0;
      _cfg_80.uStack_4e = 0;
    }
    else {
      _cfg_80.uStack_50 = 0x100;
      _cfg_80.uStack_4e = 0x100;
    }
  }
  else {
    _cfg_80.uStack_50 = 0x180;
    _cfg_80.uStack_4e = 0x180;
  }
  _cfg_80.uStack_4c = *(uint16_t *)((int)param_4 + 0x12);
  _cfg_80.uStack_4a = *(uint16_t *)(param_4 + 5);
  _cfg_80.uStack_48 = 0x100;
  _cfg_80.uStack_46 = 0x100;
  _cfg_80.uStack_44 = *(uint8_t *)((int)param_4 + 0x26);
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
  uVar1 = *(short *)(param_4 + 4) * *(short *)(param_4 + 7) + (short)param_4[3] +
          *(short *)((int)param_4 + 0x1a);
  _cfg_80.sStack_28 = uVar1 - (uVar1 & 0xfff0);
  _cfg_80.uStack_26 = *(uint16_t *)(param_4 + 9);
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
  _cfg_80.iStack_c = param_4[8];
  configure_sensor_readout_params_10505030(param_1,param_2,param_3,&_cfg_80.uStack_80);
  return;
}
