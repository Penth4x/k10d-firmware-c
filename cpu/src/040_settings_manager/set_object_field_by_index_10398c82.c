/* @k10d set_object_field_by_index_10398c82 @ 0x10398c82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_by_index_10398c82(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x90;
  }
  else if (param_2 == 1) {
    iVar1 = 0x94;
  }
  else {
    if (param_2 != 2) goto LAB_10398cb6;
    iVar1 = 0x98;
  }
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)(iVar1 + (int)param_1),param_3);
LAB_10398cb6:
  *(char *)((int)param_1 + param_2 + 0x3c) = (char)param_3;
  return;
}
