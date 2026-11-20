/* @k10d invoke_virtual_slot_10_on_sixteen_objects @ 0x10395130
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_on_sixteen_objects(void)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_init_singleton_object_1039416c();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_create_singleton_object_10396af8();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_sram_object_103973c4();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_global_object_103964f8();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_singleton_1039201c();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)init_singleton_object_1039291c();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_create_singleton_object_10395bd6();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_singleton_10392e96();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_global_object_10395354();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_singleton_object_10396dd4();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_create_singleton_object_103957d8(1);
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_singleton_object_103938e2();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_create_singleton_object_10393fbc();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_create_singleton_object_10391da4();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_singleton_object_10393b16();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  piVar1 = (int *)get_or_init_global_object_1039265a();
  (((vtbl_entry*)(*piVar1))[10].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[10].adj);
  return;
}
