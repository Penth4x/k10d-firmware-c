/* @k10d call_helper_with_fixed_offsets_104439bc @ 0x104439bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper passing the first argument, a 0xa8 offset, the second argument,
 *   and a 0x28 offset.
 * summary:
 *   This is a thin wrapper that forwards its two parameters to
 *   write_byte_to_device_register along with the constant values 0xa8 and 0x28. No other
 *   logic, state changes, or side effects are visible in this function itself. The role of
 *   the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_offsets_104439bc(void *param_1,uint32_t param_2)

{
  write_byte_to_device_register(param_1,0xa8,param_2,0x28);
  return;
}
