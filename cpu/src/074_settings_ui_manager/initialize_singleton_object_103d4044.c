/* @k10d initialize_singleton_object_103d4044 @ 0x103d4044
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 074_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x8001c1c0 and returns its pointer.
 * summary:
 *   Checks the flag at 0x8001c1e4; if zero, sets it to 1, calls cls_1059630c_new to
 *   construct the object at 0x8001c1c0, and calls prepend_to_singly_linked_list with
 *   0x8000f7b8. Returns the pointer to the object. The specific role of the object is not
 *   determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_103d4044(void)

{
  if (_DAT_8001c1e4/*SDRAM*/ == 0) {
    _DAT_8001c1e4/*SDRAM*/ = 1;
    cls_1059630c_new((cls_1059630c *)0x8001c1c0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f7b8/*SDRAM*/);
  }
  return 0x8001c1c0/*SDRAM*/;
}
