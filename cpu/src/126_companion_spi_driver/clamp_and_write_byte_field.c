/* @k10d clamp_and_write_byte_field @ 0x10443720
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_write_byte_field(void *param_1,int param_2)

{
  uint uVar1;
  
  *(char *)((int)param_1 + 0x81) = (char)param_2;
  if (param_2 < 1) {
    uVar1 = ((uint)*(byte *)((int)param_1 + 0x82) + *(char *)((int)param_1 + 0x81) * -2) - 0x80;
  }
  else {
    uVar1 = *(char *)((int)param_1 + 0x81) * 2 + (uint)*(byte *)((int)param_1 + 0x82);
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  call_helper_with_fixed_args_104438ea(param_1,uVar1 & 0xff);
  return;
}
