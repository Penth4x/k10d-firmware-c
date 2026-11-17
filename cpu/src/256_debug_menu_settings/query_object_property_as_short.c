/* @k10d query_object_property_as_short @ 0x104f20ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a field from param_1, and
 *   returns a 16-bit result.
 * summary:
 *   The function allocates a stack object via cls_105a6d8c_new. It calls
 *   copy_status_block_bytes with a pointer from param_1+8 and the new object. It then
 *   invokes virtual slot 2 (extract_field_from_struct_1045ff0e) on the object with argument
 *   10, deletes the object, and returns the lower 16 bits of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_property_as_short(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  uVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,10);
  cls_105a6d8c_delete(auStack_24,2);
  return uVar1 & 0xffff;
}
