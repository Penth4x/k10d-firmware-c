/* @k10d build_and_send_param_struct_10505a10 @ 0x10505a10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructs a large stack-based parameter structure from input fields and passes it to a
 *   helper function.
 * summary:
 *   The function calculates a size offset (0x20 or 0x38) based on param_2 and calls
 *   set_pointer_and_clear_flag with a pointer to param_1 plus that offset. It then
 *   populates a large local structure (starting at uStack_80) with values derived from
 *   param_4, including arithmetic operations on 16-bit fields (likely dimensions or
 *   offsets) and direct copies of other fields. Finally, it calls
 *   configure_sensor_readout_params_10505030 with param_1, param_2, param_3, and a pointer
 *   to this constructed structure. The specific camera subsystem is not identifiable from
 *   the mechanical operations alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_param_struct_10505a10(int param_1,int param_2,void *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  uintptr_t sp;
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
  
  if (param_2 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 0x38;
  }
  set_pointer_and_clear_flag((int *)(iVar2 + param_1),param_3);
  if (*param_4 == 0) {
    uStack_80 = 4;
  }
  else {
    uStack_80 = 5;
  }
  uStack_7c = 0;
  uStack_7a = *(uint16_t *)(param_4 + 2);
  uStack_78 = 0;
  uStack_76 = *(uint16_t *)(param_4 + 4);
  uStack_74 = 0;
  uStack_6c = 0;
  iStack_70 = (uint)*(ushort *)(param_4 + 2) * (uint)*(ushort *)(param_4 + 6) + param_4[1] +
              (uint)*(ushort *)((int)param_4 + 0x16);
  uStack_68 = 0;
  uStack_64 = 0;
  iStack_60 = (uint)*(ushort *)(param_4 + 4) * (uint)*(ushort *)(param_4 + 7) + param_4[3] +
              (uint)*(ushort *)((int)param_4 + 0x1a);
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x100;
  uStack_4e = 0x100;
  if (((*param_4 == 0) &&
      (uStack_50 = 0x100, uStack_4e = 0x100,
      *(short *)((int)param_4 + 0x12) == *(short *)(param_4 + 2))) &&
     (*(short *)((int)param_4 + 0x12) == *(short *)(param_4 + 4))) {
    uStack_50 = 0;
    uStack_4e = 0;
  }
  uStack_4c = *(uint16_t *)((int)param_4 + 0x12);
  uStack_4a = *(uint16_t *)(param_4 + 5);
  uStack_48 = 0x100;
  uStack_46 = 0x100;
  uStack_44 = *(uint8_t *)(param_4 + 0xc);
  uStack_43 = 0;
  uStack_42 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  iStack_38 = param_4[0xd];
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uVar1 = *(short *)(param_4 + 4) * *(short *)(param_4 + 7) + (short)param_4[3] +
          *(short *)((int)param_4 + 0x1a);
  sStack_28 = uVar1 - (uVar1 & 0xfff0);
  uStack_26 = *(uint16_t *)(param_4 + 9);
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = *(uint16_t *)((int)param_4 + 0x26);
  uStack_1c = *(uint16_t *)(param_4 + 10);
  uStack_1a = *(uint16_t *)((int)param_4 + 0x2a);
  uStack_18 = *(uint16_t *)(param_4 + 0xb);
  uStack_16 = *(uint16_t *)((int)param_4 + 0x2e);
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  iStack_c = param_4[8];
  configure_sensor_readout_params_10505030(param_1,param_2,param_3,&uStack_80);
  return;
}
