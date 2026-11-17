/* @k10d init_and_set_value_10434ee8 @ 0x10434ee8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Initializes a target object and conditionally sets a computed value on it.
 * summary:
 *   Calls store_value_to_pointer_1043554a to initialize param_2 with a constant argument of
 *   1. If param_3 is non-zero, it computes a value using select_global_by_index with
 *   param_1 and param_3, then passes that result to write_field_at_offset_four_1043554e
 *   along with param_2. Always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_and_set_value_10434ee8(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a(param_2,1);
  if (param_3 != 0) {
    uVar1 = select_global_by_index(param_1,param_3);
    write_field_at_offset_four_1043554e((int)param_2,uVar1);
  }
  return 1;
}
