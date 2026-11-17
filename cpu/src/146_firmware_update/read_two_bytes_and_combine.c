/* @k10d read_two_bytes_and_combine @ 0x104677d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 146_firmware_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_bytes_and_combine(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,5,0xff);
  uVar2 = read_and_mask_byte_1046786c(param_1,4,0xff);
  pack_two_byte_value_10467876(param_1,uVar1,uVar2);
  return;
}
