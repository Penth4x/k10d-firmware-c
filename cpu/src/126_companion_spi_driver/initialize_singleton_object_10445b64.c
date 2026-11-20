/* @k10d initialize_singleton_object_10445b64 @ 0x10445b64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs one-time initialization of a global object at 0x8002ef98 and returns its
 *   address.
 * summary:
 *   Checks the flag at 0x8002efa4; if zero, sets it to 1, calls cls_105a1718_new to
 *   construct an object at 0x8002ef98, and calls prepend_to_singly_linked_list with
 *   0x8000fdbc. Returns the pointer 0x8002ef98. The specific role of the object is not
 *   determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_10445b64(void)

{
  if (_DAT_8002efa4/*SDRAM*/ == 0) {
    _DAT_8002efa4/*SDRAM*/ = 1;
    cls_105a1718_new((cls_105a1718 *)0x8002ef98/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fdbc/*SDRAM*/);
  }
  return 0x8002ef98/*SDRAM*/;
}
