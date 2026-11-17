/* @k10d pack_two_byte_value_10465228 @ 0x10465228
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Combines a high byte (param_3) and a low byte (param_2) into a single 16-bit value.
 * summary:
 *   The function performs a simple bit-shift and OR operation to construct a 16-bit integer
 *   from two 8-bit inputs. It is located in the cpucom_spi_driver module, likely used to
 *   format command or status words for SPI communication with the companion chip. No other
 *   functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort pack_two_byte_value_10465228(void *param_1,ushort param_2,short param_3)

{
  return param_3 << 8 | param_2;
}
