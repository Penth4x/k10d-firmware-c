/* @k10d read_entry_if_valid @ 0x1047e2e2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a table if a validity check passes, else returns 0.
 * summary:
 *   Calls read_byte_from_buffer with the same two arguments to obtain a boolean-like
 *   status. If the status is non-zero, it dereferences the pointer at param_1[5] offset by
 *   param_2*4 and returns that 32-bit value. If the status is zero, it returns 0. The
 *   function acts as a guarded accessor for an array of 32-bit entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_entry_if_valid(int *param_1,int param_2)

{
  char cVar2;
  uint32_t uVar1;
  
  cVar2 = read_byte_from_buffer(param_1,param_2);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(param_1[5] + param_2 * 4);
  }
  return uVar1;
}
