/* @k10d extract_sixteen_shorts_from_object @ 0x104f30f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Copies 16 short values from a temporary object into an output array.
 * summary:
 *   Instantiates a temporary object of class cls_105a6c24 on the stack. Calls
 *   copy_32_bytes_from_struct_field_1045e360 with a pointer from param_1+8 to initialize or
 *   populate the object. Then iterates 16 times, calling the virtual method slot 2
 *   (read_two_byte_value_at_offset_1045f92e) with indices 0-15 to retrieve short values,
 *   storing them sequentially into the array pointed to by param_2. Finally, deletes the
 *   temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_sixteen_shorts_from_object(int param_1,uint16_t *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  cls_105a6c24 acStack_2c [9];
  
  cls_105a6c24_new(acStack_2c);
  copy_32_bytes_from_struct_field_1045e360(*(int *)(param_1 + 8),acStack_2c);
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0);
  *param_2 = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,1);
  param_2[1] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,2);
  param_2[2] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,3);
  param_2[3] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,4);
  param_2[4] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,5);
  param_2[5] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,6);
  param_2[6] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,7);
  param_2[7] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,8);
  param_2[8] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,9);
  param_2[9] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,10);
  param_2[10] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0xb);
  param_2[0xb] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0xc);
  param_2[0xc] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0xd);
  param_2[0xd] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0xe);
  param_2[0xe] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f92e(acStack_2c,0xf);
  param_2[0xf] = (short)uVar1;
  cls_105a6c24_delete(acStack_2c,2);
  return;
}
