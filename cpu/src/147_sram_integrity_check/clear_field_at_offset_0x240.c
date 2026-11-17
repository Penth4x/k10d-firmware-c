/* @k10d clear_field_at_offset_0x240 @ 0x104688a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at offset 0x240 of param_1 to dispatch_context_virtual_op with a
 *   zero argument.
 * summary:
 *   The function dereferences param_1 at offset 0x240 and calls dispatch_context_virtual_op
 *   with that value and 0. It acts as a thin wrapper around dispatch_context_virtual_op for
 *   a specific object field. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_at_offset_0x240(void *param_1)

{
  dispatch_context_virtual_op(*(void **)((int)param_1 + 0x240),0);
  return;
}
