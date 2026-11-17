/* @k10d cls_105d3f20_new @ 0x104f4c3a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105d3f20; returns param_1)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d3f20 (vtable 0x105d3f20, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105d3f20; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d3f20_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105d3f20/*ROM*/;
    param_1[1] = 0x105d3f58/*ROM*/;
    param_1[6] = 0x105d3f70/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    cls_105a2af8_new(param_1 + 0xe);
  }
  return param_1;
}
