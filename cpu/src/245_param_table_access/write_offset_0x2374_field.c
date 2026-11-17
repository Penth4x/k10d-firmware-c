/* @k10d write_offset_0x2374_field @ 0x104d68c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Writes a value to a field at offset 0x2374 within a structure passed as the first
 *   argument.
 * summary:
 *   The function is a thin wrapper that adds the constant offset 0x2374 to the first
 *   parameter and passes the resulting pointer along with the second parameter to
 *   store_value_at_offset_0x794. No other logic, flags, or side effects are visible in this
 *   function itself. The role of store_value_at_offset_0x794 is unknown, so the specific
 *   subsystem or data being written cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_offset_0x2374_field(int param_1,uint32_t param_2)

{
  store_value_at_offset_0x794(param_1 + 0x2374,param_2);
  return;
}
