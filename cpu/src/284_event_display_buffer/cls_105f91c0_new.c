/* @k10d cls_105f91c0_new @ 0x105285a8
 * name: verified (structural evidence: heap_alloc(0x20c) when NULL; stores vtable 0x105f91c0; returns param_1)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f91c0 (vtable 0x105f91c0, 0x20c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20c) when NULL; stores vtable 0x105f91c0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105f91c0 * cls_105f91c0_new(cls_105f91c0 *param_1)

{
  if ((param_1 != (cls_105f91c0 *)0x0) ||
     (param_1 = (cls_105f91c0 *)heap_alloc((void *)0x20c), param_1 != (cls_105f91c0 *)0x0)) {
    param_1->field_0x208 = (uint32_t)&DAT_105f91c0/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    get_lens_fw_update_status();
    get_lens_fw_update_status();
  }
  return param_1;
}
