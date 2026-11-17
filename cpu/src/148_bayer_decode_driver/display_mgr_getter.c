/* @k10d display_mgr_getter @ 0x1046af3a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_lazy_singleton_object)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Lazily constructs and returns a singleton object at 0x80048740.
 * summary:
 *   Checks if the global flag at 0x80048748 is zero. If so, sets it to 1, calls
 *   cls_105a8994_new to construct an object at 0x80048740, and calls
 *   prepend_to_singly_linked_list with 0x8000fe8c. Returns the pointer to the singleton
 *   object. The code shows a generic lazy initialization pattern without specific subsystem
 *   indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t display_mgr_getter(void)

{
  if (_DAT_80048748/*SDRAM*/ == 0) {
    _DAT_80048748/*SDRAM*/ = 1;
    cls_105a8994_new((void *)0x80048740/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe8c/*SDRAM*/);
  }
  return 0x80048740/*SDRAM*/;
}
