/* @k10d call_virtual_slot_2_on_nested_object @ 0x10459448
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_2_on_nested_object(void *param_1)

{
  (((vtbl_entry*)(*(int *)((int)param_1 + 4)))[2].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_1 + 4)))[2].adj + (int)param_1);
  return;
}
