/* @k10d set_ram400d0000_flag @ 0x1044cf46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_ram400d0000_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    uRam400d0000 = 0;
  }
  else {
    uRam400d0000 = 0x8000;
  }
  return;
}
