/* @k10d check_even_value_in_set @ 0x1046bce6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 149_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_even_value_in_set(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 2:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x12:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    uVar1 = 1;
  }
  return uVar1;
}
