/* @k10d get_language_select_screen @ 0x103de2ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a singleton pointer to the language-select UI screen object, initializing it on
 *   first call.
 * summary:
 *   Checks the global flag at 0x8001c3b8; if zero, sets it to 1, constructs an object at
 *   0x8001c394 via cls_105969f8_new, and calls prepend_to_singly_linked_list with
 *   0x8000f894. Returns the pointer 0x8001c394. The caller screen_launch_by_id uses this
 *   for the first-run language-select screen (id 0x10001).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_language_select_screen(void)

{
  if (_DAT_8001c3b8/*SDRAM*/ == 0) {
    _DAT_8001c3b8/*SDRAM*/ = 1;
    cls_105969f8_new((cls_105969f8 *)0x8001c394/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f894/*SDRAM*/);
  }
  return 0x8001c394/*SDRAM*/;
}
