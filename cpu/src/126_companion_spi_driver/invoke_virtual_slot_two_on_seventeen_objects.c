/* @k10d invoke_virtual_slot_two_on_seventeen_objects @ 0x10438dca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_seventeen_objects(uint32_t this_ptr, uint32_t unused_arg)

{
  int *obj_ptr;

  /* Dispatch vtable slot 2 (offset 16) on each of 17 singleton objects.
   * The "this" pointer is adjusted by the 16-bit signed adj field in the
   * vtable entry; the second argument is always 0. */

  obj_ptr = (int *)get_or_init_singleton_object_104929a0();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)sr_driver_singleton();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_10485138();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_1046d20c();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_sensor_singleton();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)initialize_singleton_object_1045d6a0();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_camera_object();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_cls_105a7db4_singleton();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_104bb22a();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_104fb12e();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_init_singleton_object_10516bf2();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)display_mgr_getter();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_1046be62();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_1046c502();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_init_singleton_104aa272();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_create_singleton_object_10470d84();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  obj_ptr = (int *)get_or_init_singleton_object_1047316c();
  (((vtbl_entry*)(*obj_ptr))[2].fn)((int)obj_ptr + (int)((vtbl_entry*)(*obj_ptr))[2].adj,0);
  return;
}
