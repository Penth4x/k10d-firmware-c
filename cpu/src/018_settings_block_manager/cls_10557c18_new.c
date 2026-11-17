/* @k10d cls_10557c18_new @ 0x1036b1c4
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x10557c18; returns param_1)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557c18 (vtable 0x10557c18, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x10557c18; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557c18_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557c18/*ROM*/;
    cls_10559678_new(param_1 + 5);
  }
  return param_1;
}
