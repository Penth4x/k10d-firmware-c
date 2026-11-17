/* @k10d cls_105d5104_new @ 0x105069c2
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105d5104; returns param_1)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d5104 (vtable 0x105d5104, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105d5104; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d5104_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e458_new(param_1 + 1);
    cls_1059e408_new(param_1 + 2);
    *param_1 = 0x105d5104/*ROM*/;
    param_1[1] = 0x105d5144/*ROM*/;
    param_1[2] = 0x105d5164/*ROM*/;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    cls_105a2af8_new(param_1 + 7);
  }
  return param_1;
}
