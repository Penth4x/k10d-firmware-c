/* @k10d read_status_word_40040000 @ 0x10446496
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_status_word_40040000(void)

{
  return _DAT_40040000 & 0x80c3;
}
