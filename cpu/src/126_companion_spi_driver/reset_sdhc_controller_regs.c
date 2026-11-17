/* @k10d reset_sdhc_controller_regs @ 0x1044898a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of reset/acknowledge values to SDHCI controller registers via a
 *   context pointer.
 * summary:
 *   The function takes a context pointer, extracts a sub-structure at offset 0x110, and
 *   calls a series of SDHCI register access functions. It first acknowledges interrupt
 *   status bits 0x81ff, then writes 0xfb to a register, and finally writes 0x1ff to four
 *   other registers, passing a masked value from offset 0x100 to one of them. The sequence
 *   of writes suggests a controller reset or initialization routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_sdhc_controller_regs(void *param_1)

{
  sdhc_ack_int_status(*(void **)((int)param_1 + 0x110),0x81ff);
  set_flag_bits_in_struct_1044b3ae(*(void **)((int)param_1 + 0x110),0xfb);
  set_flag_in_nested_struct(*(void **)((int)param_1 + 0x110),*(ushort *)((int)param_1 + 0x100) & 0x1ff);
  write_masked_value_to_struct_offset_1044b396(*(void **)((int)param_1 + 0x110),0x1ff);
  set_flag_bits_in_struct_1044b47e(*(void **)((int)param_1 + 0x110),0x1ff);
  clear_status_bit_mask(*(void **)((int)param_1 + 0x110),0x1ff);
  return;
}
