/* @k10d call_four_object_methods @ 0x10488af8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four helper functions sequentially with the object pointer as the sole
 *   argument.
 * summary:
 *   This function takes a single pointer parameter and passes it to four distinct callees:
 *   clear_flag_at_offset_0x4c_10488f62, clear_byte_at_offset_0x4d_10488f82,
 *   trigger_sr_cal_transfer_104867c0, and call_helper_with_second_field_104867ae. It acts
 *   as a composite operation or state transition handler for the object, likely performing
 *   a sequence of related updates or initializations. As virtual slot 4 of cls_105b34ec, it
 *   represents a specific behavior of this class, but the specific subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_object_methods(void *param_1)

{
  clear_flag_at_offset_0x4c_10488f62(param_1);
  clear_byte_at_offset_0x4d_10488f82(param_1);
  trigger_sr_cal_transfer_104867c0((int)param_1);
  call_helper_with_second_field_104867ae((int)param_1);
  return;
}
