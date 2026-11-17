/* @k10d query_object_byte_property_104f20a2 @ 0x104f20a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns a byte from
 *   a virtual call.
 * summary:
 *   The function allocates a temporary instance of cls_105a6d8c on the stack. It calls
 *   copy_status_block_bytes with the value at offset 8 of param_1 and the new object. It
 *   then invokes virtual slot 2 of the object (extract_field_from_struct_1045ff0e) with
 *   argument 0x31, masks the result to a byte, and deletes the temporary object before
 *   returning the value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_property_104f20a2(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  uVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0x31);
  cls_105a6d8c_delete(auStack_24,2);
  return uVar1 & 0xff;
}
