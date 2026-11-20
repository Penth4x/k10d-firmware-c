/* @k10d dispatch_virtual_message_with_state @ 0x104261e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_message_with_state(cls_1059df50 *param_1,int *param_2)

{
  uint16_t *puVar1;
  int iVar2;
  
  if ((param_2 != (int *)0x0) && (param_2[2] == 0x10e0001)) {
    puVar1 = (uint16_t *)param_2[1];
    param_1->field_0x28 = 0;
    init_object_with_two_flags_10426266((int)param_1,puVar1);
    param_1->field_0x28 = 1;
    init_object_with_two_flags_10426266((int)param_1,puVar1);
    if (*(char *)((int)puVar1 + 0x91) != '\0') {
      param_1->field_0x28 = 2;
      init_object_with_two_flags_10426266((int)param_1,puVar1);
      param_1->field_0x28 = 3;
      init_object_with_two_flags_10426266((int)param_1,puVar1);
    }
    param_1->field_0x28 = 0;
    iVar2 = *(int *)*param_2;
    (((vtbl_entry*)(iVar2))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar2))[2].adj,0x10e0001,param_2[3]);
  }
  return;
}
