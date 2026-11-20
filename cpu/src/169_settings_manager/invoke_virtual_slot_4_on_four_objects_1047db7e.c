/* @k10d invoke_virtual_slot_4_on_four_objects_1047db7e @ 0x1047db7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_four_objects_1047db7e(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_sram_object_10478100();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  piVar1 = (int *)get_or_create_singleton_object_1047a73e();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  piVar1 = (int *)get_or_create_singleton_object_1047c910();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  piVar1 = (int *)get_or_create_singleton_object_1047d00a();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  return;
}
