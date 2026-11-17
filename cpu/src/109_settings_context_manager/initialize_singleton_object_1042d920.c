/* @k10d initialize_singleton_object_1042d920 @ 0x1042d920
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object at 0x8001e220 on first call and returns its pointer.
 * summary:
 *   Checks the flag at 0x8001e258; if zero, sets it to 1, calls cls_1059ebd0_new to
 *   construct an object at 0x8001e220, and calls prepend_to_singly_linked_list with
 *   0x8000fc54. Returns the pointer 0x8001e220. The specific subsystem role is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_1042d920(void)

{
  if (_DAT_8001e258/*SDRAM*/ == 0) {
    _DAT_8001e258/*SDRAM*/ = 1;
    cls_1059ebd0_new((void *)0x8001e220/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc54/*SDRAM*/);
  }
  return 0x8001e220/*SDRAM*/;
}
