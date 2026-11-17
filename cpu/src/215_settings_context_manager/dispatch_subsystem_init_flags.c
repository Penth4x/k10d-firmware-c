/* @k10d dispatch_subsystem_init_flags @ 0x104b39d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally invokes six subsystem initialization routines based on bits in a flag
 *   word.
 * summary:
 *   The function takes a base pointer and a 32-bit flag parameter. It checks specific bits
 *   (0x400 through 0x10000) and calls corresponding helper functions, passing either the
 *   value at offset 0x2c or 0x30 of the base pointer as an argument. The callees are
 *   unnamed, so the specific subsystems being initialized are not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_subsystem_init_flags(int param_1,uint param_2)

{
  if ((param_2 & 0x400) != 0) {
    process_pending_state_transition_104b2cc6(*(uint32_t *)(param_1 + 0x2c));
  }
  if ((param_2 & 0x800) != 0) {
    process_state_transition_104b2d26(*(uint32_t *)(param_1 + 0x2c));
  }
  if ((param_2 & 0x1000) != 0) {
    invoke_virtual_slot_6_and_7(*(uint32_t *)(param_1 + 0x2c));
  }
  if ((param_2 & 0x2000) != 0) {
    invoke_virtual_slot_8_on_two_objects(*(uint32_t *)(param_1 + 0x2c));
  }
  if ((param_2 & 0x8000) != 0) {
    process_pending_state_transition_104b30dc(*(uint32_t *)(param_1 + 0x30));
  }
  if ((param_2 & 0x10000) != 0) {
    process_state_transition_104b3148(*(uint32_t *)(param_1 + 0x30));
  }
  return;
}
