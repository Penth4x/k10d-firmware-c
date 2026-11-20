/* @k10d query_object_byte_property_104f19c4 @ 0x104f19c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns a byte from
 *   a virtual call.
 * summary:
 *   The function calls two unknown initializers, then constructs a temporary instance of
 *   cls_105a6d8c on the stack. It passes the value at offset 8 of param_1 to
 *   copy_status_block_bytes, likely configuring the temporary object. It then invokes
 *   virtual slot 2 of the temporary object with argument 0x27, destroys the object, and
 *   returns the low byte of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_property_104f19c4(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x27);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar1 & 0xff;
}
