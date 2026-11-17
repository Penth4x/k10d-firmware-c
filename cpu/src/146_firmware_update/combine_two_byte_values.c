/* @k10d combine_two_byte_values @ 0x10467756
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Extracts two bytes from param_1 via read_and_mask_byte_1046786c and combines them using
 *   pack_two_byte_value_10467876.
 * summary:
 *   Calls read_and_mask_byte_1046786c twice with param_1, using indices 1 and 0 and a
 *   default of 0xff. Passes the two results to pack_two_byte_value_10467876 and returns the
 *   result. The specific behavior of the callees is unknown, but the pattern suggests
 *   extracting and combining two fields from a structure or value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t combine_two_byte_values(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = read_and_mask_byte_1046786c(param_1,1,0xff);
  uVar2 = read_and_mask_byte_1046786c(param_1,0,0xff);
  uVar1 = pack_two_byte_value_10467876(param_1,uVar1,uVar2);
  return uVar1;
}
