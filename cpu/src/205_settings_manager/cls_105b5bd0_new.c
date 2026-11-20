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

cls_105b5bd0 * cls_105b5bd0_new(cls_105b5bd0 *param_1)

{
  if ((param_1 != (cls_105b5bd0 *)0x0) ||
     (param_1 = (cls_105b5bd0 *)heap_alloc((void *)100), param_1 != (cls_105b5bd0 *)0x0)) {
    cls_105b6358_new((cls_105b6358 *)param_1);
    param_1->field_0x1c = 0x105b5bd0/*ROM*/;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    cls_105b68e8_new((cls_105b68e8 *)&param_1->field_0x28);
    param_1->field_0x3c = 0;
    get_lens_fw_update_status((int)param_1 + 0x40, 2, 0xc, (code *)alloc_and_zero_twelve_bytes_1049f548);
    initialize_lens_update_object(&param_1->field_0x58,0xc);
  }
  return param_1;
}
