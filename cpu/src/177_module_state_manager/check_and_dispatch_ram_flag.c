/* @k10d check_and_dispatch_ram_flag @ 0x104859b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from RAM, compares it to 0xc0, and conditionally calls two helper
 *   functions if the check fails and a flag is not set.
 * summary:
 *   The function first calls reset_display_layer_registers_104452ba with a pointer to RAM
 *   at 0x800102bc. It then retrieves a value from 0x800102c0 via
 *   read_display_controller_status_bits. If this value is not 0xc0, it calls
 *   call_helper_with_0x4000_10445e54 and checks if the byte at 0x800102da is not 1. If both
 *   conditions are met, it calls init_object_and_set_flags and
 *   call_single_helper_with_param_104436da with the value at 0x800102c4. The specific
 *   subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_and_dispatch_ram_flag(void)

{
  int iVar1;
  
  reset_display_layer_registers_104452ba(_DAT_800102bc/*SDRAM*/);
  iVar1 = read_display_controller_status_bits(uRam800102c0);
  if ((iVar1 != 0xc0) && (call_helper_with_0x4000_10445e54(uRam800102c0), cRam800102da != '\x01')) {
    init_object_and_set_flags();
    call_single_helper_with_param_104436da(uRam800102c4);
  }
  return;
}
