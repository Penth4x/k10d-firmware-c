/* @k10d call_helper_with_30_and_4 @ 0x104437c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, constant 0x1e, param_2, and constant 4.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   write_byte_to_device_register, inserting the constants 0x1e (30) and 4 as the second
 *   and fourth parameters. No other logic, state changes, or side effects are visible in
 *   this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_30_and_4(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0x1e,param_2,4);
  return;
}
