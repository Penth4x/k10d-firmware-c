/* @k10d call_single_helper_with_global @ 0x1036b916
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function, passing the value of global DAT_8000439c as its
 *   argument.
 * summary:
 *   The function performs a single call to call_helper_on_field_0x48, providing the
 *   contents of the global variable DAT_8000439c as the first argument. It does not perform
 *   any other operations or return a value. The specific role of the callee and the global
 *   variable is not determinable from the provided pseudocode and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_single_helper_with_global(void)

{
  call_helper_on_field_0x48(_DAT_8000439c/*SDRAM*/);
  return;
}
