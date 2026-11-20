/* @k10d query_object_via_temp_buffer_104f29f6 @ 0x104f29f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to a helper with a field from param_1, and
 *   returns the low byte of a virtual call result.
 * summary:
 *   Allocates a stack object via cls_105a6b04_new. Calls copy_twelve_bytes_to_buffer with
 *   the value at param_1+8 and the new object. Invokes virtual slot 2
 *   (extract_field_from_param_table) on the object with argument 1, then deletes the object
 *   and returns the result masked to 8 bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_via_temp_buffer_104f29f6(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  uVar1 = extract_field_from_param_table(acStack_18,1);
  cls_105a6b04_delete(acStack_18,2);
  return uVar1 & 0xff;
}
