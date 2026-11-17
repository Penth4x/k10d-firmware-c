/* @k10d forward_offset_field_call @ 0x103908f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer to an object field at offset 0x44 and a second parameter,
 *   returning the result.
 * summary:
 *   The function takes two integer parameters, computes a pointer to the field at offset
 *   0x44 of the first parameter, and passes it along with the second parameter to
 *   check_heap_alloc_success. It returns the boolean result of that call directly. No other
 *   side effects or global state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_offset_field_call(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = check_heap_alloc_success((int *)(param_1 + 0x44),param_2);
  return bVar1;
}
