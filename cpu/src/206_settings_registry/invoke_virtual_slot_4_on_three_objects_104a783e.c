/* @k10d invoke_virtual_slot_4_on_three_objects_104a783e @ 0x104a783e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_three_objects_104a783e(cls_105b6938 *param_1)

{
  int *piVar1;
  
  if (param_1->field_0x4 != 0) {
    piVar1 = (int *)get_or_create_singleton_object_1049aca6();
    (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  }
  if (param_1->field_0x8 != 0) {
    piVar1 = (int *)get_or_create_singleton_object_104a2fde();
    (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  }
  if (param_1->field_0xc != 0) {
    piVar1 = (int *)get_or_create_singleton_104ceb32();
    (((vtbl_entry*)(*piVar1))[4].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[4].adj);
  }
  return;
}
