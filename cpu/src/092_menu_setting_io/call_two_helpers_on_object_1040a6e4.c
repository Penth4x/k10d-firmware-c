/* @k10d call_two_helpers_on_object_1040a6e4 @ 0x1040a6e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the given object pointer, passing an offset field to
 *   the first.
 * summary:
 *   The function takes a single object pointer. It calls
 *   release_heap_block_and_clear_104df4d2 with the address of the field at offset 0x48
 *   within the object, then calls forward_two_short_fields with the object pointer itself.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_1040a6e4(void *param_1)

{
  release_heap_block_and_clear_104df4d2((void *)((int)param_1 + 0x48));
  forward_two_short_fields(param_1);
  return;
}
