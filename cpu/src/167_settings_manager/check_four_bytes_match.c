/* @k10d check_four_bytes_match @ 0x104789ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over four bytes of param_2, calling a helper on each, and returns 0 on the
 *   first non-zero result or 1 if all four succeed.
 * summary:
 *   The function loops four times, indexing into the memory pointed to by param_2. For each
 *   byte, it calls check_key_state_bit with param_1 and the current byte. If the callee
 *   returns 0, the function immediately returns 0. If the loop completes without the callee
 *   returning 0, the function returns 1. The specific role of check_key_state_bit is
 *   unknown, so the operation is described mechanically as a sequential check of four
 *   bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_four_bytes_match(uint32_t param_1,int param_2)

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
  } while (iVar2 < 4);
  return 1;
}
