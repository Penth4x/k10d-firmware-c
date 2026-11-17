/* @k10d compute_struct_field_offset_104288de @ 0x104288de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a byte offset into a structure based on an index and a mode parameter.
 * summary:
 *   The function takes a base pointer (param_1), an index (param_2), and a mode (param_3).
 *   It calculates an offset by adding param_2 * 8 to a mode-dependent constant (0x50, 0x68,
 *   0x80, or 0x38) and adds that to the base pointer. The result is returned as an integer,
 *   effectively providing the address of a specific field within a structure or array. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_struct_field_offset_104288de(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0x50;
  }
  else if (param_3 == 1) {
    iVar1 = 0x68;
  }
  else {
    iVar1 = 0x80;
    if (param_3 != 2) {
      iVar1 = 0x38;
    }
  }
  return (int)param_1 + param_2 * 8 + iVar1;
}
