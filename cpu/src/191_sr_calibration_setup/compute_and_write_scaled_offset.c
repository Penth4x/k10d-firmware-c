/* @k10d compute_and_write_scaled_offset @ 0x1048ec14
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Computes a scaled index based on a counter and writes it via a helper, then calls a
 *   second helper.
 * summary:
 *   The function reads several fields from a structure pointed to by param_1. It first
 *   calls 0x1048cc66 with initial values, then performs a virtual call on an object found
 *   at param_1+0x14. It then calculates a new value (uVar3) based on param_1[0x12] and
 *   param_1[0x13], applying a scaling factor if the index is within bounds. This calculated
 *   value is passed to 0x1048cc66 again. Finally, it calls
 *   call_helper_if_field_nonzero_1048d4b2 with the value at param_1+0x16 and the constant
 *   1. The logic suggests updating a position or offset within a range defined by
 *   param_1[0x13].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_write_scaled_offset(ushort *param_1)

{
  ushort uVar1;
  uint8_t uVar2;
  uint uVar3;
  uint32_t uVar4;
  short sVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_18 [3];
  uint8_t uStack_15;
  uint8_t uStack_11;
  
  puVar7 = auStack_18;
  uVar1 = param_1[0x13];
  uStack_15 = *(uint8_t *)(param_1 + 0xc);
  uStack_11 = *(uint8_t *)((int)param_1 + 0x19);
  (*(code *)0x1048cc66/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_1 + 2,*param_1,param_1[1]);
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x20);
  (((vtbl_entry*)(iVar6))[2].fn)(*(int *)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar6))[2].adj);
  uVar3 = (uint)param_1[0x12];
  if (uVar3 == 0) {
    uVar4 = *(uint32_t *)(param_1 + 0x16);
    sVar5 = param_1[1] + 0x14;
    uVar3 = (uint)*param_1;
  }
  else if (uVar3 == param_1[0x13] - 1) {
    uVar4 = *(uint32_t *)(param_1 + 0x16);
    sVar5 = param_1[1] + 0x14;
    uVar3 = (uint)(ushort)(*param_1 + 0xe8);
  }
  else {
    if ((uVar3 == 0) || ((int)(param_1[0x13] - 1) <= (int)uVar3)) goto LAB_1048ed26;
    uVar4 = *(uint32_t *)(param_1 + 0x16);
    uVar3 = ((0xf0 / (int)(uVar1 - 1) & 0xffffU) * uVar3 + (uint)*param_1) - 4 & 0xffff;
    sVar5 = param_1[1] + 0x14;
  }
  uVar2 = *(uint8_t *)((int)param_1 + 0x19);
  puVar7[3] = *(uint8_t *)(param_1 + 0xc);
  puVar7[7] = uVar2;
  (*(code *)0x1048cc66/*ROM*/)(uVar4,param_1 + 2,uVar3,sVar5);
LAB_1048ed26:
  call_helper_if_field_nonzero_1048d4b2(*(uint32_t *)(param_1 + 0x16),1);
  return;
}
