/* @k10d check_and_dispatch_event_10515eac @ 0x10515eac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a handler with ID 0x17 if a flag is set and two shorts differ, then
 *   always calls a second handler.
 * summary:
 *   The function checks a byte at offset 0x2c and compares two shorts at offsets 0x678 and
 *   0x67a in the param_2 structure. If the byte is non-zero and the shorts differ, it calls
 *   find_index_in_ushort_array with param_2 and the constant 0x17. It then unconditionally
 *   calls call_two_helpers_on_object_10514cfa with param_1. The specific roles of the
 *   callees and the structure fields are not known from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_dispatch_event_10515eac(int param_1,void *param_2)

{
  if ((*(char *)((int)param_2 + 0x2c) != '\0') &&
     (*(short *)((int)param_2 + 0x678) != *(short *)((int)param_2 + 0x67a))) {
    find_index_in_ushort_array(param_2,0x17);
  }
  call_two_helpers_on_object_10514cfa(param_1);
  return;
}
