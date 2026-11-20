/* @k10d query_object_via_temp_buffer_104f1a6c @ 0x104f1a6c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary cls_105a6d8c object, passes it to copy_status_block_bytes with a
 *   field from param_1, then calls virtual slot 2 on the temp object and returns the
 *   result.
 * summary:
 *   Allocates a stack-local cls_105a6d8c instance via cls_105a6d8c_new. Calls
 *   copy_status_block_bytes with the value at param_1+8 and the new object as arguments.
 *   Then invokes virtual method slot 2 (extract_field_from_struct_1045ff0e) on the
 *   temporary object with argument 9, capturing the return value. Finally deletes the
 *   temporary object and returns the captured value. The role of copy_status_block_bytes
 *   and the meaning of the constant 9 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_object_via_temp_buffer_104f1a6c(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,9);
  cls_105a6d8c_delete(acStack_24,2);
  return iVar1;
}
