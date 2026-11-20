/* @k10d call_three_init_routines_104af1dc @ 0x104af1dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three sequential initialization routines, passing the first argument to the
 *   last one.
 * summary:
 *   The function acts as a simple wrapper that calls get_or_init_sram_buffer_104ae40c with
 *   no arguments, then calls the function pointer at 0x104ae780, and finally calls
 *   initialize_object_and_call_virtual_slot_2 with the value from param_1. It serves as a
 *   sequence of setup or initialization steps, likely for a specific subsystem or module,
 *   given the caller context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_routines_104af1dc(uint32_t *param_1)

{
  get_or_init_sram_buffer_104ae40c();
  (*(code *)0x104ae780/*ROM*/)();
  initialize_object_and_call_virtual_slot_2((uint32_t *)(*param_1));
  return;
}
