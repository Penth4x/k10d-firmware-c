/* @k10d write_fill_pattern_word_104381ac @ 0x104381ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_fill_pattern_word_104381ac(uint32_t *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xa55a5aa5;
  }
  *param_1 = uVar1;
  return;
}
