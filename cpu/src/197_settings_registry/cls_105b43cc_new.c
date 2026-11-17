/* @k10d cls_105b43cc_new @ 0x1049308a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105b43cc; returns param_1)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b43cc (vtable 0x105b43cc, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105b43cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b43cc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b43cc/*ROM*/;
    alloc_and_zero_two_words_1045bc0e(param_1 + 4);
    cls_105a5c2c_new(param_1 + 6,0);
    param_1[0xc] = 0;
    *(uint16_t *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 7;
  }
  return param_1;
}
