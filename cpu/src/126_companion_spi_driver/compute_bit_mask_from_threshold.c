/* @k10d compute_bit_mask_from_threshold @ 0x10449b88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_bit_mask_from_threshold(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 < *(uint *)((int)param_1 + 0xe4)) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      uVar1 = uVar2 & 0xff;
    } while (param_2 < *(uint *)((int)param_1 + 0xe4) >> (uVar2 & 0x1f));
    uVar1 = 1 << ((char)uVar2 - 1U & 0xf) & 0xff;
  }
  return uVar1;
}
