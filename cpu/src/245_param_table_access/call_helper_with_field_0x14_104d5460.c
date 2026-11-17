/* @k10d call_helper_with_field_0x14_104d5460 @ 0x104d5460
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Passes param_1 and its field at offset 0x14 to read_array_element_104d544c and returns
 *   the result.
 * summary:
 *   This is a thin wrapper that reads the 32-bit value at offset 0x14 of the object pointed
 *   to by param_1 and forwards both arguments to read_array_element_104d544c. It returns
 *   whatever read_array_element_104d544c returns in r4. No other side effects or globals
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field_0x14_104d5460(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_array_element_104d544c(param_1,*(uint32_t *)(param_1 + 0x14));
  return uVar1;
}
