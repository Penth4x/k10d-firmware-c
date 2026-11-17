/* @k10d toggle_bit0_in_object_field @ 0x1044ae1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit0_in_object_field(uint32_t *param_1,int param_2)

{
  byte bVar1;
  
  call_kernel_with_short_id(param_1);
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1[2] + 0x28) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1[2] + 0x28) | 1;
  }
  _DAT_00000300 = 0;
  *(byte *)(param_1[2] + 0x28) = bVar1;
  check_kernel_call_success_10459d88(param_1);
  return;
}
