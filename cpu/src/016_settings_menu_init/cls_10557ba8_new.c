/* @k10d cls_10557ba8_new @ 0x1036aba8
 * name: verified (structural evidence: heap_alloc(0x98) when NULL; stores vtable 0x10557ba8; returns param_1)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557ba8 (vtable 0x10557ba8, 0x98 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x98) when NULL; stores vtable 0x10557ba8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557ba8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x98), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557ba8/*ROM*/;
    cls_105595a8_new(param_1 + 5);
    alloc_and_zero_struct_104bb416(param_1 + 0xf);
  }
  return param_1;
}
