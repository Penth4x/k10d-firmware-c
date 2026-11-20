/* @k10d get_or_create_singleton_104ce316 @ 0x104ce316
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a global object, initializing it on first call.
 * summary:
 *   Checks the global flag at 0x80059c94. If it is zero, sets it to 1, calls
 *   cls_105b9634_new to construct an object at 0x80059c8c, and calls
 *   prepend_to_singly_linked_list with 0x800107c8. Returns the pointer 0x80059c8c. This is
 *   a standard lazy-initialization singleton pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_104ce316(void)

{
  if (_DAT_80059c94/*SDRAM*/ == 0) {
    _DAT_80059c94/*SDRAM*/ = 1;
    cls_105b9634_new((cls_105b9634 *)0x80059c8c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800107c8/*SDRAM*/);
  }
  return 0x80059c8c/*SDRAM*/;
}
