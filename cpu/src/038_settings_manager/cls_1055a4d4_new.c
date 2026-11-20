/* @k10d cls_1055a4d4_new @ 0x10390fea
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1055a4d4; returns param_1)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a4d4 (vtable 0x1055a4d4, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1055a4d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_1055a4d4_new(cls_1055a4d4 *param_1)

{
  if ((param_1 != (cls_1055a4d4 *)0x0) ||
     (param_1 = (cls_1055a4d4 *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_1055a4d4/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
