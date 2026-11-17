/* @k10d read_and_mask_byte_1046786c @ 0x1046786c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Reads a byte from memory at param_1 + param_2 and returns its bitwise AND with param_3.
 * summary:
 *   A one-line helper that performs a masked byte read from an arbitrary memory location.
 *   It is called eight times by neighboring functions in the firmware_update module, likely
 *   to extract specific bit fields from data structures or buffers during the update
 *   process. No side effects other than the memory read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_and_mask_byte_1046786c(int param_1,int param_2,byte param_3)

{
  return *(byte *)(param_1 + param_2) & param_3;
}
