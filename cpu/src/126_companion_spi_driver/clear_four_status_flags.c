/* @k10d clear_four_status_flags @ 0x10445df8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_four_status_flags(uint32_t param_1)

{
  ushort uVar1;
  
  uVar1 = read_status_word_40040000();
  write_masked_value_to_40040000(param_1,uVar1 | 0x8000);
  uVar1 = read_status_word_40040000();
  write_masked_value_to_40040000(param_1,uVar1 & 0xff7f);
  uVar1 = read_status_word_40040000();
  write_masked_value_to_40040000(param_1,uVar1 & 0xff3f);
  uVar1 = read_status_word_40040000();
  write_masked_value_to_40040000(param_1,uVar1 & 0xfffc);
  return;
}
