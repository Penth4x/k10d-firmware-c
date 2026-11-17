/* @k10d check_byte_in_range @ 0x103fee96
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_byte_in_range(void *param_1,byte *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((0x9f < *param_2) && (*param_2 < 0xe0)) {
    uVar1 = 1;
  }
  return uVar1;
}
