/* @k10d extract_three_values_from_object @ 0x1042a27e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_three_values_from_object(int param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  get_or_init_heap_block();
  cls_105a6ef4_new((void *)auStack_28);
  copy_27_bytes_to_buffer(*(int *)(param_1 + 0xc),auStack_28);
  iVar1 = extract_field_from_struct_104604e8(auStack_28,0);
  *param_2 = iVar1;
  iVar1 = extract_field_from_struct_104604e8(auStack_28,5);
  param_2[1] = iVar1;
  iVar1 = extract_field_from_struct_104604e8(auStack_28,8);
  param_2[2] = iVar1;
  cls_105a6ef4_delete((void *)auStack_28,2);
  return 3;
}
