/* @k10d get_ui_root_object @ 0x1052a742
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a UI root object, initializing it on first call if the global flag
 *   is unset.
 * summary:
 *   Checks the global flag at 0x8005a800. If zero, sets it to 1, calls cls_105f9ab0_new to
 *   construct an object at 0x8005a3e8, and calls prepend_to_singly_linked_list with a
 *   parameter. Returns the pointer 0x8005a3e8. The caller ui_post_input suggests this
 *   object is the UI root or context used for posting input messages.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_ui_root_object(void)

{
  if (_DAT_8005a800/*SDRAM*/ == 0) {
    _DAT_8005a800/*SDRAM*/ = 1;
    cls_105f9ab0_new((void *)0x8005a3e8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800135e4/*SDRAM*/);
  }
  return 0x8005a3e8/*SDRAM*/;
}
