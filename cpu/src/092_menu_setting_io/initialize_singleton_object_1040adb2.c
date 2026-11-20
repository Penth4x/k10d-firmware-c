/* @k10d initialize_singleton_object_1040adb2 @ 0x1040adb2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object at 0x8001cf50 on first call and returns its pointer.
 * summary:
 *   Checks the flag at 0x8001cf74; if zero, sets it to 1, calls cls_10599b9c_new to
 *   construct an object at 0x8001cf50, and calls prepend_to_singly_linked_list with
 *   0x8000fb5c. Returns the pointer 0x8001cf50. The specific role of the object is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_1040adb2(void)

{
  if (_DAT_8001cf74/*SDRAM*/ == 0) {
    _DAT_8001cf74/*SDRAM*/ = 1;
    cls_10599b9c_new((cls_10599b9c *)0x8001cf50/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fb5c/*SDRAM*/);
  }
  return 0x8001cf50/*SDRAM*/;
}
