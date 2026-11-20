/* @k10d initialize_sram_object @ 0x10409482
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global SDRAM object at 0x8001cea8 on first call.
 * summary:
 *   Checks if the global iRam8001cecc is zero; if so, sets it to 1, calls cls_10599a88_new
 *   to construct an object at 0x8001cea8, and calls prepend_to_singly_linked_list with
 *   0x8000fb20. Returns the pointer 0x8001cea8. The specific role of the object is not
 *   determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_sram_object(void)

{
  if (iRam8001cecc == 0) {
    iRam8001cecc = 1;
    cls_10599a88_new((cls_10599a88 *)0x8001cea8/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fb20/*SDRAM*/);
  }
  return 0x8001cea8/*SDRAM*/;
}
