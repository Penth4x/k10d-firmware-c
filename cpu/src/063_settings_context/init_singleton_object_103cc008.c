/* @k10d init_singleton_object_103cc008 @ 0x103cc008
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 063_settings_context (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x8001bf3c on first call and returns its
 *   pointer.
 * summary:
 *   Checks a flag at 0x8001bf64; if zero, sets it to 1, calls cls_105959b0_new to construct
 *   an object at 0x8001bf3c, and calls prepend_to_singly_linked_list with 0x8000f678.
 *   Returns the pointer to the object at 0x8001bf3c. This is a standard lazy-initialization
 *   pattern for a global singleton.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_singleton_object_103cc008(void)

{
  if (_DAT_8001bf64/*SDRAM*/ == 0) {
    _DAT_8001bf64/*SDRAM*/ = 1;
    cls_105959b0_new((cls_105959b0 *)0x8001bf3c/*SDRAM*/);
    prepend_to_singly_linked_list((uint32_t *)(0x8000f678/*SDRAM*/));
  }
  return 0x8001bf3c/*SDRAM*/;
}
