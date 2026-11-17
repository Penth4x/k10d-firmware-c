/* @k10d populate_eight_entry_array @ 0x1042a15c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Fills an 8-element integer array with values derived from a class instance and helper
 *   calls.
 * summary:
 *   The function creates a local instance of cls_105a6cfc, initializes it using a pointer
 *   from param_1, and then populates the array pointed to by param_2. It retrieves several
 *   values via the virtual method extract_field_from_struct_1045fc62 (slot 2) with various
 *   indices, calls helper functions compute_exposure_value_from_table,
 *   compute_exposure_compensation_value_1045a2a6, and compute_scaled_offset to compute
 *   specific entries, and sets one entry to the constant 100. It returns the constant 8,
 *   likely indicating the number of elements filled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_eight_entry_array(int param_1,int *param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_70 [4];
  uint32_t auStack_54 [19];
  
  puVar6 = auStack_70;
  uVar1 = get_or_init_heap_block();
  cls_105a6cfc_new(auStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 0xc),auStack_54);
  iVar2 = extract_field_from_struct_1045fc62(auStack_54,0);
  *param_2 = iVar2;
  iVar2 = extract_field_from_struct_1045fc62(auStack_54,6);
  param_2[1] = iVar2;
  iVar2 = extract_field_from_struct_1045fc62(auStack_54,7);
  param_2[2] = iVar2;
  iVar2 = extract_field_from_struct_1045fc62(auStack_54,8);
  param_2[3] = iVar2;
  uVar3 = extract_field_from_struct_1045fc62(auStack_54,0x14);
  uVar4 = extract_field_from_struct_1045fc62(auStack_54,0x36);
  uVar5 = extract_field_from_struct_1045fc62(auStack_54,1);
  iVar2 = extract_field_from_struct_1045fc62(auStack_54,8);
  *(short *)(puVar6 + 2) = (short)iVar2;
  iVar2 = compute_exposure_value_from_table(uVar1,uVar3 & 0xff,uVar4 & 0xff,uVar5 & 0xff,*(short *)(puVar6 + 2));
  param_2[4] = iVar2;
  param_2[5] = 100;
  uVar3 = extract_field_from_struct_1045fc62(auStack_54,0xc);
  iVar2 = compute_exposure_compensation_value_1045a2a6(uVar1,uVar3 & 0xff);
  param_2[6] = iVar2;
  uVar3 = extract_field_from_struct_1045fc62(auStack_54,0xe);
  iVar2 = compute_scaled_offset(uVar1,uVar3 & 0xff);
  param_2[7] = iVar2;
  cls_105a6cfc_delete(auStack_54,2);
  return 8;
}
