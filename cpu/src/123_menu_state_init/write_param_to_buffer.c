/* @k10d write_param_to_buffer @ 0x10434fee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer and conditionally writes a computed value to it.
 * summary:
 *   Calls store_value_to_pointer_1043554a to initialize param_2 with size 4. If param_3 is
 *   non-zero, calls get_mode_specific_data_ptr with param_1 and param_3, then writes the
 *   result to param_2 via write_field_at_offset_four_1043554e. Always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_param_to_buffer(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a(param_2,4);
  if (param_3 != 0) {
    uVar1 = get_mode_specific_data_ptr(param_1,param_3);
    write_field_at_offset_four_1043554e((int)param_2,uVar1);
  }
  return 1;
}
