/* @k10d init_singleton_getter @ 0x10438a58
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_or_init_singleton_object)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x8001ebe0 on first call and returns its
 *   pointer.
 * summary:
 *   Checks the flag at 0x8001ebe4; if zero, sets it to 1, calls cls_105a020c_new to
 *   construct the object at 0x8001ebe0, and calls prepend_to_singly_linked_list with
 *   0x8000fc7c. Returns the pointer 0x8001ebe0 in all cases. The specific role of the
 *   object is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_singleton_getter(void)

{
  if (iRam8001ebe4 == 0) {
    iRam8001ebe4 = 1;
    cls_105a020c_new((cls_105a020c *)0x8001ebe0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc7c/*SDRAM*/);
  }
  return 0x8001ebe0/*SDRAM*/;
}
