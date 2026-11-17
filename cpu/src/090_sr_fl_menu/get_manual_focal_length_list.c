/* @k10d get_manual_focal_length_list @ 0x103feefc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a pointer to a static object holding the manual focal-
 *   length list.
 * summary:
 *   Checks the flag at 0x8001ce40; if zero, sets it to 1, constructs an object at
 *   0x8001ce1c via cls_105983cc_new, and calls prepend_to_singly_linked_list with
 *   0x8000faf0. Returns the pointer 0x8001ce1c. The caller screen_launch_by_id uses this
 *   for the screen whose code uses the manual focal-length list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_manual_focal_length_list(void)

{
  if (iRam8001ce40 == 0) {
    iRam8001ce40 = 1;
    cls_105983cc_new((uint32_t *)0x8001ce1c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000faf0/*SDRAM*/);
  }
  return 0x8001ce1c/*SDRAM*/;
}
