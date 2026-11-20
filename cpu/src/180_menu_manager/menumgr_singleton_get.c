/* @k10d menumgr_singleton_get @ 0x104864c8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_menu_manager_singleton)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a pointer to a singleton object at 0x80048934.
 * summary:
 *   Checks the flag at _DAT_8004893c; if zero, sets it to 1, calls cls_105b2d48_new to
 *   construct an object at 0x80048934, and calls prepend_to_singly_linked_list with
 *   0x800102e8. Returns the pointer 0x80048934. The prior note suggests this is a
 *   MenuManager, but the callee names are generic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t menumgr_singleton_get(void)

{
  if (_DAT_8004893c/*SDRAM*/ == 0) {
    _DAT_8004893c/*SDRAM*/ = 1;
    cls_105b2d48_new((cls_105b2d48 *)0x80048934/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800102e8/*SDRAM*/);
  }
  return 0x80048934/*SDRAM*/;
}
