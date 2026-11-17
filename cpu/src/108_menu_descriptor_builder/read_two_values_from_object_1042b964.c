/* @k10d read_two_values_from_object_1042b964 @ 0x1042b964
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_two_values_from_object_1042b964(int param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  get_or_init_heap_block();
  cls_105a6b04_new((void *)auStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  iVar1 = extract_field_from_param_table(auStack_18,0);
  *param_2 = iVar1;
  iVar1 = extract_field_from_param_table(auStack_18,3);
  param_2[1] = iVar1;
  cls_105a6b04_delete((void *)auStack_18,2);
  return 2;
}
