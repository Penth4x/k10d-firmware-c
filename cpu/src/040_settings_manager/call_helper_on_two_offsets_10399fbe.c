/* @k10d call_helper_on_two_offsets_10399fbe @ 0x10399fbe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper twice on param_1 using values stored at offsets 0x28 and 0x2c.
 * summary:
 *   Reads two 32-bit fields from the object pointed to by param_1 (at +0x28 and +0x2c) and
 *   passes each, along with param_1 and param_2, to invoke_virtual_slot_two_1039ca9a. No
 *   other side effects are visible in this function. The caller is
 *   set_byte_and_call_helper_10393e04.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_offsets_10399fbe(void *param_1,uint32_t param_2)

{
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x28),param_2);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x2c),param_2);
  return;
}
