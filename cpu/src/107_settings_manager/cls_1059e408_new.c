/* @k10d cls_1059e408_new @ 0x10427cb6
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1059e408; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e408 (vtable 0x1059e408, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1059e408; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e3e0 * cls_1059e408_new(cls_1059e408 *param_1)

{
  if ((param_1 != (cls_1059e408 *)0x0) ||
     (param_1 = (cls_1059e408 *)heap_alloc((void *)8), (cls_1059e3e0 *)param_1 != (cls_1059e3e0 *)0x0)) {
    cls_1059e3e0_new((cls_1059e3e0 *)param_1);
    ((cls_1059e3e0 *)param_1)->field_0x0 = (uint32_t)&DAT_1059e408/*ROM*/;
    ((cls_1059e3e0 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e3e0 *)param_1;
}
