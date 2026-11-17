/* @k10d invoke_callback_at_8000439c @ 0x1036c06a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single function pointer stored at SDRAM address 0x8000439c.
 * summary:
 *   The function dereferences the global pointer _DAT_8000439c and passes it as an argument
 *   to set_flag_and_call_callback. It serves as a virtual method slot 4/5 implementation
 *   for several classes, acting as a thin wrapper to dispatch through a stored function
 *   pointer. The specific role of set_flag_and_call_callback and the pointer target are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void invoke_callback_at_8000439c(void)

{
  set_flag_and_call_callback(_DAT_8000439c/*SDRAM*/);
  return;
}
