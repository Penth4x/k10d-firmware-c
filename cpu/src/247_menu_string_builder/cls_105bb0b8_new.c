/* @k10d cls_105bb0b8_new @ 0x104ddfa6
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105bb0b8; returns param_1)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bb0b8 (vtable 0x105bb0b8, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105bb0b8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bb0b8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    param_1[7] = 0x105bb0b8/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}
