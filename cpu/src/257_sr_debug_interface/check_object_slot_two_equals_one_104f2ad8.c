/* @k10d check_object_slot_two_equals_one_104f2ad8 @ 0x104f2ad8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary cls_105a6b04 object, invokes its virtual slot 2 with a value from
 *   param_1, and returns whether the result equals 1.
 * summary:
 *   Allocates a stack instance of cls_105a6b04 via cls_105a6b04_new. Calls
 *   copy_twelve_bytes_to_buffer passing the integer at param_1+8 and the new object. Then
 *   calls extract_field_from_param_table (virtual slot 2 of cls_105a6b04) with the object
 *   and argument 4. Deletes the temporary object and returns true if the slot-2 result was
 *   exactly 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_slot_two_equals_one_104f2ad8(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  iVar1 = extract_field_from_param_table(acStack_18,4);
  cls_105a6b04_delete(acStack_18,2);
  return iVar1 == 1;
}
