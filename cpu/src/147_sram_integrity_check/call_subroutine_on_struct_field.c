/* @k10d call_subroutine_on_struct_field @ 0x1046888e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 0x240 of the object in param_1 and passes it to
 *   invoke_virtual_then_nine_helpers.
 * summary:
 *   This is a one-line wrapper that extracts a field at offset 0x240 from the structure
 *   pointed to by param_1 and forwards it as the sole argument to
 *   invoke_virtual_then_nine_helpers. No other side effects or state changes are visible in
 *   this function. The role of the field and the callee is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_struct_field(void *param_1)

{
  invoke_virtual_then_nine_helpers(*(uint32_t *)((int)param_1 + 0x240));
  return;
}
