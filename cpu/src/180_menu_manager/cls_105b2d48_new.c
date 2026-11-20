/* @k10d cls_105b2d48_new @ 0x1048665e
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b2d48; returns param_1)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2d48 (vtable 0x105b2d48, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b2d48; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Object factory: if param nonzero OR setting[8]!=0, allocate menu-manager object with vtable
   0x105b2d48 */

cls_1059e380 * cls_105b2d48_new(cls_105b2d48 *param_1)

{
  if ((param_1 != (cls_105b2d48 *)0x0) ||
     (param_1 = (cls_105b2d48 *)heap_alloc((void *)8), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105b2d48/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
  }
  return (cls_1059e380 *)param_1;
}
