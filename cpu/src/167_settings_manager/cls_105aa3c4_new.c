/* @k10d cls_105aa3c4_new @ 0x10474d36
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105aa3c4; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa3c4 (vtable 0x105aa3c4, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105aa3c4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa3c4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105aa3c4/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
