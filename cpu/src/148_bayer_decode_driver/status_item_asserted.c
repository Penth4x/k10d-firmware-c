/* @k10d status_item_asserted @ 0x1046b156
 * name: verified (structural evidence: decomp: (~byte & mask) != 0, or (byte & mask) for 0x29/0x2a)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   True when a status item is asserted in the current record; items are active-low except
 *   0x29/0x2a.
 * summary:
 *   VERIFIED: decomp: (~byte & mask) != 0, or (byte & mask) for 0x29/0x2a
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t status_item_asserted(void *param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)status_item_location(param_2);
  if ((param_2 == 0x29) || (param_2 == 0x2a)) {
    uVar2 = 1;
    if ((*(byte *)((int)param_1 + *piVar1 + 4) & *(byte *)(piVar1 + 1)) == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (((*(byte *)((int)param_1 + *piVar1 + 4) ^ 0xff) & *(byte *)(piVar1 + 1)) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
