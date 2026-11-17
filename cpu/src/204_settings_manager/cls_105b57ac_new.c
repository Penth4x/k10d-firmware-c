/* @k10d cls_105b57ac_new @ 0x1049b134
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105b57ac; returns param_1)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b57ac (vtable 0x105b57ac, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105b57ac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b57ac_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105b57ac/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return param_1;
}
