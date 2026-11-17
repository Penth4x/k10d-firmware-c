/* @k10d store_three_field_record @ 0x1048f138
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Writes a 4-byte record (two bytes from a pointer, two individual bytes) into a struct
 *   at fixed offsets.
 * summary:
 *   The function stores the value pointed to by param_2 into param_1+0x24, param_3 into
 *   param_1+0x26, and param_4 into param_1+0x27. It performs no other operations and has no
 *   callees. The specific meaning of the fields or the struct is not determinable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_three_field_record(int param_1,uint16_t *param_2,uint8_t param_3,uint8_t param_4)

{
  *(uint8_t *)(param_1 + 0x27) = param_4;
  *(uint8_t *)(param_1 + 0x26) = param_3;
  *(uint16_t *)(param_1 + 0x24) = *param_2;
  return;
}
