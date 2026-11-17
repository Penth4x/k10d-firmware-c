/* @k10d test_status_item_bit_1046b236 @ 0x1046b236
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_status_item_bit_1046b236(int param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)status_item_location(param_2);
  return (*(byte *)(param_1 + 0x31 + *piVar1) & *(byte *)(piVar1 + 1)) != 0;
}
