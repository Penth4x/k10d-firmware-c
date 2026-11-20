/* @k10d set_flag_and_flag_object @ 0x1039ed64
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Sets a byte flag at offset 0xd9 and calls set_flg_obj on a field at offset 0xcc of the
 *   given object.
 * summary:
 *   The function writes the value 1 to the byte at param_1 + 0xd9, then invokes set_flg_obj
 *   with the 32-bit value at param_1 + 0xcc. No other side effects or MMIO writes are
 *   visible. The role of the object and the specific flag semantics are not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_flag_object(cls_10564150 *param_1)

{
  param_1->field_0xd9 = 1;
  set_flg_obj((void *)&param_1->field_0xcc);
  return;
}
