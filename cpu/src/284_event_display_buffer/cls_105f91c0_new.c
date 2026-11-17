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

uint32_t * cls_105f91c0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20c), param_1 != (uint32_t *)0x0)) {
    param_1[0x82] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    get_lens_fw_update_status();
    get_lens_fw_update_status();
  }
  return param_1;
}
