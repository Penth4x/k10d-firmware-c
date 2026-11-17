/* @k10d toggle_bit0_of_struct_field_1044af4a @ 0x1044af4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit0_of_struct_field_1044af4a(void *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(*(int *)((int)param_1 + 8) + 0x29) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(*(int *)((int)param_1 + 8) + 0x29) | 1;
  }
  _DAT_00000300 = 0;
  *(byte *)(*(int *)((int)param_1 + 8) + 0x29) = bVar1;
  return;
}
