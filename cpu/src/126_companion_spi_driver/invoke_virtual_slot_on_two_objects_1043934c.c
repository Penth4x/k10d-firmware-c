/* @k10d invoke_virtual_slot_on_two_objects_1043934c @ 0x1043934c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_1043934c(uint32_t param_x0)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_104e7b68();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  piVar1 = (int *)get_or_init_singleton_10433180();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  return;
}
