/* @k10d set_bit_in_pointer_target @ 0x104398d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_in_pointer_target(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    call_kernel_with_short_id(*(uint32_t **)(param_1 + 0x20));
  }
  bVar1 = **(byte **)(param_1 + 0x24);
  if (param_2 == 0) {
    bVar1 = bVar1 & (*(byte *)(param_1 + 0x1c) ^ 0xff);
  }
  else {
    bVar1 = bVar1 | *(byte *)(param_1 + 0x1c);
  }
  **(byte **)(param_1 + 0x24) = bVar1;
  **(uint8_t **)(param_1 + 0x14) = **(uint8_t **)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) != 0) {
    check_kernel_call_success_10459d88(*(uint32_t **)(param_1 + 0x20));
  }
  return;
}
