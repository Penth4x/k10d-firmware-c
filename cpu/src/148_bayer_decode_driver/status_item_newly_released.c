/* @k10d status_item_newly_released @ 0x1046b212
 * name: verified (structural evidence: decomp)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   True when a status item was released in the latest update (record +0x22).
 * summary:
 *   VERIFIED: decomp
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool status_item_newly_released(cls_105a8a1c *param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)status_item_location(param_2);
  return (*(byte *)((int)&param_1[8].field_0x0 + *piVar1 + 2) & *(byte *)(piVar1 + 1)) != 0;
}
