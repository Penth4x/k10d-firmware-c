/* @k10d check_and_log_value @ 0x105322a4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a value from a helper and conditionally logs a byte from a large table.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to get a ushort. If the result is
 *   less than 0x48, it calls field_setter with a pointer from param_1+0x1c, the constant
 *   0xa6, and a byte from a large offset (0x1061e1e4) relative to the helper's return
 *   value. The specific roles of the callees and the data table are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_log_value(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = read_u16_from_struct_array(param_2,0);
  if (uVar1 < 0x48) {
    uVar1 = read_u16_from_struct_array(param_2,0);
    field_setter(*(int *)(param_1 + 0x1c),0xa6,*(uint8_t *)(uVar1 + 0x1061e1e4));
  }
  return;
}
