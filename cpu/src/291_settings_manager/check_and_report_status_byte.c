/* @k10d check_and_report_status_byte @ 0x10532262
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status value from a helper and conditionally reports a byte from a fixed
 *   offset.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to get a ushort status. If the
 *   status is less than 0x48, it calls field_setter with a value from param_1+0x1c, the
 *   constant 0xa5, and a byte read from a fixed address offset from the status value. The
 *   function appears to be a simple conditional check-and-report routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_report_status_byte(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = read_u16_from_struct_array(param_2,0);
  if (uVar1 < 0x48) {
    uVar1 = read_u16_from_struct_array(param_2,0);
    field_setter(*(int *)(param_1 + 0x1c),0xa5,*(uint8_t *)(uVar1 + 0x1061e1e4));
  }
  return;
}
