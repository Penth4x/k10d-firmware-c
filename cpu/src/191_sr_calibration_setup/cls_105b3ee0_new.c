/* @k10d cls_105b3ee0_new @ 0x1048ed3c
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105b3ee0; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3ee0 (vtable 0x105b3ee0, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105b3ee0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3ee0_new(cls_105b3ee0 *obj_ptr)

{
  if ((obj_ptr != (cls_105b3ee0 *)0x0) ||
     (obj_ptr = (cls_105b3ee0 *)heap_alloc((void *)0x34), obj_ptr != (cls_105b3ee0 *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)obj_ptr);
    obj_ptr->field_0x20 = (uint32_t)&DAT_105b3ee0/*ROM*/;
    obj_ptr->field_0x24 = 7;
    obj_ptr->field_0x26 = 0;
    obj_ptr->field_0x28 = 0;
    obj_ptr->field_0x2a = 0;
    obj_ptr->field_0x2c = 0;
    obj_ptr->field_0x30 = 0;
    obj_ptr->field_0x32 = 0;
  }
  return (int)obj_ptr;
}
