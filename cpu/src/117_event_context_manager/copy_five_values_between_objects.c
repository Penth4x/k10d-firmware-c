/* @k10d copy_five_values_between_objects @ 0x104327b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads five values from a source object and writes them into a destination structure at
 *   fixed offsets.
 * summary:
 *   The function extracts data from param_1+0x38 via five helper calls
 *   (read_field_at_offset_0x44, get_field_at_offset_four_1042ff1c,
 *   read_field_at_offset_0x90, get_field_at_offset_four_1042ff30, get_byte_at_offset_c). It
 *   then writes these values into param_2 and param_2+0x14 using three setter-like
 *   functions (store_value_to_pointer_1043309c, write_field_at_offset_four_104330a0,
 *   set_byte_at_offset_0xc). Finally, it stores a pointer to param_1+0x20 at param_2+0x28.
 *   The specific camera subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_five_values_between_objects(int param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint8_t uVar5;
  void *pvVar6;
  
  uVar1 = read_field_at_offset_0x44(*(uint32_t *)(param_1 + 0x38));
  uVar2 = get_field_at_offset_four_1042ff1c(*(uint32_t *)(param_1 + 0x38),uVar1);
  uVar3 = read_field_at_offset_0x90(*(uint32_t *)(param_1 + 0x38));
  uVar4 = get_field_at_offset_four_1042ff30(*(uint32_t *)(param_1 + 0x38),uVar3);
  uVar5 = get_byte_at_offset_c(*(uint32_t *)(param_1 + 0x38),uVar3);
  store_value_to_pointer_1043309c(param_2,uVar1);
  write_field_at_offset_four_104330a0(param_2,uVar2);
  pvVar6 = (void *)((int)param_2 + 0x14);
  store_value_to_pointer_1043309c(pvVar6,uVar3);
  write_field_at_offset_four_104330a0(pvVar6,uVar4);
  set_byte_at_offset_0xc(pvVar6,uVar5);
  *(int *)((int)param_2 + 0x28) = param_1 + 0x20;
  return;
}
