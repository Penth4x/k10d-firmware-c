/* @k10d query_object_byte_at_offset @ 0x104f1a20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to a helper, and returns a
 *   byte from the result.
 * summary:
 *   Allocates a stack object via cls_105a6d8c_new. Calls copy_status_block_bytes with a
 *   pointer derived from param_1+8 and the new object. Calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with offset 8. Deletes the object
 *   and returns the low byte of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_at_offset(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,8);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar1 & 0xff;
}
