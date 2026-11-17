/* @k10d update_object_field_with_guard @ 0x10449b30
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_field_with_guard(void *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = compute_bit_mask_from_threshold(param_1,param_2);
  bVar2 = check_bit2_of_nested_struct(*(void **)((int)param_1 + 0x110));
  if (bVar2) {
    toggle_bit2_in_struct_field(*(void **)((int)param_1 + 0x110),0);
  }
  set_high_byte_of_struct_field(*(void **)((int)param_1 + 0x110),(short)uVar1);
  if (bVar2) {
    toggle_bit2_in_struct_field(*(void **)((int)param_1 + 0x110),1);
  }
  return;
}
