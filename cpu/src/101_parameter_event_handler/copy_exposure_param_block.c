/* @k10d copy_exposure_param_block @ 0x1042630a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Copies a 0x54-byte exposure parameter structure from param_2 to param_3, adjusting
 *   field offsets based on a mode index.
 * summary:
 *   The function reads a 4-byte mode index from param_1+0x28 and uses it to select one of
 *   four offset patterns for copying fields from param_2 to param_3. It calls
 *   align_down_to_16_bytes twice to compute values for fields at param_3+0x18 and
 *   param_3+0x1c, passing sums of fields from param_2. The remaining fields are copied
 *   directly with offsets that vary by mode (0x5e or 0x66 base for a trailing byte). The
 *   final section copies a fixed set of fields from param_2 to param_3 regardless of mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_exposure_param_block(int param_1,uint16_t *param_2,uint8_t *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    *(uint32_t *)(param_3 + 0xc) = *(uint32_t *)(param_2 + 2);
    *(uint32_t *)(param_3 + 0x10) = *(uint32_t *)(param_2 + 4);
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18));
    *(uint32_t *)(param_3 + 0x18) = uVar2;
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1a));
    *(uint32_t *)(param_3 + 0x1c) = uVar2;
    *(uint32_t *)(param_3 + 0x20) = *(uint32_t *)(param_2 + 0x24);
    *(uint32_t *)(param_3 + 4) = *(uint32_t *)(param_2 + 0x20);
    *(uint16_t *)(param_3 + 0x24) = param_2[0x2c];
    *(uint16_t *)(param_3 + 0x26) = param_2[0x2d];
    *(uint16_t *)(param_3 + 0x28) = param_2[0x2e];
    iVar1 = 0x5e;
  }
  else if (iVar1 == 1) {
    *(uint32_t *)(param_3 + 0xc) = *(uint32_t *)(param_2 + 6);
    *(uint32_t *)(param_3 + 0x10) = *(uint32_t *)(param_2 + 8);
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1c));
    *(uint32_t *)(param_3 + 0x18) = uVar2;
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x1e));
    *(uint32_t *)(param_3 + 0x1c) = uVar2;
    *(uint32_t *)(param_3 + 0x20) = *(uint32_t *)(param_2 + 0x26);
    *(uint32_t *)(param_3 + 4) = *(uint32_t *)(param_2 + 0x22);
    *(uint16_t *)(param_3 + 0x24) = param_2[0x2c];
    *(uint16_t *)(param_3 + 0x26) = param_2[0x2d];
    *(uint16_t *)(param_3 + 0x28) = param_2[0x2e];
    iVar1 = 0x5e;
  }
  else if (iVar1 == 2) {
    *(uint32_t *)(param_3 + 0xc) = *(uint32_t *)(param_2 + 10);
    *(uint32_t *)(param_3 + 0x10) = *(uint32_t *)(param_2 + 0xc);
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x16) + *(int *)(param_2 + 0x18));
    *(uint32_t *)(param_3 + 0x18) = uVar2;
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x16) + *(int *)(param_2 + 0x1a));
    *(uint32_t *)(param_3 + 0x1c) = uVar2;
    *(uint32_t *)(param_3 + 0x20) = *(uint32_t *)(param_2 + 0x28);
    *(uint32_t *)(param_3 + 4) = *(uint32_t *)(param_2 + 0x20);
    *(uint16_t *)(param_3 + 0x24) = param_2[0x30];
    *(uint16_t *)(param_3 + 0x26) = param_2[0x31];
    *(uint16_t *)(param_3 + 0x28) = param_2[0x32];
    iVar1 = 0x66;
  }
  else {
    if (iVar1 != 3) goto code_r0x104264c2;
    *(uint32_t *)(param_3 + 0xc) = *(uint32_t *)(param_2 + 0xe);
    *(uint32_t *)(param_3 + 0x10) = *(uint32_t *)(param_2 + 0x10);
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x16) + *(int *)(param_2 + 0x1c));
    *(uint32_t *)(param_3 + 0x18) = uVar2;
    uVar2 = align_down_to_16_bytes(param_1,*(int *)(param_2 + 0x16) + *(int *)(param_2 + 0x1e));
    *(uint32_t *)(param_3 + 0x1c) = uVar2;
    *(uint32_t *)(param_3 + 0x20) = *(uint32_t *)(param_2 + 0x2a);
    *(uint32_t *)(param_3 + 4) = *(uint32_t *)(param_2 + 0x22);
    *(uint16_t *)(param_3 + 0x24) = param_2[0x30];
    *(uint16_t *)(param_3 + 0x26) = param_2[0x31];
    *(uint16_t *)(param_3 + 0x28) = param_2[0x32];
    iVar1 = 0x66;
  }
  *(uint16_t *)(param_3 + 0x2a) = *(uint16_t *)(iVar1 + (int)param_2);
code_r0x104264c2:
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = *(uint8_t *)(param_2 + 0x48);
  param_3[3] = 1;
  *(uint16_t *)(param_3 + 8) = *param_2;
  *(uint16_t *)(param_3 + 10) = param_2[1];
  *(uint16_t *)(param_3 + 0x14) = param_2[0x12];
  *(uint16_t *)(param_3 + 0x2c) = param_2[0x34];
  *(uint16_t *)(param_3 + 0x2e) = param_2[0x35];
  *(uint16_t *)(param_3 + 0x30) = param_2[0x36];
  *(uint16_t *)(param_3 + 0x32) = param_2[0x37];
  param_3[0x34] = *(uint8_t *)(param_2 + 0x38);
  param_3[0x35] = *(uint8_t *)((int)param_2 + 0x71);
  param_3[0x36] = *(uint8_t *)(param_2 + 0x39);
  param_3[0x37] = *(uint8_t *)((int)param_2 + 0x73);
  *(uint32_t *)(param_3 + 0x38) = *(uint32_t *)(param_2 + 0x3a);
  *(uint32_t *)(param_3 + 0x3c) = *(uint32_t *)(param_2 + 0x3c);
  *(uint32_t *)(param_3 + 0x40) = *(uint32_t *)(param_2 + 0x3e);
  *(uint32_t *)(param_3 + 0x44) = *(uint32_t *)(param_2 + 0x40);
  *(uint32_t *)(param_3 + 0x48) = *(uint32_t *)(param_2 + 0x42);
  param_3[0x4c] = *(uint8_t *)(param_2 + 0x44);
  param_3[0x4e] = *(uint8_t *)(param_2 + 0x45);
  param_3[0x50] = *(uint8_t *)(param_2 + 0x46);
  param_3[0x52] = *(uint8_t *)(param_2 + 0x47);
  param_3[0x4d] = *(uint8_t *)((int)param_2 + 0x89);
  param_3[0x4f] = *(uint8_t *)((int)param_2 + 0x8b);
  param_3[0x51] = *(uint8_t *)((int)param_2 + 0x8d);
  param_3[0x53] = *(uint8_t *)((int)param_2 + 0x8f);
  return;
}
