/* @k10d check_ram400d0000_sign_bit @ 0x1044cf5c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the sign bit of the global sRam400d0000 is set.
 * summary:
 *   The function reads the global variable sRam400d0000 and returns a boolean indicating
 *   whether its most significant bit is set (i.e., if interpreted as a signed integer, it
 *   is negative). It has no callees and performs no side effects. The specific role of
 *   sRam400d0000 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_ram400d0000_sign_bit(uint32_t param_x0)

{
  return sRam400d0000 < 0;
}
