/* @k10d store_two_values_at_offsets @ 0x104922d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Writes return values of two helper functions into a struct at offsets 0x14 and 0x18.
 * summary:
 *   The function calls get_or_create_singleton_object_10492ade and stores the result at
 *   param_1 + 0x18. It then calls get_or_init_singleton_10491684 and stores the result at
 *   param_1 + 0x14. It returns 1 unconditionally. The specific roles of the callee
 *   functions and the struct fields are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_two_values_at_offsets(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_10492ade();
  *(uint32_t *)((int)param_1 + 0x18) = uVar1;
  uVar1 = get_or_init_singleton_10491684();
  *(uint32_t *)((int)param_1 + 0x14) = uVar1;
  return 1;
}
