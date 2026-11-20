/* @k10d query_object_byte_property_104f2cee @ 0x104f2cee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to a helper, and returns a
 *   byte from a virtual call.
 * summary:
 *   The function allocates a temporary instance of cls_105a6b04 on the stack. It calls
 *   copy_twelve_bytes_to_buffer with the value at offset 8 of param_1 and the temporary
 *   object. It then invokes virtual slot 2 of the temporary object
 *   (extract_field_from_param_table) with an argument of 0xd, deletes the temporary object,
 *   and returns the low 8 bits of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_byte_property_104f2cee(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  uVar1 = extract_field_from_param_table(acStack_18,0xd);
  cls_105a6b04_delete(acStack_18,2);
  return uVar1 & 0xff;
}
