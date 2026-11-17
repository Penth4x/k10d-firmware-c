/* @k10d get_or_init_singleton_10491b82 @ 0x10491b82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a global object, initializing it once on first call.
 * summary:
 *   Checks the global flag _DAT_80048f1c; if zero, sets it to 1 and calls two unknown
 *   initializers (construct_event_handler_list with arg 0x80048ef8 and
 *   prepend_to_singly_linked_list with arg 0x8001048c). Always returns the constant pointer
 *   0x80048ef8. The caller is a verified class constructor, suggesting this provides a
 *   shared instance or context for that class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10491b82(void)

{
  if (_DAT_80048f1c/*SDRAM*/ == 0) {
    _DAT_80048f1c/*SDRAM*/ = 1;
    construct_event_handler_list((void *)0x80048ef8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001048c/*SDRAM*/);
  }
  return 0x80048ef8/*SDRAM*/;
}
