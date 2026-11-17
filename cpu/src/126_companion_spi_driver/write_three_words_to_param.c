/* @k10d write_three_words_to_param @ 0x1044047e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes three fixed 16-bit values (0x0204, 0x0088, 0x0000) to consecutive offsets in a
 *   memory block pointed to by param_1.
 * summary:
 *   The function performs three direct memory writes to the address provided in param_1:
 *   0x0204 at offset 0x20, 0x0088 at offset 0x28, and 0x0000 at offset 0x30. The target
 *   address is not hardcoded in the function body, so the specific hardware block (e.g.,
 *   SPI, GPIO, or SDRAM) cannot be determined from this code alone. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_words_to_param(void *param_1)

{
  **(uint16_t **)((int)param_1 + 0x20) = 0x204;
  **(uint8_t **)((int)param_1 + 0x28) = 0x88;
  *(uint16_t *)((int)param_1 + 0x30) = 0;
  return;
}
