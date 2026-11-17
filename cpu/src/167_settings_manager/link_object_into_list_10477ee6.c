/* @k10d link_object_into_list_10477ee6 @ 0x10477ee6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Links an object into a list by updating a pointer field and calling a helper.
 * summary:
 *   The function calls initialize_struct_header on a field at offset 0x74 of param_1. It
 *   then copies a pointer from param_2+0x14 to param_1+0x88 and sets param_2+0x14 to point
 *   to param_1+4. Finally, it calls dispatch_by_type_field_10473d3c with a field from
 *   param_1+0x18 and param_2, returning the result. The pattern suggests inserting or
 *   linking a structure into a list or queue.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t link_object_into_list_10477ee6(int param_1,int param_2)

{
  uint32_t uVar1;
  
  initialize_struct_header((void *)(param_1 + 0x74));
  *(uint32_t *)(param_1 + 0x88) = *(uint32_t *)(param_2 + 0x14);
  *(int *)(param_2 + 0x14) = param_1 + 4;
  uVar1 = dispatch_by_type_field_10473d3c(*(uint32_t *)(param_1 + 0x18),param_2);
  return uVar1;
}
