/* @k10d extract_four_short_fields @ 0x104f3230
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_four_short_fields(int param_1,uint16_t *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_2c [36];
  
  cls_105a6b94_new((void *)auStack_2c);
  copy_32_bytes_from_struct_field_1045e2e4(*(int *)(param_1 + 8),auStack_2c);
  uVar1 = read_two_byte_value_at_offset_1045f6ea((int)auStack_2c,0);
  *param_2 = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f6ea((int)auStack_2c,1);
  param_2[1] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f6ea((int)auStack_2c,6);
  param_2[2] = (short)uVar1;
  uVar1 = read_two_byte_value_at_offset_1045f6ea((int)auStack_2c,7);
  param_2[3] = (short)uVar1;
  cls_105a6b94_delete((void *)auStack_2c,2);
  return;
}
