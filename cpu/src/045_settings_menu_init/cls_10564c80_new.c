/* @k10d cls_10564c80_new @ 0x103a42d4
 * name: verified (structural evidence: heap_alloc(0x68) when NULL; stores vtable 0x10564c80; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564c80 (vtable 0x10564c80, 0x68 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x68) when NULL; stores vtable 0x10564c80; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10564c80_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x68), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10564c80/*ROM*/;
    initialize_lens_update_object(param_1 + 0x10,0x10);
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint16_t *)(param_1 + 0x17) = 0x140;
    *(uint16_t *)((int)param_1 + 0x5e) = 0xf0;
    *(uint16_t *)(param_1 + 0x18) = 0;
    *(uint16_t *)((int)param_1 + 0x62) = 0;
    *(uint8_t *)(param_1 + 0x19) = 1;
    *(uint8_t *)((int)param_1 + 0x65) = 0;
    *(uint8_t *)((int)param_1 + 0x66) = 0;
    *(uint8_t *)((int)param_1 + 0x67) = 0;
  }
  return param_1;
}
