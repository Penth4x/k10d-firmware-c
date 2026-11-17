/* @k10d write_field_at_offset_0x20 @ 0x104c27b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 228_config_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into a struct field at offset 0x20 via a helper.
 * summary:
 *   The function takes a base pointer (param_1) and a 16-bit value (param_2). It calls
 *   copy_eight_bytes_1045c584 with the address of the field at offset 0x20 (param_1 + 0x20)
 *   and the value. The specific role of the struct or the field is not determinable from
 *   the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x20(int param_1,uint16_t *param_2)

{
  copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x20),param_2);
  return;
}
