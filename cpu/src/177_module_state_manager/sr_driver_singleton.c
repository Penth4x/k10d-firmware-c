/* @k10d sr_driver_singleton @ 0x10483fc6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_sr_driver_singleton)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a singleton object at 0x800488fc, initializing it on first call.
 * summary:
 *   Checks the flag at 0x80048904; if zero, sets it to 1, calls cls_105ab8d4_new to
 *   construct the object at 0x800488fc, and calls prepend_to_singly_linked_list with
 *   0x8001007c. Returns the object pointer 0x800488fc. Prior notes identify this as the SR
 *   (Shake Reduction) driver singleton, which aligns with the camera subsystem context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SR driver object singleton getter (obj @RAM 0x800488fc, 30-u32 array at +0x10). */

uint32_t sr_driver_singleton(void)

{
  if (_DAT_80048904/*SDRAM*/ == 0) {
    _DAT_80048904/*SDRAM*/ = 1;
    cls_105ab8d4_new((void *)0x800488fc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001007c/*SDRAM*/);
  }
  return 0x800488fc/*SDRAM*/;
}
