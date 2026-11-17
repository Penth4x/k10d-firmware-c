/* @k10d check_and_reset_object_field @ 0x103908c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Returns true if a field at offset 0x3c is zero, otherwise calls two helpers and returns
 *   the second's result.
 * summary:
 *   The function checks if the integer at param_1 + 0x3c is non-zero. If it is, it calls
 *   call_helper_on_fetched_pointer() and then calls
 *   set_object_reference_and_check_flags(param_1, 0), returning the result of the latter.
 *   If the field is zero, it returns true immediately. The specific roles of the callees
 *   and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_reset_object_field(uint param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x3c) != 0) {
    call_helper_on_fetched_pointer();
    bVar1 = set_object_reference_and_check_flags(param_1,(int *)0x0);
  }
  return bVar1;
}
