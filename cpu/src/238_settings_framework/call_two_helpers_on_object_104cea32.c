/* @k10d call_two_helpers_on_object_104cea32 @ 0x104cea32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using fields from the object pointed to by param_1.
 * summary:
 *   The function reads three fields from the object at param_1 (offsets 0x2c, 4, and 0x4c)
 *   and passes them to allocate_and_link_event_node_1049aa7a. It then calls
 *   query_flag_with_timeout with the object pointer and the constant 4. No other operations
 *   or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_104cea32(int param_1)

{
  allocate_and_link_event_node_1049aa7a(*(uint32_t *)(param_1 + 0x2c),param_1 + 4,*(uint32_t *)(param_1 + 0x4c));
  query_flag_with_timeout(param_1,4);
  return;
}
