/* @k10d cls_10564530_new @ 0x1039fe1e
 * name: verified (structural evidence: heap_alloc(0xa0) when NULL; stores vtable 0x10564530; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564530 (vtable 0x10564530, 0xa0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xa0) when NULL; stores vtable 0x10564530; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10564530_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa0), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10564530/*ROM*/;
    initialize_lens_update_object(param_1 + 0x10,0x10);
    param_1[0x14] = 0;
    *(uint16_t *)(param_1 + 0x15) = 0x2b;
    *(uint16_t *)((int)param_1 + 0x56) = 0x30;
    *(uint16_t *)(param_1 + 0x16) = 0x23;
    *(uint16_t *)((int)param_1 + 0x5a) = 2;
    *(uint16_t *)(param_1 + 0x17) = 2;
    *(uint16_t *)((int)param_1 + 0x5e) = 0x23;
    *(uint16_t *)(param_1 + 0x18) = 0x27;
    *(uint16_t *)((int)param_1 + 0x62) = 0x2b;
    *(uint16_t *)(param_1 + 0x19) = 0x1d;
    *(uint16_t *)((int)param_1 + 0x66) = 0x3c;
    *(uint16_t *)(param_1 + 0x1a) = 0x3c;
    *(uint16_t *)((int)param_1 + 0x6a) = 0x1d;
    *(uint16_t *)(param_1 + 0x1b) = 0x24;
    *(uint16_t *)((int)param_1 + 0x6e) = 6;
    *(uint16_t *)(param_1 + 0x1c) = 0x25;
    *(uint16_t *)((int)param_1 + 0x72) = 6;
    *(uint16_t *)(param_1 + 0x1d) = 0x25;
    *(uint16_t *)((int)param_1 + 0x76) = 6;
    *(uint16_t *)(param_1 + 0x1e) = 0x27;
    *(uint16_t *)((int)param_1 + 0x7a) = 7;
    *(uint16_t *)(param_1 + 0x1f) = 0x1a;
    *(uint16_t *)((int)param_1 + 0x7e) = 0x25;
    *(uint16_t *)(param_1 + 0x20) = 0x1a;
    *(uint16_t *)((int)param_1 + 0x82) = 0x25;
    *(uint16_t *)(param_1 + 0x21) = 0;
    *(uint16_t *)((int)param_1 + 0x86) = 0x24;
    *(uint16_t *)(param_1 + 0x22) = 6;
    *(uint16_t *)((int)param_1 + 0x8a) = 0x25;
    *(uint16_t *)(param_1 + 0x23) = 6;
    param_1[0x24] = 4000;
    param_1[0x25] = 4000;
    param_1[0x26] = 4000;
    param_1[0x27] = 4000;
  }
  return param_1;
}
