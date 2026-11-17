/* @k10d get_first_run_screen_obj @ 0x103db21e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a singleton UI screen object at 0x8001c318.
 * summary:
 *   Checks the flag at iRam8001c340; if zero, sets it to 1, constructs an object via
 *   cls_10596808_new at 0x8001c318, and calls prepend_to_singly_linked_list with
 *   0x8000f858. Returns the pointer 0x8001c318. Used by the power-on flow to open the
 *   second first-run screen after language selection.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_first_run_screen_obj(void)

{
  if (iRam8001c340 == 0) {
    iRam8001c340 = 1;
    cls_10596808_new((uint32_t *)0x8001c318/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f858/*SDRAM*/);
  }
  return 0x8001c318/*SDRAM*/;
}
