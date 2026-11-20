/* @k10d dispatch_virtual_and_call_helper @ 0x1043bd74
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   If param_2 is below 0x40, invokes a virtual method on an object and calls a helper with
 *   a computed value.
 * summary:
 *   The function checks if param_2 is less than 0x40. If true, it performs a virtual call
 *   on the object pointed to by param_1, using the vtable pointer at offset 4 and the
 *   method at offset 0x2c. It then calls wait_for_sci_transmit_complete with param_1, a
 *   value derived from param_2 (param_2 * 0x407 - 1), and the constant 0xa00. It returns
 *   the result of the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

bool dispatch_virtual_and_call_helper(cls_105a04cc *param_1,uint param_2)

{
  if (param_2 < 0x40) {
    (((vtbl_entry*)(param_1->field_0x4))[5].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj);
    wait_for_sci_transmit_complete(param_1,(short)param_2 * 0x407 + -1,0xa00);
  }
  return param_2 < 0x40;
}
