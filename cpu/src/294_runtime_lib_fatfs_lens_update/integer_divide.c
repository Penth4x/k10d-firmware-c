/* @k10d integer_divide @ 0x10546cce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Performs integer division of param_1 by param_2 and returns the quotient.
 * summary:
 *   A simple arithmetic helper that divides the first argument by the second. It is called
 *   from format_value_into_buffer within the lens_firmware_update module, likely to compute
 *   a progress percentage or block count for the lens CPU firmware update process. No other
 *   side effects or memory accesses are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int integer_divide(int param_1,int param_2)

{
  return param_1 / param_2;
}
