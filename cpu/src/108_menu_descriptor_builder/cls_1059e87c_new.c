/* @k10d cls_1059e87c_new @ 0x1042ba02
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1059e87c; returns param_1)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e87c (vtable 0x1059e87c, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1059e87c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059e87c_new(uint32_t *param_1,uint8_t param_2,uint8_t param_3)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e4b0_new((void *)param_1);
    *param_1 = 0x1059e87c/*ROM*/;
    *(uint8_t *)(param_1 + 1) = 1;
    *(uint8_t *)((int)param_1 + 5) = param_2;
    *(uint8_t *)((int)param_1 + 6) = param_3;
  }
  return param_1;
}
