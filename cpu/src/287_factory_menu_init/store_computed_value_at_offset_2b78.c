/* @k10d store_computed_value_at_offset_2b78 @ 0x1052bf72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_computed_value_at_offset_2b78(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = clamp_value_to_range(__frv_reg_unset(4));
  uVar2 = get_shared_sram_buffer();
  uVar1 = iterate_object_array_until_match(uVar2,uVar1);
  *(uint32_t *)(param_1 + 0x2b78) = uVar1;
  return;
}
