/* @k10d process_event_if_type_three @ 0x10514da6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Checks if an event object has type 3 and non-null flag, then updates its state and
 *   calls two helpers.
 * summary:
 *   The function validates that the integer at offset 0x1c of param_2 is 3 and the byte at
 *   0x2d is non-zero. If true, it copies a 16-bit value from offset 0x692 to 0x690, calls
 *   find_index_in_ushort_array with param_2 and 0x16 (22), increments the integer at offset
 *   0x24 by 2, and finally calls call_two_helpers_on_object_10514cfa with param_1. The
 *   specific subsystem is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_event_if_type_three(int param_1,void *param_2)

{
  if ((*(int *)((int)param_2 + 0x1c) == 3) && (*(char *)((int)param_2 + 0x2d) != '\0')) {
    *(uint16_t *)((int)param_2 + 0x690) = *(uint16_t *)((int)param_2 + 0x692);
    find_index_in_ushort_array(param_2,0x16);
    *(int *)((int)param_2 + 0x24) = *(int *)((int)param_2 + 0x24) + 2;
    call_two_helpers_on_object_10514cfa(param_1);
  }
  return;
}
