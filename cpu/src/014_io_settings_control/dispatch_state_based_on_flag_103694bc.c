/* @k10d dispatch_state_based_on_flag_103694bc @ 0x103694bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_based_on_flag_103694bc(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_or_create_singleton_object_1036c796();
  iVar2 = read_array_element_bounded(uVar1,2);
  iVar3 = (*(code *)0x1036e97c/*ROM*/)();
  if (*(int *)((int)param_1 + 0x2ac) == 0) {
    if (iVar3 == 3) {
      store_value_and_dispatch_callback(iVar2,0);
    }
  }
  else if (*(int *)((int)param_1 + 0x2ac) == 1) {
    store_value_and_dispatch_callback(iVar2,3);
  }
  return;
}
