/* @k10d query_object_byte_property_104f1ab6 @ 0x104f1ab6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns a byte from
 *   a virtual query.
 * summary:
 *   Allocates a stack instance of cls_105a6d8c. Calls copy_status_block_bytes with the
 *   value at param_1+8 and the new object. Invokes virtual slot 2
 *   (extract_field_from_struct_1045ff0e) on the object with argument 0. Deletes the object
 *   and returns the low 8 bits of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_property_104f1ab6(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,0);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar1 & 0xff;
}
