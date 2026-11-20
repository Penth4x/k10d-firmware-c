/* @k10d cls_105ab7d8_new @ 0x1048318a
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105ab7d8; returns param_1)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab7d8 (vtable 0x105ab7d8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105ab7d8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105ab7d8_new(cls_105ab7d8 *param_1)

{
  if ((param_1 != (cls_105ab7d8 *)0x0) ||
     (param_1 = (cls_105ab7d8 *)heap_alloc((void *)0x14), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105ab7d8/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field2_0x8 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field3_0xc = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field4_0x10 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
