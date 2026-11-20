/* @k10d write_two_offsets_to_buffer_1049e02e @ 0x1049e02e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes two computed 32-bit values into buffers obtained via a helper call.
 * summary:
 *   Calls read_struct_field_by_index_104a2a78 twice with param_2 and indices 1 and 0 to
 *   obtain buffer pointers. For the first buffer, it stores the sum of a value from
 *   param_1[0x4f]+8 and the result of virtual method slot 4 (sum_two_helper_results) on
 *   param_1+0x3b at offset 0x30. For the second buffer, it stores the first word of param_1
 *   at offset 0x30.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_offsets_to_buffer_1049e02e(uint32_t *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = read_struct_field_by_index_104a2a78(param_2,1);
  iVar3 = *(int *)(param_1[0x4f] + 8);
  iVar2 = sum_two_helper_results((cls_105b6aa0 *)(param_1 + 0x3b));
  *(int *)(iVar1 + 0x30) = iVar3 + iVar2;
  iVar1 = read_struct_field_by_index_104a2a78(param_2,0);
  *(uint32_t *)(iVar1 + 0x30) = *param_1;
  return;
}
