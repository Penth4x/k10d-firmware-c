/* @k10d read_byte_via_virtual_slot @ 0x104f2ca4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, calls a helper with a field from param_1, then reads one
 *   byte via virtual slot 2.
 * summary:
 *   Allocates a stack object of class cls_105a6b04, passes the value at param_1+8 to
 *   copy_twelve_bytes_to_buffer along with the object, then invokes virtual method slot 2
 *   (extract_field_from_param_table) with offset 8 to retrieve a value. The result is
 *   masked to 8 bits and returned. The temporary object is destroyed before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_byte_via_virtual_slot(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a6b04_new((void *)auStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  uVar1 = extract_field_from_param_table(auStack_18,8);
  cls_105a6b04_delete((void *)auStack_18,2);
  return uVar1 & 0xff;
}
