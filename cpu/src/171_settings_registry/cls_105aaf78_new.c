/* @k10d cls_105aaf78_new @ 0x1047f6e4
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105aaf78; returns param_1)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaf78 (vtable 0x105aaf78, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105aaf78; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047f700) overlaps instruction at (ram,0x1047f6fe)
    */

int cls_105aaf78_new(cls_105aaf78 *param_1,uint32_t param_2)

{
  if ((param_1 != (cls_105aaf78 *)0x0) ||
     (param_1 = (cls_105aaf78 *)heap_alloc((void *)8), (cls_105aaf60 *)param_1 != (cls_105aaf60 *)0x0)) {
    cls_105aaf60_new((cls_105aaf60 *)param_1,(void *)(param_2));
    ((cls_105aaf60 *)param_1)->field_0x4 = 0x105aaf78/*ROM*/;
  }
  return (int)param_1;
}
