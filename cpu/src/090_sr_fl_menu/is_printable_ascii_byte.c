/* @k10d is_printable_ascii_byte @ 0x103fee80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t is_printable_ascii_byte(void *param_1,byte *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((0x1f < *param_2) && (*param_2 < 0x7f)) {
    uVar1 = 1;
  }
  return uVar1;
}
