/* @k10d reset_sixteen_module_objects @ 0x10438f90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates through 16 singleton getters and invokes virtual slot 2 on each returned
 *   object with argument 0.
 * summary:
 *   The function calls 16 distinct accessor functions
 *   (get_or_init_singleton_object_104929a0 through get_or_init_singleton_object_10516bf2)
 *   to obtain object pointers. For each pointer, it performs a Cfront-style virtual call to
 *   slot 2 (offset 0x1c in the vtable) with the object as 'this' and 0 as the first
 *   argument. This pattern typically indicates a reset, clear, or initialization operation
 *   applied to a collection of subsystem modules.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_sixteen_module_objects(uint32_t param_x0, uint32_t param_x1)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_init_singleton_object_104929a0();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)sr_driver_singleton();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_10485138();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1046d20c();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_sensor_singleton();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)initialize_singleton_object_1045d6a0();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_camera_object();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_cls_105a7db4_singleton();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_104bb22a();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_104fb12e();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_init_singleton_object_10516bf2();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1046be62();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_1046c502();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_init_singleton_104aa272();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_create_singleton_object_10470d84();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  piVar1 = (int *)get_or_init_singleton_object_1047316c();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,0);
  return;
}
