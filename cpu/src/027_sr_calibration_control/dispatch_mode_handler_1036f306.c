/* @k10d dispatch_mode_handler_1036f306 @ 0x1036f306
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_handler_1036f306(void *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = read_byte_at_offset_0x1d(*(int *)((int)param_1 + 0x2c));
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)((int)param_1 + 0x2c),1);
  }
  iVar1 = *(int *)((int)param_1 + 0xb0);
  if (iVar1 == 0) {
    configure_subobject_from_globals(param_1);
  }
  else if (iVar1 == 1) {
    configure_mode_dependent_struct(param_1);
  }
  else if (iVar1 == 2) {
    populate_struct_from_global_block(param_1);
  }
  else if (iVar1 == 3) {
    call_two_helpers_on_object_1036fca6(param_1);
  }
  cVar2 = read_byte_at_offset_0x1d(*(int *)((int)param_1 + 0x2c));
  if (cVar2 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)((int)param_1 + 0x2c),0);
  }
  return;
}
