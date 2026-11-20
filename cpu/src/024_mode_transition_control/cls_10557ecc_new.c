/* @k10d cls_10557ecc_new @ 0x1036dee4
 * name: verified (structural evidence: heap_alloc(0x2b8) when NULL; stores vtable 0x10557ecc; returns param_1)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557ecc (vtable 0x10557ecc, 0x2b8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2b8) when NULL; stores vtable 0x10557ecc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557ecc_new(cls_10557ecc *param_1)

{
  if ((param_1 != (cls_10557ecc *)0x0) || (param_1 = (cls_10557ecc *)heap_alloc((void *)0x2b8), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uint32_t)(&DAT_10557ecc/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x16 = 0;
    cls_10559dac_new((cls_10559dac *)&((cls_10557c88 *)param_1)->field_0x18);
    alloc_and_zero_struct_104bb416(&((cls_10557c88 *)param_1)->field_0x40);
    cls_105b9458_new((cls_105b9458 *)&((cls_10557c88 *)param_1)->field_0x9c);
    ((cls_10557c88 *)param_1)->field_0x2b0 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b1 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b2 = 0;
    ((cls_10557c88 *)param_1)->field_0x2b3 = 1;
    ((cls_10557c88 *)param_1)->field_0x2b4 = 0;
  }
  return (cls_10557c88 *)param_1;
}
