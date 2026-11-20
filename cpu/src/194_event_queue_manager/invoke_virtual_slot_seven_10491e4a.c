/* @k10d invoke_virtual_slot_seven_10491e4a @ 0x10491e4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_10491e4a(cls_105b41d0 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1);
  }
  return;
}
