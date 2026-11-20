/* @k10d check_object_slot_two_equals_one_104f2a40 @ 0x104f2a40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary cls_105a6b04 object, passes it to a helper with a field from
 *   param_1, and returns whether its slot-2 method returns 1.
 * summary:
 *   Allocates a stack instance of cls_105a6b04 via cls_105a6b04_new. Calls
 *   copy_twelve_bytes_to_buffer with the value at param_1+8 and the new object. Then
 *   invokes virtual slot 2 (extract_field_from_param_table) on the object with argument 2,
 *   deletes the object, and returns true if the slot-2 result equals 1. The specific camera
 *   subsystem is not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_slot_two_equals_one_104f2a40(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  iVar1 = extract_field_from_param_table(acStack_18,2);
  cls_105a6b04_delete(acStack_18,2);
  return iVar1 == 1;
}
