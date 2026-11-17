/* @k10d call_helper_with_field_0x20_104d7ef0 @ 0x104d7ef0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1 and the value at offset 0x20 of param_1, returning the
 *   helper's result.
 * summary:
 *   This function is a thin wrapper that reads the 32-bit value at offset 0x20 from the
 *   object pointed to by param_1 and passes both param_1 and that value as arguments to
 *   read_array_element_104d7ee0. It returns the result of that call directly. No other side
 *   effects or global accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field_0x20_104d7ef0(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_array_element_104d7ee0(param_1,*(uint32_t *)(param_1 + 0x20));
  return uVar1;
}
