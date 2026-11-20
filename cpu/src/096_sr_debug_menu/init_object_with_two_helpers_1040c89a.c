/* @k10d init_object_with_two_helpers_1040c89a @ 0x1040c89a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_helpers_1040c89a(void *param_1)

{
  uint32_t uVar1;
  
  init_subobject_at_offset_8(param_1);
  create_kernel_object((void *)((int)param_1 + 0x40));
  uVar1 = get_sysparam_store_instance();
  *(uint32_t *)((int)param_1 + 0x4c) = uVar1;
  return;
}
