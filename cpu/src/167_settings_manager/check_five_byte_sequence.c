/* @k10d check_five_byte_sequence @ 0x1047890e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over 5 bytes from param_2, calling check_key_state_bit with each byte and
 *   param_1, returning 0 on first failure or 1 if all succeed.
 * summary:
 *   The function loops up to 5 times, reading a byte from the memory pointed to by param_2
 *   at each index. It calls check_key_state_bit with param_1 and the current byte. If
 *   check_key_state_bit returns 0, the function immediately returns 0. If the loop
 *   completes without failure, it returns 1. The specific role of check_key_state_bit is
 *   unknown, so the camera subsystem context cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_five_byte_sequence(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = check_key_state_bit(param_1,*(uint8_t *)(param_2 + iVar2));
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 1;
}
