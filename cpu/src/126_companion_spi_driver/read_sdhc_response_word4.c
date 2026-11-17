/* @k10d read_sdhc_response_word4 @ 0x1044ab46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the fourth SDHCI response word from a host structure and clears a global flag.
 * summary:
 *   The function clears the global variable DAT_00000300 to zero. It then dereferences the
 *   pointer at offset 8 of param_1 and reads the 32-bit value at offset 0x1c of that
 *   structure. The caller sdhc_latch_response copies response words from offsets 0x10 to
 *   0x1c, indicating this function retrieves the last word of the SD card response.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_sdhc_response_word4(void *param_1)

{
  _DAT_00000300 = 0;
  return *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x1c);
}
