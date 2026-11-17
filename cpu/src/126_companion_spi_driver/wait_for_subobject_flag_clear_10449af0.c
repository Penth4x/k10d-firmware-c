/* @k10d wait_for_subobject_flag_clear_10449af0 @ 0x10449af0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_subobject_flag_clear_10449af0(void *param_1)

{
  bool bVar1;
  
  toggle_bit0_of_struct_field_1044b2e2(*(void **)((int)param_1 + 0x110),1);
  bVar1 = check_flag_in_nested_struct(*(void **)((int)param_1 + 0x110));
  if (bVar1) {
    do {
      bVar1 = check_flag_in_nested_struct(*(void **)((int)param_1 + 0x110));
    } while (bVar1);
  }
  return;
}
