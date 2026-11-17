/* @k10d cls_105a2728_new @ 0x10453b3a
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x105a2728; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2728 (vtable 0x105a2728, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x105a2728; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a2728_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x84), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a2728/*ROM*/;
    param_1[2] = 0x105a2758/*ROM*/;
    construct_cls_105a2728_object(param_1 + 5,0);
    construct_cls_105a2728_object(param_1 + 0xc,1);
    construct_cls_105a2728_object(param_1 + 0x13,2);
    alloc_and_init_pointer_field(param_1 + 0x1a,0);
    alloc_and_init_pointer_field(param_1 + 0x1b,1);
    alloc_and_init_pointer_field(param_1 + 0x1c,2);
    alloc_and_init_pointer_field(param_1 + 0x1d,3);
    alloc_pointer_with_index(param_1 + 0x1e,0);
    alloc_pointer_with_index(param_1 + 0x1f,1);
    alloc_pointer_with_index(param_1 + 0x20,2);
  }
  return param_1;
}
