/* @k10d get_or_init_singleton_object_103c74d0 @ 0x103c74d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 057_capture_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Lazily constructs a singleton object at 0x8001bec0 on first call and returns its
 *   pointer.
 * summary:
 *   Checks the flag at 0x8001bee4; if zero, sets it to 1, calls cls_10595788_new to
 *   construct an object at 0x8001bec0, and calls prepend_to_singly_linked_list with
 *   0x8000f63c. Returns the pointer 0x8001bec0. The specific role of the constructed object
 *   and the second callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_object_103c74d0(void)

{
  if (_DAT_8001bee4/*SDRAM*/ == 0) {
    _DAT_8001bee4/*SDRAM*/ = 1;
    cls_10595788_new((cls_10595788 *)0x8001bec0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f63c/*SDRAM*/);
  }
  return 0x8001bec0/*SDRAM*/;
}
