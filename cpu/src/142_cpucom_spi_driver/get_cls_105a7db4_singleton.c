/* @k10d get_cls_105a7db4_singleton @ 0x10466626
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Lazily constructs and returns a singleton instance of class cls_105a7db4.
 * summary:
 *   Checks the global flag _DAT_8004873c; if zero, sets it to 1, constructs a cls_105a7db4
 *   object at 0x80048720, and calls prepend_to_singly_linked_list with 0x8000fe78. Returns
 *   the pointer to the instance at 0x80048720. This is a standard lazy-initialization
 *   singleton accessor for the class defined by vtable 0x105a7db4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_cls_105a7db4_singleton(void)

{
  if (_DAT_8004873c/*SDRAM*/ == 0) {
    _DAT_8004873c/*SDRAM*/ = 1;
    cls_105a7db4_new((cls_105a7db4 *)0x80048720/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe78/*SDRAM*/);
  }
  return 0x80048720/*SDRAM*/;
}
