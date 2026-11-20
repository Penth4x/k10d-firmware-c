/* @k10d init_object_from_source_and_flags @ 0x104822b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Copies fields from a source struct to initialize the object, computes a derived value,
 *   and sets status flags based on helper results.
 * summary:
 *   The function copies an integer, two shorts, and a uint from param_2 to offsets 0xc-0x14
 *   in param_1. It calculates a derived integer (param_2[8] - uint - short*uint) and stores
 *   it at 0x18. It calls four helper functions (select_buffer_size_class,
 *   select_buffer_size_by_length, select_size_by_threshold_104824b0,
 *   compute_exposure_value_from_params) passing param_1 and the derived value, storing
 *   their return values at offsets 0x1d, 0x1c, 0x28, and finally calling
 *   compute_exposure_value_from_params. It sets flags at 0x1e, 0x20, and 0x22 based on
 *   whether the value at 0x1d equals 0x0b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_from_source_and_flags(cls_105ab6a0 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint8_t uVar5;
  uint16_t uVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  param_1->field_0xc = iVar2;
  uVar3 = (uint)*(ushort *)(param_2 + 0xe);
  param_1->field_0x10 = *(ushort *)(param_2 + 0xe);
  uVar1 = *(ushort *)(param_2 + 0xc);
  param_1->field_0x12 = uVar1;
  param_1->field_0x14 = uVar3;
  iVar2 = (iVar2 - uVar3) - uVar1 * uVar3;
  param_1->field_0x18 = iVar2;
  uVar5 = select_buffer_size_class((uint32_t)(param_1),(uint)(iVar2));
  param_1->field_0x1d = uVar5;
  uVar5 = select_buffer_size_by_length((uint32_t)(param_1),(uint)(param_1->field_0x18));
  param_1->field_0x1c = uVar5;
  uVar4 = select_size_by_threshold_104824b0((uint32_t)(param_1),(uint)(param_1->field_0x18));
  param_1->field_0x28 = uVar4;
  if (param_1->field_0x1d == '\v') {
    param_1->field_0x1e = 0x20;
    param_1->field_0x20 = 2;
    uVar4 = 0;
  }
  else {
    param_1->field_0x1e = 1;
    param_1->field_0x20 = 2;
    uVar4 = 0x200;
  }
  param_1->field_0x22 = uVar4;
  compute_exposure_value_from_params((int)(param_1));
  return 1;
}
