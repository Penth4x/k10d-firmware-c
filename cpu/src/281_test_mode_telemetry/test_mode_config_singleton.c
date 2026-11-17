/* @k10d test_mode_config_singleton @ 0x105228fc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_config_object)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a singleton configuration object, initializing it on first access.
 * summary:
 *   Checks the global flag at 0x8005a3e4; if zero, sets it to 1, constructs a cls_105d8c08
 *   object at 0x8005a3dc, and calls prepend_to_singly_linked_list with 0x800134d0. Returns
 *   the pointer to the object at 0x8005a3dc. The specific role of the configuration object
 *   is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t test_mode_config_singleton(void)

{
                    /* Purpose: Test mode config singleton. One-time init: if _DAT_8005a3e4 == 0,
                       sets it to 1, calls cls_105d8c08_new(0x8005a3dc) (config ctor) and
                       prepend_to_singly_linked_list(0x800134d0) (register with menu system). Returns config object
                       at 0x8005a3dc.\nReturns: pointer to test-mode config singleton. */
  if (_DAT_8005a3e4/*SDRAM*/ == 0) {
    _DAT_8005a3e4/*SDRAM*/ = 1;
    cls_105d8c08_new((void *)0x8005a3dc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800134d0/*SDRAM*/);
  }
  return 0x8005a3dc/*SDRAM*/;
}
