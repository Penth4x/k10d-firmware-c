/* @k10d cls_105626c8_new @ 0x10391aac
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105626c8; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105626c8 (vtable 0x105626c8, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105626c8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105626c8_new(cls_105626c8 *param_1)

{
  if ((param_1 != (cls_105626c8 *)0x0) ||
     (param_1 = (cls_105626c8 *)heap_alloc((void *)0x18), param_1 != (cls_105626c8 *)0x0)) {
    param_1->field_0x14 = 0x105626c8/*ROM*/;
    initialize_lens_update_object(param_1,0xc);
    cls_105a2be0_new((cls_105a2be0 *)&param_1->field_0xc);
    call_helper_with_fixed_args_10391bde((uint32_t *)param_1);
  }
  return (int)param_1;
}
