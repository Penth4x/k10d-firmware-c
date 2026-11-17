/* @k10d check_flag_and_call_two_helpers @ 0x103b476a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   If a flag at offset 0x40 is not 1, calls two helper functions with fields from the
 *   object.
 * summary:
 *   Reads an int at param_1+0x40. If it is not equal to 1, it calls
 *   update_two_settings_by_mode with the value at param_1+0x28, the constant 8, and the
 *   byte at param_1+0x45. It then calls dispatch_object_event_103b456c with param_1. The
 *   callees are not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_two_helpers(void *param_1)

{
  if (*(int *)((int)param_1 + 0x40) != 1) {
    update_two_settings_by_mode(*(uint32_t *)((int)param_1 + 0x28),8,*(uint8_t *)((int)param_1 + 0x45));
    dispatch_object_event_103b456c(param_1);
  }
  return;
}
