/* @k10d query_object_property_via_temp_104f2482 @ 0x104f2482
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns the result
 *   of a virtual call on that object.
 * summary:
 *   The function calls an unknown initializer, constructs a temporary instance of
 *   cls_105a6eac on the stack, and passes the value at offset 8 of param_1 to
 *   copy_four_bytes_from_struct_field_1045e59a. It then invokes virtual slot 3 of the
 *   temporary object with an argument of 4, stores the result, destroys the temporary
 *   object, and returns the result. The specific camera subsystem or data meaning is not
 *   determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property_via_temp_104f2482(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  empty_stub_function_103b76f0();
  cls_105a6eac_new((void *)auStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 8),auStack_10);
  uVar1 = test_field_bit_or_nonzero(auStack_10,4);
  cls_105a6eac_delete((void *)auStack_10,2);
  return uVar1;
}
