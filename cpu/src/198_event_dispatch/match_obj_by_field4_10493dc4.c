/* @k10d match_obj_by_field4_10493dc4 @ 0x10493dc4
 * name: ghidra (decompiled d327 to close a missing-decompile leak: it was called via a hardcoded
 *   (*(code*)0x10493dc4)() literal in iterate_and_call_virtual_method / dispatch_virtual_if_flag_clear,
 *   which jumped back into ORIGINAL code. Now recompiled + referenced by symbol.)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Returns param_1 if its field at +4 equals param_2, else 0 (a match-by-field-4 predicate used by
 *   the event-dispatch virtual-method iterator).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int match_obj_by_field4_10493dc4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != param_2) {
    param_1 = 0;
  }
  return param_1;
}
