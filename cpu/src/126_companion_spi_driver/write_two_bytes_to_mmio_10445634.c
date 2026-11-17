/* @k10d write_two_bytes_to_mmio_10445634 @ 0x10445634
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to the memory-mapped address 0x400403a0.
 * summary:
 *   The function stores the 16-bit parameter param_2 into the global variable
 *   _DAT_400403a0, which corresponds to the memory address 0x400403a0. This address is not
 *   listed in the verified memory regions of the project brief, so the specific hardware
 *   block or register role is unknown. The function takes a second parameter param_1 which
 *   is unused in the visible pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_mmio_10445634(uint32_t param_1,uint16_t param_2)

{
  _DAT_400403a0 = param_2;
  return;
}
