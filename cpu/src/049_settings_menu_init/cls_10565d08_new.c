/* @k10d cls_10565d08_new @ 0x103ada9c
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x10565d08; returns param_1)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565d08 (vtable 0x10565d08, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x10565d08; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10565d08_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    cls_105a2a8c_new(param_1 + 0x10);
    *param_1 = 0x10565d08/*ROM*/;
    param_1[0x11] = 0x10565da8/*ROM*/;
    *(uint8_t *)(param_1 + 0x12) = 0;
    *(uint8_t *)((int)param_1 + 0x49) = 0;
    *(uint16_t *)((int)param_1 + 0x4a) = 0;
    *(uint16_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4e) = 0;
    *(uint8_t *)((int)param_1 + 0x4f) = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x15] = 300;
  }
  return param_1;
}
