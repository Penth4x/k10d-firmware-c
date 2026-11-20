/* @k10d get_or_create_singleton_object_104b43d6 @ 0x104b43d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a pointer to a singleton object stored at 0x8004928c.
 * summary:
 *   Checks if the global flag at 0x80049290 is zero. If so, sets it to 1, calls
 *   cls_105b8204_new to construct an object at 0x8004928c, and calls
 *   prepend_to_singly_linked_list with 0x80010700. Returns the pointer 0x8004928c. The role
 *   of the specific object is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_object_104b43d6(void)

{
  if (_DAT_80049290/*SDRAM*/ == 0) {
    _DAT_80049290/*SDRAM*/ = 1;
    cls_105b8204_new((cls_105b8204 *)0x8004928c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010700/*SDRAM*/);
  }
  return 0x8004928c/*SDRAM*/;
}
