/* @k10d call_three_helpers_with_ram_args_10485904 @ 0x10485904
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions, passing two RAM values and one DAT global as arguments.
 * summary:
 *   The function performs no local computation. It calls clear_flag_with_notify with
 *   pvRam800102c8, write_fixed_register_values_10445f42 with uRam800102c0, and
 *   call_helper_with_0x4000_104453da with _DAT_800102bc. The roles of the callees and the
 *   meaning of the passed values are not known from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_three_helpers_with_ram_args_10485904(void)

{
  clear_flag_with_notify((void *)pvRam800102c8);
  write_fixed_register_values_10445f42(uRam800102c0);
  call_helper_with_0x4000_104453da(_DAT_800102bc/*SDRAM*/);
  return;
}
