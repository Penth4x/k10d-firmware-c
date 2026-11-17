/* @k10d cpucom_resp_set_insize @ 0x104655b0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed store_value_at_offset_eight)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the fourth word (offset 8) of the structure pointed to
 *   by the first argument.
 * summary:
 *   The function performs a single 32-bit store to `*(param_1 + 8)`. It has no callees and
 *   no internal logic to determine the semantic role of the field. While the module context
 *   suggests it is part of a transaction context, the specific meaning of the field at
 *   offset 8 is not verifiable from this function's code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_resp_set_insize(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 8) = param_2;
  return;
}
