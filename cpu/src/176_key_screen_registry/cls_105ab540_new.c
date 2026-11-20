/* @k10d cls_105ab540_new @ 0x10481d98
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105ab540; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab540 (vtable 0x105ab540, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105ab540; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105ab540_new(cls_105ab540 *param_1)

{
  if ((param_1 != (cls_105ab540 *)0x0) ||
     (param_1 = (cls_105ab540 *)heap_alloc((void *)0x34), param_1 != (cls_105ab540 *)0x0)) {
    cls_105aaf18_new((cls_105aaf18 *)param_1);
    ((cls_105aaf18 *)param_1)->field_0x30 = 0x105ab540/*ROM*/;
  }
  return (int)(cls_105aaf18 *)param_1;
}
