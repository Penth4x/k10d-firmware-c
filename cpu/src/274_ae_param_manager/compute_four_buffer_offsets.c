/* @k10d compute_four_buffer_offsets @ 0x10519dc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calculates and stores four 32-bit offset values into slots of a structure array.
 * summary:
 *   The function calls read_struct_field_by_index_104a2a78 four times with indices 0, 1, 3,
 *   and 2 to obtain pointers to specific elements within a structure array. It writes a
 *   value from param_1 to the offset 0x30 of the first element. For the second element, it
 *   sums a value from param_1[0x4f] and a virtual call result. For the third and fourth
 *   elements, it calculates offsets by adding a masked value from offset 0x18 to the value
 *   at offset 0x30 of the previous element in the sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_four_buffer_offsets(uint32_t *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = read_struct_field_by_index_104a2a78(param_2,0);
  *(uint32_t *)(iVar1 + 0x30) = *param_1;
  iVar2 = read_struct_field_by_index_104a2a78(param_2,1);
  iVar4 = *(int *)(param_1[0x4f] + 8);
  iVar3 = sum_two_helper_results(param_1 + 0x3b);
  *(int *)(iVar2 + 0x30) = iVar4 + iVar3;
  iVar2 = read_struct_field_by_index_104a2a78(param_2,3);
  *(uint *)(iVar2 + 0x30) = *(int *)(iVar1 + 0x30) + (*(int *)(iVar1 + 0x18) + 3U & 0xfffffffc);
  iVar1 = read_struct_field_by_index_104a2a78(param_2,2);
  *(uint *)(iVar1 + 0x30) = *(int *)(iVar2 + 0x30) + (*(int *)(iVar2 + 0x18) + 3U & 0xfffffffc);
  return;
}
