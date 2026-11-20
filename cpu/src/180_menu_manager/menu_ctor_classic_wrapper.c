/* @k10d menu_ctor_classic_wrapper @ 0x10486b7c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_once_class_object)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a class object once using a flag latch and returns its pointer.
 * summary:
 *   Checks the flag at 0x800489b4; if zero, sets it to 1, constructs an object of class
 *   cls_105b2ed8 at 0x80048940, and calls prepend_to_singly_linked_list with 0x800102fc.
 *   Returns the pointer 0x80048940. The specific role of the object (e.g., menu) is not
 *   verifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Init-once latch wrapper (flag 0x800489b4): calls menu_ctor_classic body + registers cell
   0x800102fc */

uint32_t menu_ctor_classic_wrapper(void)

{
  if (_DAT_800489b4/*SDRAM*/ == 0) {
    _DAT_800489b4/*SDRAM*/ = 1;
    cls_105b2ed8_new((cls_105b2ed8 *)0x80048940/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800102fc/*SDRAM*/);
  }
  return 0x80048940/*SDRAM*/;
}
