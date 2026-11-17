/* @k10d get_lens_fw_update_singleton @ 0x10536444
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Lazily constructs and returns a singleton instance of the lens firmware update
 *   controller class.
 * summary:
 *   Checks the global flag at 0x8005b230; if zero, sets it to 1, calls cls_10621c8c_new to
 *   allocate the object at 0x8005b1e0, and initializes it via
 *   prepend_to_singly_linked_list. Returns the pointer to the singleton object. The module
 *   context indicates this is the controller for lens CPU firmware updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_lens_fw_update_singleton(void)

{
  if (_DAT_8005b230/*SDRAM*/ == 0) {
    _DAT_8005b230/*SDRAM*/ = 1;
    cls_10621c8c_new((uint32_t *)0x8005b1e0/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8001495c/*SDRAM*/);
  }
  return 0x8005b1e0/*SDRAM*/;
}
