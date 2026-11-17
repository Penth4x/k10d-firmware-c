/* @k10d call_three_helpers_with_ram_args_1048593a @ 0x1048593a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions, passing three distinct RAM values as arguments.
 * summary:
 *   The function performs no local computation. It calls set_flag_with_notify with
 *   pvRam800102c8, write_fixed_values_to_register_block with uRam800102c0, and
 *   call_helper_with_0xc000_104453e6 with _DAT_800102bc. The specific roles of these
 *   helpers and the data they operate on are not defined in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_three_helpers_with_ram_args_1048593a(void)

{
  set_flag_with_notify((void*)pvRam800102c8);
  write_fixed_values_to_register_block(uRam800102c0);
  call_helper_with_0xc000_104453e6(_DAT_800102bc/*SDRAM*/);
  return;
}
