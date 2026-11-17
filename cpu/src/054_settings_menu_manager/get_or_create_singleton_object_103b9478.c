/* @k10d get_or_create_singleton_object_103b9478 @ 0x103b9478
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a pointer to a singleton object stored at 0x8001bd48.
 * summary:
 *   Checks if the global flag _DAT_8001bd50 is zero. If so, sets it to 1, calls
 *   cls_10594e04_new to construct an object at 0x8001bd48, and calls
 *   prepend_to_singly_linked_list with 0x8000f588. Returns the pointer 0x8001bd48. The role
 *   of the specific object is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_103b9478(void)

{
  if (_DAT_8001bd50/*SDRAM*/ == 0) {
    _DAT_8001bd50/*SDRAM*/ = 1;
    cls_10594e04_new((void *)0x8001bd48/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f588/*SDRAM*/);
  }
  return 0x8001bd48/*SDRAM*/;
}
