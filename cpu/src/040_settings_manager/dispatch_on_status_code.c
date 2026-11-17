/* @k10d dispatch_on_status_code @ 0x10393146
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a status getter and, if the result equals 0x5060003, forwards the argument to a
 *   handler.
 * summary:
 *   The function invokes read_field_at_offset_0xf4 to obtain an integer status or event
 *   code. If that code is exactly 0x5060003, it calls store_and_dispatch_state_value
 *   passing the original param_1 argument. Otherwise it returns without further action. The
 *   specific subsystem is not identifiable from the available callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_status_code(void *param_1)

{
  int iVar1;
  
  iVar1 = read_field_at_offset_0xf4(__frv_reg_unset(4));
  if (iVar1 == 0x5060003) {
    store_and_dispatch_state_value((int)param_1);
  }
  return;
}
