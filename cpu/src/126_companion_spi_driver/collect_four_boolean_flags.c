/* @k10d collect_four_boolean_flags @ 0x104359c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_four_boolean_flags(void *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = debug_flag_reader_0x08(param_1);
  *param_2 = (uint)bVar1;
  bVar1 = debug_flag_reader_0x0c(param_1);
  param_2[1] = (uint)bVar1;
  bVar1 = check_magic_at_offset_0xc(param_1);
  param_2[2] = (uint)bVar1;
  bVar1 = check_magic_at_offset_0x10(param_1);
  param_2[3] = (uint)bVar1;
  return 4;
}
