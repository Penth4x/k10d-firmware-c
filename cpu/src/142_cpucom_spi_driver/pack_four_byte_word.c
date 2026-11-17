/* @k10d pack_four_byte_word @ 0x1046523a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint pack_four_byte_word(void *param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  return (uint)param_5 << 0x18 | param_4 << 0x10 | param_3 << 8 | param_2;
}
