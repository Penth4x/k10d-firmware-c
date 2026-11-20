/* @k10d cls_105b572c_new @ 0x1049a5ce
 * name: verified (structural evidence: heap_alloc(0x1b8) when NULL; stores vtable 0x105b572c; returns param_1)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b572c (vtable 0x105b572c, 0x1b8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1b8) when NULL; stores vtable 0x105b572c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b572c * cls_105b572c_new(cls_105b572c *param_1)

{
  if ((param_1 != (cls_105b572c *)0x0) ||
     (param_1 = (cls_105b572c *)heap_alloc((void *)0x1b8), param_1 != (cls_105b572c *)0x0)) {
    param_1->field_0x1b4 = 0x105b572c/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    get_lens_fw_update_status((int)param_1 + 0x14, 4, 0x38, (code *)init_56_byte_struct_1049a55e);
    alloc_and_init_0xbc_object(&param_1->field_0xf4);
    param_1->field_0x1b0 = 0;
    initialize_struct_fields_1049a69c(param_1);
  }
  return param_1;
}
