/* @k10d query_object_via_temp_buffer_104f2c10 @ 0x104f2c10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to a helper, then calls
 *   virtual slot 2 with argument 10 and returns the low byte.
 * summary:
 *   Allocates a stack object via cls_105a6b04_new, calls copy_twelve_bytes_to_buffer with
 *   the value at param_1+8 and the new object, then invokes virtual method slot 2
 *   (extract_field_from_param_table) on that object with argument 10. The result is masked
 *   to 8 bits and returned. The temporary object is destroyed via cls_105a6b04_delete
 *   before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_via_temp_buffer_104f2c10(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  uVar1 = extract_field_from_param_table(acStack_18,10);
  cls_105a6b04_delete(acStack_18,2);
  return uVar1 & 0xff;
}
