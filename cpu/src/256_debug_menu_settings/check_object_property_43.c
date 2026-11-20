/* @k10d check_object_property_43 @ 0x104f1b60
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns whether
 *   virtual slot 2 with arg 0x2b equals 1.
 * summary:
 *   Allocates a stack instance of cls_105a6d8c via cls_105a6d8c_new. Calls
 *   copy_status_block_bytes with the value at param_1+8 and the new object. Invokes virtual
 *   method slot 2 (extract_field_from_struct_1045ff0e) on the object with argument 0x2b
 *   (43). Deletes the object and returns a boolean indicating if the result was 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_object_property_43(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x2b);
  cls_105a6d8c_delete(acStack_24,2);
  return (uint)(iVar1 == 1);
}
