/* @k10d write_if_check_passes_1047e296 @ 0x1047e296
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_3 to a computed offset in the object if a check function returns non-zero.
 * summary:
 *   Calls read_byte_from_buffer with the object pointer and an index. If the result is non-
 *   zero, it stores the third parameter at the address calculated as object[5] + index*4.
 *   This appears to be a guarded setter for an array member of a struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_if_check_passes_1047e296(int *param_1,int param_2,uint32_t param_3)

{
  char cVar1;
  
  cVar1 = read_byte_from_buffer(param_1,param_2);
  if (cVar1 != '\0') {
    *(uint32_t *)(param_1[5] + param_2 * 4) = param_3;
  }
  return;
}
