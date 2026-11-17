/* @k10d check_ram40050004_bits_15_14 @ 0x1044c496
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_ram40050004_bits_15_14(void)

{
  return uRam40050004 >> 0xe == 3;
}
