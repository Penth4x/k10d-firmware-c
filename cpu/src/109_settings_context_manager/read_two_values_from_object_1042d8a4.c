/* @k10d read_two_values_from_object_1042d8a4 @ 0x1042d8a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_two_values_from_object_1042d8a4(int param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  cls_105a5d5c acStack_14 [3];
  
  cls_105a5d5c_new(acStack_14);
  copy_six_bytes_between_structs(*(int *)(param_1 + 0x1c),acStack_14);
  iVar1 = extract_field_by_index_1045d346(acStack_14,8);
  *param_2 = iVar1;
  iVar1 = extract_field_by_index_1045d346(acStack_14,9);
  param_2[1] = iVar1;
  cls_105a5d5c_delete(acStack_14,2);
  return 2;
}
