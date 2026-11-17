/* @k10d reset_display_layer_registers_10445262 @ 0x10445262
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of configuration values to display controller registers via a series
 *   of helper calls.
 * summary:
 *   The function takes a single parameter (likely a base address or object pointer) and
 *   passes it along with specific constants to eleven different helper functions. The
 *   constants include 0x280, 0x1e0, 0, and 0x4004, which appear to be register offsets or
 *   configuration values. Given the caller 'display_output_enable' and the brief's mention
 *   of display-controller I/O at 0x5c000000, this function likely configures the display
 *   layers or channels before enabling output. The specific roles of the individual helper
 *   functions are unknown, but they collectively set up the display state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_display_layer_registers_10445262(uint32_t param_1)

{
  write_low_nibble_to_mmio(param_1,0x280);
  write_masked_value_to_mmio_10445452(param_1,0x1e0);
  write_masked_value_to_40040304(param_1,0);
  write_masked_value_to_mmio_104454a8(param_1,0);
  write_masked_value_to_40040300(param_1,0x4004);
  write_low_byte_to_4004033c(param_1,0x280);
  write_masked_value_to_4004033e(param_1,0x1e0);
  write_masked_value_to_mmio_104454fa(param_1,0);
  write_masked_value_to_dat_40040324(param_1,0);
  write_masked_value_to_40040326(param_1,0);
  write_masked_value_to_40040320(param_1,0x4004);
  return;
}
