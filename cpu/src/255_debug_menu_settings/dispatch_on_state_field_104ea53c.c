/* @k10d dispatch_on_state_field_104ea53c @ 0x104ea53c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Loops calling one of three handlers based on the value at offset 0xc of the input
 *   struct until the result is not 2 or 4.
 * summary:
 *   Reads the 4-byte field at param_1+0xc and branches: value 1 calls
 *   set_field_and_query_object(param_1), value 2 calls check_and_clear_flag_on_result(),
 *   otherwise calls set_flag_and_call_helper_104ea572(param_1). The returned value is re-
 *   tested in a do-while loop, repeating the dispatch while it equals 2 or 4, then returns
 *   the final value. No camera-specific subsystem is identifiable from the pseudocode or
 *   the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_on_state_field_104ea53c(int param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0xc) == 1) {
      iVar1 = set_field_and_query_object(param_1);
    }
    else if (*(int *)(param_1 + 0xc) == 2) {
      iVar1 = check_and_clear_flag_on_result((uint32_t)param_1);
    }
    else {
      iVar1 = set_flag_and_call_helper_104ea572(param_1);
    }
  } while ((iVar1 == 2) || (iVar1 == 4));
  return iVar1;
}
