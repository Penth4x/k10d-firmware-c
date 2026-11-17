/* @k10d cls_105b5bd0_new @ 0x1049f584
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105b5bd0; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5bd0 (vtable 0x105b5bd0, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105b5bd0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b5bd0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_105b6358_new(param_1);
    param_1[7] = 0x105b5bd0/*ROM*/;
    param_1[8] = 0;
    param_1[9] = 0;
    cls_105b68e8_new(param_1 + 10);
    *(uint16_t *)(param_1 + 0xf) = 0;
    get_lens_fw_update_status();
    initialize_lens_update_object(param_1 + 0x16,0xc);
  }
  return param_1;
}
