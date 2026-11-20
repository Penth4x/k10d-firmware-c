/* @k10d query_object_byte_property_104f1f0e @ 0x104f1f0e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to it, and returns a byte
 *   from a virtual call.
 * summary:
 *   The function allocates a temporary instance of cls_105a6d8c on the stack. It calls
 *   copy_status_block_bytes with a pointer derived from param_1 (offset 8) and the
 *   temporary object. It then invokes virtual slot 2 of the temporary object with an
 *   argument of 0x2f (47), cleans up the temporary object, and returns the low 8 bits of
 *   the result. The specific camera subsystem is not identifiable from the provided
 *   pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_property_104f1f0e(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2f);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar1 & 0xff;
}
