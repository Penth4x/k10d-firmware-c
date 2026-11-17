/* @k10d query_object_slot_two @ 0x104f2a8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to it, and returns the low 16
 *   bits of a virtual slot-2 call.
 * summary:
 *   Allocates a stack instance of cls_105a6b04 via cls_105a6b04_new. Calls
 *   copy_twelve_bytes_to_buffer with the value at param_1+8 and the new object, likely
 *   initializing or configuring it. Invokes virtual method slot 2
 *   (extract_field_from_param_table) with argument 3, then deletes the object and returns
 *   the lower 16 bits of the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_slot_two(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a6b04_new((void *)auStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  uVar1 = extract_field_from_param_table(auStack_18,3);
  cls_105a6b04_delete((void *)auStack_18,2);
  return uVar1 & 0xffff;
}
