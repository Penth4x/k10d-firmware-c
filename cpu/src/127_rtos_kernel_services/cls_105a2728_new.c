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

cls_1059e2e0 * cls_105a2728_new(cls_105a2728 *param_1)

{
  if ((param_1 != (cls_105a2728 *)0x0) ||
     (param_1 = (cls_105a2728 *)heap_alloc((void *)0x84), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a2728/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a2758/*ROM*/;
    construct_cls_105a2728_object(&((cls_1059e2e0 *)param_1)->field4_0x14,0);
    construct_cls_105a2728_object(&((cls_1059e2e0 *)param_1)->field27_0x30,1);
    construct_cls_105a2728_object(&((cls_1059e2e0 *)param_1)->field52_0x4c,2);
    alloc_and_init_pointer_field(&((cls_1059e2e0 *)param_1)->field77_0x68,0);
    alloc_and_init_pointer_field(&((cls_1059e2e0 *)param_1)->field78_0x6c,1);
    alloc_and_init_pointer_field(&((cls_1059e2e0 *)param_1)->field_0x70,2);
    alloc_and_init_pointer_field(&((cls_1059e2e0 *)param_1)->field85_0x74,3);
    alloc_pointer_with_index(&((cls_1059e2e0 *)param_1)->field86_0x78,0);
    alloc_pointer_with_index(((uint32_t *)&((((cls_1059e2e0 *)param_1)->field86_0x78)) + 1),1);
    alloc_pointer_with_index(&((cls_1059e2e0 *)param_1)->field87_0x80,2);
  }
  return (cls_1059e2e0 *)param_1;
}
