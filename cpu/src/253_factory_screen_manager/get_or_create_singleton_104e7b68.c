/* @k10d get_or_create_singleton_104e7b68 @ 0x104e7b68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x80059f4c and returns its pointer.
 * summary:
 *   Checks the flag at _DAT_80059f58; if zero, sets it to 1, calls cls_105c14c8_new to
 *   construct an object at 0x80059f4c, and calls prepend_to_singly_linked_list with
 *   0x80010c44. Returns the pointer 0x80059f4c. The specific role of the singleton is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_create_singleton_104e7b68(void)

{
  if (_DAT_80059f58/*SDRAM*/ == 0) {
    _DAT_80059f58/*SDRAM*/ = 1;
    cls_105c14c8_new((cls_105c14c8 *)0x80059f4c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010c44/*SDRAM*/);
  }
  return 0x80059f4c/*SDRAM*/;
}
