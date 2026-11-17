/* @k10d toggle_and_wait_for_subsystem @ 0x10449bb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_and_wait_for_subsystem(void *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    toggle_bit0_of_struct_field_1044b1d8(*(void **)((int)param_1 + 0x110),0);
  }
  else {
    toggle_bit0_of_struct_field_1044b1d8(*(void **)((int)param_1 + 0x110),1);
    bVar1 = check_flag_bit1_in_nested_struct(*(void **)((int)param_1 + 0x110));
    while (!bVar1) {
      bVar1 = check_flag_bit1_in_nested_struct(*(void **)((int)param_1 + 0x110));
    }
  }
  return;
}
