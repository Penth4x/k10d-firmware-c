/* @k10d call_slot2_on_offset4 @ 0x10481f74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of the object at param_1+4.
 * summary:
 *   Single-instruction wrapper that forwards param_1+4 to dispatch_single_subobj, which is
 *   virtual slot 2 of class cls_1059e408. This function is virtual slot 5 of cls_105ab5a8,
 *   so it likely delegates a higher-level operation to a sub-object stored at offset 4. No
 *   other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_slot2_on_offset4(int param_1)

{
  dispatch_single_subobj((void *)(param_1 + 4));
  return;
}
