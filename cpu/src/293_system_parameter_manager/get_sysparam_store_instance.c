/* @k10d get_sysparam_store_instance @ 0x10534f32
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes and returns a pointer to the system parameter store object.
 * summary:
 *   Checks the initialization flag at 0x8005b1d0; if unset, sets it to 1, constructs the
 *   store object at 0x8005b160 via cls_1062112c_new, and calls
 *   prepend_to_singly_linked_list with a parameter pointer. Returns the address of the
 *   store object (0x8005b160) in all cases. This acts as a singleton accessor for the
 *   system parameter configuration module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_sysparam_store_instance(void)

{
  if (_DAT_8005b1d0/*SDRAM*/ == 0) {
    _DAT_8005b1d0/*SDRAM*/ = 1;
    cls_1062112c_new((cls_1062112c *)0x8005b160/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x80014908/*SDRAM*/);
  }
  return 0x8005b160/*SDRAM*/;
}
