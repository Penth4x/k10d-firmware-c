/* @k10d write_two_offsets_to_buffer_1049f4fe @ 0x1049f4fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_offsets_to_buffer_1049f4fe(uint32_t *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = read_struct_field_by_index_104a2a78(param_2,1);
  iVar3 = *(int *)(param_1[0x4f] + 8);
  iVar2 = sum_two_helper_results(param_1 + 0x3b);
  *(int *)(iVar1 + 0x30) = iVar3 + iVar2;
  iVar1 = read_struct_field_by_index_104a2a78(param_2,0);
  *(uint32_t *)(iVar1 + 0x30) = *param_1;
  return;
}
