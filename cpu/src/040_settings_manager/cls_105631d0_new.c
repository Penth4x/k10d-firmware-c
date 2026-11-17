/* @k10d cls_105631d0_new @ 0x1039774e
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105631d0; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105631d0 (vtable 0x105631d0, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105631d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105631d0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x70), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_105631d0/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10563240/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10563268/*ROM*/;
    param_1[9] = 0;
    initialize_lens_update_object(param_1 + 10,0x10);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(uint16_t *)(param_1 + 0x19) = 0;
    *(uint16_t *)((int)param_1 + 0x66) = 0;
    *(uint16_t *)(param_1 + 0x1a) = 1;
    *(uint16_t *)((int)param_1 + 0x6a) = 1;
    *(uint16_t *)(param_1 + 0x1b) = 1;
    *(uint8_t *)((int)param_1 + 0x6e) = 0;
    init_object_fields(param_1);
  }
  return param_1;
}
