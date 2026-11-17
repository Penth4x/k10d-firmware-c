/* @k10d initialize_object_field_with_value @ 0x10435112
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Initializes a field at offset 20 of an object and optionally sets it to a computed
 *   value.
 * summary:
 *   The function takes an object pointer (param_2) and initializes the field at offset 20
 *   (param_2 + 5) by calling store_value_to_pointer_1043554a with 1 and
 *   store_byte_at_offset_0xc with 0. If param_3 is non-zero, it calls get_value_if_flag_one
 *   with param_1 and param_3, then stores the result in the same field via
 *   write_field_at_offset_four_1043554e. It always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_field_with_value(uint32_t param_1,uint32_t *param_2,int param_3)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  puVar2 = param_2 + 5;
  store_value_to_pointer_1043554a(puVar2,1);
  store_byte_at_offset_0xc((int)puVar2,0);
  if (param_3 != 0) {
    uVar1 = get_value_if_flag_one(param_1,param_3);
    write_field_at_offset_four_1043554e((int)puVar2,uVar1);
  }
  return 1;
}
