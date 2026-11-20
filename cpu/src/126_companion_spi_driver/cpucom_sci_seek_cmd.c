/* @k10d cpucom_sci_seek_cmd @ 0x1043bd36
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed send_scaled_value_if_below_limit)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   If param_2 is below 0x7c2, invokes a virtual method on an object and calls
 *   wait_for_sci_transmit_complete with a scaled value.
 * summary:
 *   The function checks if param_2 is less than 0x7c2. If true, it performs a virtual call
 *   on an object pointed to by *(param_1 + 4) using slot 0x2c, passing a this-adjusted
 *   pointer. It then calls wait_for_sci_transmit_complete with param_1, a value computed as
 *   (short)param_2 * 0x21 - 1, and 0. Finally, it returns the result of the initial
 *   comparison. The specific subsystem (e.g., CPUCOM/SCI) is not confirmed by the provided
 *   callee names, so a mechanical name is used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

bool cpucom_sci_seek_cmd(cls_105a04cc *param_1,uint param_2)

{
  if (param_2 < 0x7c2) {
    (((vtbl_entry*)(param_1->field_0x4))[5].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj);
    wait_for_sci_transmit_complete(param_1,(short)param_2 * 0x21 + -1,0);
  }
  return param_2 < 0x7c2;
}
