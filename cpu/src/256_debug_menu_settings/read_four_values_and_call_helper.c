/* @k10d read_four_values_and_call_helper @ 0x104f25fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Extracts four values from a cls_105a6cfc object and passes them to a helper function.
 * summary:
 *   The function creates a temporary cls_105a6cfc object, initializes it with a value from
 *   param_1+8, and then reads four specific fields (at offsets 0x14, 0x36, 1, and 8) using
 *   the virtual method extract_field_from_struct_1045fc62. It then calls
 *   compute_exposure_value_from_table with these four values (truncated to bytes/shorts)
 *   and a value from get_or_init_heap_block, returning the result. The temporary object is
 *   deleted before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_four_values_and_call_helper(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_6c [4];
  uint32_t auStack_54 [19];
  
  puVar6 = auStack_6c;
  cls_105a6cfc_new(auStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 8),auStack_54);
  uVar1 = extract_field_from_struct_1045fc62(auStack_54,0x14);
  uVar2 = extract_field_from_struct_1045fc62(auStack_54,0x36);
  uVar3 = extract_field_from_struct_1045fc62(auStack_54,1);
  iVar4 = extract_field_from_struct_1045fc62(auStack_54,8);
  uVar5 = get_or_init_heap_block();
  *(short *)(puVar6 + 2) = (short)iVar4;
  iVar4 = compute_exposure_value_from_table(uVar5,uVar1 & 0xff,uVar2 & 0xff,uVar3 & 0xff,*(short *)(puVar6 + 2));
  cls_105a6cfc_delete(auStack_54,2);
  return iVar4;
}
