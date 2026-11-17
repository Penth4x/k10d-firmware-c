/* @k10d extract_byte_from_helper_result @ 0x104677f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 146_firmware_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_byte_from_helper_result(uint32_t param_1)

{
  int iVar1;
  
  iVar1 = read_and_mask_byte_1046786c(param_1,6,0xe0);
  return iVar1 >> 5 & 0xff;
}
