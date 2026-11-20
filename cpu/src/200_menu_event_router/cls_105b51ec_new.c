/* @k10d cls_105b51ec_new @ 0x10496868
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b51ec; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b51ec (vtable 0x105b51ec, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b51ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e490 * cls_105b51ec_new(cls_105b51ec *param_1)

{
  if ((param_1 != (cls_105b51ec *)0x0) ||
     (param_1 = (cls_105b51ec *)heap_alloc((void *)4), param_1 != (cls_105b51ec *)0x0)) {
    cls_1059e490_new((cls_1059e490 *)param_1);
    ((cls_1059e490 *)param_1)->field_0x0 = (uint8_t)&DAT_105b51ec/*ROM*/;
  }
  return (cls_1059e490 *)param_1;
}
