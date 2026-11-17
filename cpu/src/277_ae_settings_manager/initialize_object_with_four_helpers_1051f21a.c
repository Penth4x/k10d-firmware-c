/* @k10d initialize_object_with_four_helpers_1051f21a @ 0x1051f21a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions on the object pointer and returns the pointer.
 * summary:
 *   The function takes a single object pointer (param_1) and sequentially calls four
 *   callees: set_two_fields_to_four, enable_display_output,
 *   clear_flag_at_offset_0x50_1051f602, and dispatch_mode_transition_sequence, passing the
 *   pointer to each. It then returns the original pointer. This pattern is typical of an
 *   initialization or setup routine for an object, possibly a virtual method (slot 3) that
 *   configures internal state via these helpers. No specific camera subsystem behavior is
 *   evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int initialize_object_with_four_helpers_1051f21a(uint32_t *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_flag_at_offset_0x50_1051f602(param_1);
  dispatch_mode_transition_sequence(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return (int)param_1;
}
