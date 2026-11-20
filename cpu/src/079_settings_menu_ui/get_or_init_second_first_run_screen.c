/* @k10d get_or_init_second_first_run_screen @ 0x103db21e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a static screen object, initializing it once on first call.
 * summary:
 *   Checks a RAM flag (iRam8001c340); if zero, sets it to 1, constructs an object at
 *   0x8001c318 via cls_10596808_new, and prepends a node to a singly linked list at
 *   0x8000f858. Always returns the pointer 0x8001c318. Called by screen_launch_by_id and
 *   language_screen_on_event to obtain the second first-run screen object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_second_first_run_screen(void)

{
  if (iRam8001c340 == 0) {
    iRam8001c340 = 1;
    cls_10596808_new((cls_10596808 *)0x8001c318/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f858/*SDRAM*/);
  }
  return 0x8001c318/*SDRAM*/;
}
