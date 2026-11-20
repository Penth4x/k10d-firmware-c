/* @k10d test_status_item_bit_1046b1a2 @ 0x1046b1a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t test_status_item_bit_1046b1a2(cls_105a8a1c *param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)status_item_location(param_2);
  if ((param_2 == 0x29) || (param_2 == 0x2a)) {
    uVar2 = 1;
    if ((*(byte *)((int)&param_1[1].field_0x0 + *piVar1) & *(byte *)(piVar1 + 1)) != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
    if (((*(byte *)((int)&param_1[1].field_0x0 + *piVar1) ^ 0xff) & *(byte *)(piVar1 + 1)) != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
