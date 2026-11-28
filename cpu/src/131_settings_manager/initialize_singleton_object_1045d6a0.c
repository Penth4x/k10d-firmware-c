/* @k10d initialize_singleton_object_1045d6a0 @ 0x1045d6a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object at 0x800482e0 on first call and returns its address.
 * summary:
 *   Checks the flag at _DAT_8004830c; if zero, sets it to 1, calls cls_105a5da4_new to
 *   construct an object at 0x800482e0, and calls prepend_to_singly_linked_list with
 *   0x8000fe50. Returns the pointer 0x800482e0. The specific role of the object is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_1045d6a0(void)

{
  // Lazy-init guard: on first call, construct the singleton and register it in the list
  if (_DAT_8004830c/*SDRAM*/ == 0) {
    _DAT_8004830c/*SDRAM*/ = 1;
    cls_105a5da4_new((cls_105a5da4 *)0x800482e0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe50/*SDRAM*/);
  }
  return 0x800482e0/*SDRAM*/;
}
