/* @k10d query_object_property_via_temp_104f1e76 @ 0x104f1e76
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to it, and returns the low
 *   byte of a virtual method call.
 * summary:
 *   The function allocates a stack-based object of class cls_105a6abc. It calls
 *   copy_buffer_with_lock_1045e22a with the value at param_1+8 and the new object, likely
 *   initializing or linking them. It then invokes virtual slot 2
 *   (extract_bitfield_from_byte_array) on the temporary object with an argument of 5,
 *   cleans up the object, and returns the result masked to 8 bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_property_via_temp_104f1e76(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6abc acStack_1c [5];
  
  cls_105a6abc_new(acStack_1c);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_1c);
  uVar1 = extract_bitfield_from_byte_array(acStack_1c,5);
  cls_105a6abc_delete(acStack_1c,2);
  return uVar1 & 0xff;
}
