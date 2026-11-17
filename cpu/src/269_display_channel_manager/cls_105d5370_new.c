/* @k10d cls_105d5370_new @ 0x1050936e
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105d5370; returns param_1)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d5370 (vtable 0x105d5370, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105d5370; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d5370_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105d5370/*ROM*/;
    *(uint8_t *)(param_1 + 1) = 0;
    *(uint8_t *)((int)param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 6) = 0;
    *(uint16_t *)(param_1 + 2) = 0;
    *(uint16_t *)((int)param_1 + 10) = 0;
    *(uint16_t *)(param_1 + 3) = 0;
    *(uint16_t *)((int)param_1 + 0xe) = 0;
    *(uint16_t *)(param_1 + 4) = 0;
    *(uint8_t *)((int)param_1 + 0x12) = 1;
    *(uint16_t *)(param_1 + 5) = 0;
    *(uint16_t *)((int)param_1 + 0x16) = 0;
    param_1[6] = 0;
  }
  return param_1;
}
