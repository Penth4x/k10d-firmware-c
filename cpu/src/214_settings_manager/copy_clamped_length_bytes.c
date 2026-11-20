/* @k10d copy_clamped_length_bytes @ 0x104b094a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies up to a clamped byte length from a source pointer to a destination buffer.
 * summary:
 *   Reads a length byte from the second word of param_1 and clamps it against param_3.
 *   Calls advance_stream_read_cursor with param_2 as destination, the first word of param_1
 *   as source, and the clamped length. The callee is unnamed, so the exact copy semantics
 *   are inferred from the argument pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_clamped_length_bytes(cls_105d6d30 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_1->field_0x4;
  if (param_3 <= param_1->field_0x4) {
    uVar1 = param_3;
  }
  advance_stream_read_cursor((int *)(param_2),(uint8_t *)(param_1->field_0x0),(uint32_t)(uVar1));
  return;
}
