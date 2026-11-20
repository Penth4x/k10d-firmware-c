/* @k10d cls_105d6574_new @ 0x10517e36
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105d6574; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6574 (vtable 0x105d6574, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105d6574; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6358 * cls_105d6574_new(cls_105d6574 *param_1)

{
  if ((param_1 != (cls_105d6574 *)0x0) ||
     (param_1 = (cls_105d6574 *)heap_alloc((void *)0x5c), (cls_105b6358 *)param_1 != (cls_105b6358 *)0x0)) {
    cls_105b6358_new((cls_105b6358 *)param_1);
    ((cls_105b6358 *)param_1)->field_0x1c = 0x105d6574/*ROM*/;
    ((cls_105b6358 *)param_1)->field_0x20 = 0;
    cls_105b68e8_new((cls_105b68e8 *)&((cls_105b6358 *)param_1)->field_0x24);
    get_lens_fw_update_status((int)param_1 + 0x38, 3, 0xc, (code *)alloc_and_zero_twelve_bytes_10517dfa);
  }
  return (cls_105b6358 *)param_1;
}
