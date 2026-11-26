/* @k10d check_and_activate_object @ 0x10482df8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 0x14 in param_1 and if non-zero, calls three helper functions
 *   and returns 0, otherwise returns 0x80.
 * summary:
 *   The function reads an integer at offset 0x14 of the object pointed to by param_1. If
 *   this value is zero, it immediately returns 0x80. If the value is non-zero, it calls
 *   read_struct_field_at_index_1046c7ca with param_2 and 0, calls set_flg_obj on the
 *   pointer at offset 0x20 of param_1, and calls clear_three_struct_fields with param_1,
 *   then returns 0. The specific roles of the callees and the object structure are not
 *   known from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_activate_object(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (*(int *)((int)param_1 + 0x14) == 0) {
    uVar1 = 0x80;
  }
  else {
    read_struct_field_at_index_1046c7ca(param_2,0);
    set_flg_obj((uint32_t *)((int)param_1 + 0x20), 0x2);
    clear_three_struct_fields((int)param_1);
    uVar1 = 0;
  }
  return uVar1;
}
