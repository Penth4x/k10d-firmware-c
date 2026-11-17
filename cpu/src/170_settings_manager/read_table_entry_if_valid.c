/* @k10d read_table_entry_if_valid @ 0x1047e2bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a table at an index if a validity check passes, else 0.
 * summary:
 *   Calls read_byte_from_buffer with the table base and index to get a boolean validity
 *   flag. If the flag is non-zero, it dereferences the pointer at param_1[4] plus the index
 *   offset to fetch a 32-bit word. If the flag is zero, it returns 0. The specific nature
 *   of the table and the validity check are unknown because the callee is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_table_entry_if_valid(int *param_1,int param_2)

{
  char cVar2;
  uint32_t uVar1;
  
  cVar2 = read_byte_from_buffer(param_1,param_2);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(param_1[4] + param_2 * 4);
  }
  return uVar1;
}
