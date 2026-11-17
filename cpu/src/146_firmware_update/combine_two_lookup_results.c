/* @k10d combine_two_lookup_results @ 0x10467792
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls a lookup helper twice with indices 3 and 2, then combines the two results via a
 *   second helper.
 * summary:
 *   The function takes param_1 and calls read_and_mask_byte_1046786c twice with constants 3
 *   and 2 (and 0xff) to obtain two values. It then passes param_1 and those two values to
 *   pack_two_byte_value_10467876, returning the result. The module context is
 *   firmware_update, but the specific camera subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t combine_two_lookup_results(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,3,0xff);
  uVar2 = read_and_mask_byte_1046786c(param_1,2,0xff);
  uVar1 = pack_two_byte_value_10467876(param_1,uVar1,uVar2);
  return uVar1;
}
