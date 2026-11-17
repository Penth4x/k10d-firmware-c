/* @k10d get_lens_fw_update_object @ 0x1053683e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Lazily constructs and returns a singleton instance of the lens firmware update class.
 * summary:
 *   Checks the global flag _DAT_8005b2ac; if zero, sets it to 1, calls cls_10621d20_new to
 *   allocate the object at 0x8005b234, and initializes it via
 *   prepend_to_singly_linked_list. Returns the pointer to the object at 0x8005b234. This is
 *   a standard singleton accessor for the lens firmware update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_lens_fw_update_object(void)

{
  if (_DAT_8005b2ac/*SDRAM*/ == 0) {
    _DAT_8005b2ac/*SDRAM*/ = 1;
    cls_10621d20_new((uint32_t *)0x8005b234/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80014970/*SDRAM*/);
  }
  return 0x8005b234/*SDRAM*/;
}
