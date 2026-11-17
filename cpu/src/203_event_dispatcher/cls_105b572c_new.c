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

uint32_t * cls_105b572c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1b8), param_1 != (uint32_t *)0x0)) {
    param_1[0x6d] = 0x105b572c/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    get_lens_fw_update_status();
    alloc_and_init_0xbc_object(param_1 + 0x3d);
    param_1[0x6c] = 0;
    initialize_struct_fields_1049a69c(param_1);
  }
  return param_1;
}
