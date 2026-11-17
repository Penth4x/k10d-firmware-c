/* @k10d initialize_object_with_four_calls @ 0x103abed6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_four_calls(int param_1)

{
  call_helper_on_fetched_object((void *)(param_1 + 8),0);
  call_helper_on_fetched_object((void *)(param_1 + 8),1);
  check_kernel_object_id_valid((void *)(param_1 + 0x40));
  clear_struct_field_at_offset_8(param_1);
  return 0;
}
