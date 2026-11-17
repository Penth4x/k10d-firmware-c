/* @k10d call_helper_on_two_offsets_10399fea @ 0x10399fea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper twice on param_1 using values stored at offsets 0x5c and 0x60.
 * summary:
 *   Reads two 32-bit fields from the object pointed to by param_1 (at +0x5c and +0x60) and
 *   passes each, along with param_1 and param_2, to invoke_virtual_slot_two_1039ca9a. The
 *   callee's role is unknown, so the specific subsystem cannot be determined. No other side
 *   effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_offsets_10399fea(void *param_1,uint32_t param_2)

{
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x5c),param_2);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x60),param_2);
  return;
}
