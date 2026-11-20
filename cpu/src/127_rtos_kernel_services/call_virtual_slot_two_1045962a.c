/* @k10d call_virtual_slot_two_1045962a @ 0x1045962a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_1045962a(int param_1)

{
  (((vtbl_entry*)(*(int *)(param_1 + 8)))[2].fn)(((vtbl_entry*)(*(int *)(param_1 + 8)))[2].adj + param_1);
  return;
}
