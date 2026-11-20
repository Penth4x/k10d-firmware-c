/* @k10d query_object_property_slot3 @ 0x10506ca2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to it, and returns the result
 *   of virtual slot 3.
 * summary:
 *   Allocates a stack instance of cls_105a6eac. Calls
 *   copy_four_bytes_from_struct_field_1045e59a with the value at offset 0x14 of param_1 and
 *   the new object. Invokes virtual method slot 3 (test_field_bit_or_nonzero) on the object
 *   with argument 7. Deletes the object and returns the result of the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property_slot3(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  cls_105a6eac_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0x14),&cStack_10);
  uVar1 = test_field_bit_or_nonzero(&cStack_10,7);
  cls_105a6eac_delete(&cStack_10,2);
  return uVar1;
}
