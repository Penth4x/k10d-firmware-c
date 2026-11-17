/* @k10d select_and_set_mode_value @ 0x10449c2c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Queries three boolean states on an object, selects a priority-based value (14, 12, or
 *   10), and writes it to the object.
 * summary:
 *   The function takes an object pointer and a flag. If the flag is 0, it resets a sub-
 *   object at offset 0x110 and returns 1. Otherwise, it checks three boolean properties
 *   (check_bit_8_of_nested_pointer, check_bit9_of_nested_pointer,
 *   check_bit10_of_nested_struct) in order of priority. It assigns 0xe, 0xc, or 10 to a
 *   local variable based on which check passes first. Finally, it writes this value to the
 *   sub-object via set_bit_3_in_offset_0x29 and sets another state via
 *   toggle_bit0_of_struct_field_1044af4a. The specific camera subsystem (e.g., AF, AE) is
 *   not identifiable from the generic callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_and_set_mode_value(void *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  
  toggle_bit0_of_struct_field_1044af4a(*(void **)((int)param_1 + 0x110),0);
  if (param_2 == 0) {
    return 1;
  }
  set_bit_3_in_offset_0x29(*(void **)((int)param_1 + 0x110),0);
  bVar1 = check_bit_8_of_nested_pointer(*(void **)((int)param_1 + 0x110));
  bVar2 = 0;
  if (bVar1) {
    bVar2 = 0xe;
  }
  else {
    bVar1 = check_bit9_of_nested_pointer(*(void **)((int)param_1 + 0x110));
    if (bVar1) {
      bVar2 = 0xc;
    }
    else {
      bVar1 = check_bit10_of_nested_struct(*(void **)((int)param_1 + 0x110));
      if (bVar1) {
        bVar2 = 10;
        goto LAB_10449ca2;
      }
    }
  }
  if (bVar2 == 0) {
    return 0;
  }
LAB_10449ca2:
  set_bit_3_in_offset_0x29(*(void **)((int)param_1 + 0x110),bVar2);
  toggle_bit0_of_struct_field_1044af4a(*(void **)((int)param_1 + 0x110),1);
  return 1;
}
