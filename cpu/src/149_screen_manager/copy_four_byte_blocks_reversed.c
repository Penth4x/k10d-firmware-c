/* @k10d copy_four_byte_blocks_reversed @ 0x1046b72e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 149_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_byte_blocks_reversed(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x1ac));
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)param_2 + iVar2 + 3) = *(uint8_t *)(iVar1 + param_1 + 0x7c);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)param_2 + iVar2 + 0x12) = *(uint8_t *)(iVar1 + param_1 + 0x8b);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)param_2 + iVar2 + 0x21) = *(uint8_t *)(iVar1 + param_1 + 0x9a);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 0xf;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)param_2 + iVar2 + 0x30) = *(uint8_t *)(iVar1 + param_1 + 0xa9);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1ac));
  return;
}
