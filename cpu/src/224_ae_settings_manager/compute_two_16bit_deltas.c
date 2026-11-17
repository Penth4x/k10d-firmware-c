/* @k10d compute_two_16bit_deltas @ 0x104bbd3a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes two 16-bit values from a mode selector and source fields, then writes them to
 *   a destination buffer.
 * summary:
 *   The function branches on a 4-state selector at param_2[0xb]. For each state, it calls
 *   store_word_to_pointer_1045bd48 and write_field_at_offset_four_1045bd50 with values
 *   derived from 16-bit fields in param_2 (offsets 0x10-0x13) and results from
 *   return_first_word_1045c514/read_struct_field_at_offset_4. The results are stored in a
 *   local buffer, processed by free_heap_block_if_flagged_1045bc54, and copied to param_1.
 *   The specific camera subsystem (e.g., AE, AF, WB) is not determinable from the provided
 *   callees or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_two_16bit_deltas(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  puVar3 = auStack_18 + 1;
  alloc_two_word_pair_1045bc2e(puVar3,0,0);
  iVar1 = param_2[0xb];
  if (iVar1 == 0) {
    store_word_to_pointer_1045bd48(puVar3,param_2[0x10] & 0xffff);
    uVar2 = param_2[0x11] & 0xffff;
  }
  else if (iVar1 == 1) {
    store_word_to_pointer_1045bd48(puVar3,param_2[0x11] & 0xffff);
    iVar1 = return_first_word_1045c514(param_2);
    uVar2 = (iVar1 - (param_2[0x12] - param_2[0x10] & 0xffff)) - (param_2[0x10] & 0xffff);
  }
  else if (iVar1 == 2) {
    iVar1 = return_first_word_1045c514(param_2);
    store_word_to_pointer_1045bd48(puVar3,(iVar1 - (param_2[0x12] - param_2[0x10] & 0xffff)) -
                        (param_2[0x10] & 0xffff));
    iVar1 = read_struct_field_at_offset_4(param_2);
    uVar2 = (iVar1 - (param_2[0x13] - param_2[0x11] & 0xffff)) - (param_2[0x11] & 0xffff);
  }
  else {
    if (iVar1 != 3) goto LAB_104bbe38;
    iVar1 = read_struct_field_at_offset_4(param_2);
    store_word_to_pointer_1045bd48(puVar3,(iVar1 - (param_2[0x13] - param_2[0x11] & 0xffff)) -
                        (param_2[0x11] & 0xffff));
    uVar2 = param_2[0x10] & 0xffff;
  }
  write_field_at_offset_four_1045bd50(puVar3,uVar2);
LAB_104bbe38:
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar1) = *(uint32_t *)((int)auStack_18 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  free_heap_block_if_flagged_1045bc54(puVar3,2);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(iVar4 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  return;
}
