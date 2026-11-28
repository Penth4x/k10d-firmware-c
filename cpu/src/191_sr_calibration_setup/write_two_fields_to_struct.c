/* @k10d write_two_fields_to_struct @ 0x1048ef10
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0x24 and a 32-bit value at offset 0x30 of the structure
 *   pointed to by param_1.
 * summary:
 *   The function performs two simple memory writes to a caller-provided structure. It
 *   writes param_3 to offset 0x24 and param_2 to offset 0x30. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_fields_to_struct(void *obj,uint32_t word_val,uint16_t half_val)

{
  /* sth r6,@(r13,r4): store 16-bit half_val at byte offset 0x24 */
  *(uint16_t *)((int)obj + 0x24) = half_val;
  /* st r5,@(r13,r4) in ret:d delay slot: store 32-bit word_val at byte offset 0x30 */
  *(uint32_t *)((int)obj + 0x30) = word_val;
  return;
}
