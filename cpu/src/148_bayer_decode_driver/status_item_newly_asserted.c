/* @k10d status_item_newly_asserted @ 0x1046b1ee
 * name: verified (structural evidence: decomp)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   True when a status item became asserted in the latest update (record +0x13).
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool status_item_newly_asserted(cls_105a8a1c *param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)status_item_location(param_2);
  return (*(byte *)((int)&param_1[4].field_0x0 + *piVar1 + 3) & *(byte *)(piVar1 + 1)) != 0;
}
