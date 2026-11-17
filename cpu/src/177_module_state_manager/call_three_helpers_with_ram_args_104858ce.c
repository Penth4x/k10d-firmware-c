/* @k10d call_three_helpers_with_ram_args_104858ce @ 0x104858ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions, passing two RAM values and one DAT global as arguments.
 * summary:
 *   The function is a thin wrapper that calls set_flag_with_notify with pvRam800102c8,
 *   write_fixed_register_values_10446024 with uRam800102c0, and call_subroutine_with_0x8000
 *   with _DAT_800102bc. It performs no local computation or state modification beyond these
 *   calls. The specific roles of the callees and the DAT global are unknown from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_three_helpers_with_ram_args_104858ce(void)

{
  set_flag_with_notify((void *)pvRam800102c8);
  write_fixed_register_values_10446024(uRam800102c0);
  call_subroutine_with_0x8000(_DAT_800102bc/*SDRAM*/);
  return;
}
