/* @k10d register_four_values_with_handler @ 0x10393458
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_four_values_with_handler(int param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_create_singleton_object_10395bd6();
  *(uint32_t *)(param_1 + 0xf0) = uVar1;
  uVar2 = read_field_at_offset_eight_10392fe8(param_1);
  call_helper_with_offset_pointer_10395d84(uVar1,uVar2);
  uVar2 = read_field_at_offset_eight_10393008(param_1);
  call_helper_with_offset_pointer_10395da4(uVar1,uVar2);
  uVar2 = call_subroutine_with_offset_10393028(param_1);
  call_helper_with_offset_pointer_10395dc4(uVar1,uVar2);
  uVar2 = read_field_at_offset_eight_10393048(param_1);
  call_helper_with_offset_pointer_10395de4(uVar1,uVar2);
  return;
}
