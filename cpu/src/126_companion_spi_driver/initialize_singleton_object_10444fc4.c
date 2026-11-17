/* @k10d initialize_singleton_object_10444fc4 @ 0x10444fc4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a singleton object at 0x8002ef8c on first call and returns its
 *   address.
 * summary:
 *   Checks the flag at 0x8002ef94; if zero, sets it to 1, calls cls_105a1698_new to
 *   construct an object at 0x8002ef8c, and calls prepend_to_singly_linked_list with
 *   0x8000fda8. Returns the pointer 0x8002ef8c. The specific role of the object is not
 *   determinable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_singleton_object_10444fc4(void)

{
  if (_DAT_8002ef94/*SDRAM*/ == 0) {
    _DAT_8002ef94/*SDRAM*/ = 1;
    cls_105a1698_new((void *)0x8002ef8c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fda8/*SDRAM*/);
  }
  return 0x8002ef8c/*SDRAM*/;
}
