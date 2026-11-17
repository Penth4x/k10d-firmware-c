/* @k10d build_pair_comparison_record @ 0x104ca36e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Copies fields from two source objects into a local struct and calls a helper to process
 *   them.
 * summary:
 *   The function reads four 32-bit fields (offsets 0x1c-0x28) from two source objects
 *   (param_2 and param_3) and two 16-bit values derived from calls to
 *   return_first_word_1045c514/read_struct_field_at_offset_4 on offset 0x2c of each source.
 *   It assembles these into a local stack structure, writes two 16-bit values to offsets
 *   0x1d0 and 0x1d2 of param_1, and passes pointers to the local data and param_1 fields to
 *   compute_centered_range_bounds. The specific camera subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_pair_comparison_record(int param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t auStack_68 [4];
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint8_t uStack_9;
  uint16_t extraout_r4;
  
  piVar4 = (int *)auStack_68;
  uVar1 = return_first_word_1045c514((uint32_t *)((int)param_2 + 0x2c));
  uVar2 = read_struct_field_at_offset_4((uint32_t *)((int)param_2 + 0x2c));
  uVar3 = return_first_word_1045c514((uint32_t *)(param_3 + 0x2c));
  extraout_r4 = (uint16_t)uVar3;
  uVar3 = read_struct_field_at_offset_4((uint32_t *)(param_3 + 0x2c));
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_40 = *(uint32_t *)((int)param_2 + 0x20);
  uStack_3c = *(uint32_t *)((int)param_2 + 0x24);
  uStack_38 = *(uint32_t *)((int)param_2 + 0x28);
  uStack_44 = *(uint32_t *)((int)param_2 + 0x1c);
  uStack_34 = (uint16_t)uVar1;
  uStack_32 = (uint16_t)uVar2;
  uStack_24 = *(uint32_t *)(param_3 + 0x20);
  uStack_20 = *(uint32_t *)(param_3 + 0x24);
  uStack_1c = *(uint32_t *)(param_3 + 0x28);
  uStack_28 = *(uint32_t *)(param_3 + 0x1c);
  *(uint16_t *)(param_1 + 0x1d0) = 0;
  *(uint16_t *)(param_1 + 0x1d2) = extraout_r4;
  uStack_30 = uStack_34;
  uStack_18 = extraout_r4;
  uStack_16 = (short)uVar3;
  uStack_14 = extraout_r4;
  *piVar4 = param_1 + 0x1d6;
  compute_centered_range_bounds(&uStack_9,(int)&uStack_44,(int)&uStack_28,(short *)(param_1 + 0x1d4),(short *)*piVar4
              );
  return;
}
