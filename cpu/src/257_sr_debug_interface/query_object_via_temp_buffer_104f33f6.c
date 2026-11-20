/* @k10d query_object_via_temp_buffer_104f33f6 @ 0x104f33f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to a helper, and returns the
 *   result of a virtual call on the temp object.
 * summary:
 *   Allocates a stack-based instance of cls_105a6e64. It calls
 *   copy_four_bytes_from_struct_field_1045e556 with the value at param_1+8 and the
 *   temporary object as arguments. It then invokes virtual slot 2
 *   (read_four_bytes_from_object) on the temporary object, cleans up the object, and
 *   returns the result of that virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_via_temp_buffer_104f33f6(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  cls_105a6e64 cStack_10;
  
  cls_105a6e64_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e556(*(int *)(param_1 + 8),&cStack_10);
  uVar1 = read_four_bytes_from_object(&cStack_10);
  cls_105a6e64_delete(&cStack_10,2);
  return uVar1;
}
