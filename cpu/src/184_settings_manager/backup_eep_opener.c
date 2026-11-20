/* @k10d backup_eep_opener @ 0x10489014
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_or_init_singleton_object)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a global object at 0x80048bc0, initializing it on first call.
 * summary:
 *   Checks the flag at 0x80048c14; if zero, sets it to 1, calls cls_105b3658_new to
 *   construct the object at 0x80048bc0, and calls prepend_to_singly_linked_list with
 *   0x80010374. Returns the object pointer 0x80048bc0. Acts as a lazy-initialization
 *   accessor for a singleton.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t backup_eep_opener(void)

{
  if (_DAT_80048c14/*SDRAM*/ == 0) {
    _DAT_80048c14/*SDRAM*/ = 1;
    cls_105b3658_new((cls_105b3658 *)0x80048bc0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80010374/*SDRAM*/);
  }
  return 0x80048bc0/*SDRAM*/;
}
