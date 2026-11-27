/* @k10d copy_bytes_with_optional_fill @ 0x1051c01c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_bytes_with_optional_fill(uint8_t *param_1,uint16_t *param_2,int param_3,int param_4)

{
  uint8_t uVar1;
  uint uVar2;
  int iStack_c;
  
  iStack_c = param_3;
  if (param_3 == 0) {
    iStack_c = count_shorts_until_zero(param_2);
  }
  uVar2 = 0;
  if (0 < iStack_c) {
    do {
      uVar1 = (uint8_t)*param_2;
      if (param_4 == 0) {
        uVar1 = swap_byte_order((uint32_t)param_1);
      }
      *param_1 = uVar1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1 & 0xff;
      param_1 = param_1 + 1;
    } while ((int)uVar2 < iStack_c);
  }
  return iStack_c;
}
