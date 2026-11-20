/* @k10d query_object_property_byte_104f1978 @ 0x104f1978
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a field from param_1, and
 *   returns a byte from a virtual call.
 * summary:
 *   Allocates a stack object via cls_105a6d8c_new. Calls copy_status_block_bytes with the
 *   value at param_1+8 and the new object. Invokes virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with argument 6, masks the result to
 *   a byte, and deletes the object. The specific camera subsystem is not identifiable from
 *   the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_property_byte_104f1978(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,6);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar1 & 0xff;
}
