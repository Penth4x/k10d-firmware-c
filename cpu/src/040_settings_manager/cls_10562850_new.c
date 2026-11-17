/* @k10d cls_10562850_new @ 0x1039286a
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x10562850; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562850 (vtable 0x10562850, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x10562850; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562850_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x84), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562850/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    cls_10563348_new(param_1 + 3);
    alloc_and_zero_two_words_1045c3bc(param_1 + 0x1d);
    param_1[0x1f] = 0;
    *(uint8_t *)(param_1 + 0x20) = 0;
  }
  return param_1;
}
