/* @k10d compute_ratio_of_three_arrays @ 0x104eed0e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes four 16-bit ratios (param_3[i]*param_4[i])/param_2[i] and stores them in a
 *   struct.
 * summary:
 *   The function takes three arrays of unsigned shorts (param_2, param_3, param_4) and an
 *   output pointer (param_5). It calculates the element-wise product of param_3 and param_4
 *   divided by param_2 for indices 0 through 3, storing the results as signed 16-bit
 *   integers at offsets 8, 10, 12, and 14 of the output structure. It also writes 0xffff to
 *   offset 16 of the output structure. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_ratio_of_three_arrays(uint32_t param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  
  uVar1 = param_3[1];
  uVar2 = param_4[1];
  uVar3 = param_2[1];
  uVar4 = param_3[2];
  uVar5 = param_4[2];
  uVar6 = param_2[2];
  uVar7 = param_3[3];
  uVar8 = param_4[3];
  uVar9 = param_2[3];
  *(short *)(param_5 + 8) = (short)((int)((uint)*param_3 * (uint)*param_4) / (int)(uint)*param_2);
  *(short *)(param_5 + 10) = (short)((int)((uint)uVar1 * (uint)uVar2) / (int)(uint)uVar3);
  *(short *)(param_5 + 0xc) = (short)((int)((uint)uVar4 * (uint)uVar5) / (int)(uint)uVar6);
  *(short *)(param_5 + 0xe) = (short)((int)((uint)uVar7 * (uint)uVar8) / (int)(uint)uVar9);
  *(uint16_t *)(param_5 + 0x10) = 0xffff;
  return;
}
