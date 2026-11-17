/* @k10d display_set_layer_b_frame @ 0x10445346
 * name: verified (structural evidence: decomp + emulator: boot writes 0x0fb10c00 / 0x0fb81400; the rendered layer B and its alpha plane match)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Points display-controller layer B (bank 0x40040320) at a frame: base +0x328 = param_2,
 *   Cb offset +0x32c = 0x4b000, Cr offset +0x330 = 0x5dc00, alpha plane +0x334 = param_2 +
 *   0x70800 (640x480 YCbCr 4:2:0 plus 4-bit alpha).
 * summary:
 *   VERIFIED: decomp + emulator: boot writes 0x0fb10c00 / 0x0fb81400; the rendered layer B
 *   and its alpha plane match
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void display_set_layer_b_frame(uint32_t param_1,int param_2)

{
  display_write_layer_b_base(param_1,param_2);
  write_display_layer_b_cb_offset(param_1,0x4b000);
  write_display_layer_c_base(param_1,0x5dc00);
  write_display_layer_b_alpha_base(param_1,param_2 + 0x70800);
  return;
}
