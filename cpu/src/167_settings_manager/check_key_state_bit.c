/* @k10d check_key_state_bit @ 0x10478a12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a specific bit in a byte of a key-state array is set, with a special case
 *   for index 0x5f.
 * summary:
 *   The function reads a byte from the array at DAT_106220f1 using param_2 as an index. It
 *   checks bit 5 (0x20) and bit 7 (0x80) of that byte. It returns 1 if bit 5 is set, or if
 *   bit 7 is set, or if the index is 0x5f. Otherwise it returns 0. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_key_state_bit(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (((&DAT_106220f1)[param_2] & 0x20) == 0) {
    uVar1 = 1;
    if ((((&DAT_106220f1)[param_2] & 0x80) == 0) && (param_2 != 0x5f)) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
