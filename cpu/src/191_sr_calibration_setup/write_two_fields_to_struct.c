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

void write_two_fields_to_struct(void *param_1,uint32_t param_2,uint16_t param_3)

{
  *(uint16_t *)((int)param_1 + 0x24) = param_3;
  *(uint32_t *)((int)param_1 + 0x30) = param_2;
  return;
}
