/* @k10d swap_two_bytes_if_needed @ 0x104e42d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t swap_two_bytes_if_needed(uint32_t param_1,uint8_t *param_2,int param_3)

{
  uint8_t uVar1;
  uint8_t uVar2;
  
  if (param_3 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
  }
  else {
    uVar1 = param_2[1];
    uVar2 = *param_2;
  }
  return CONCAT11(uVar1,uVar2);
}
