/* @k10d write_if_check_passes_1047e270 @ 0x1047e270
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_3 to a computed offset in param_1 if read_byte_from_buffer returns non-
 *   zero.
 * summary:
 *   Calls read_byte_from_buffer with param_1 and param_2. If the result is non-zero, stores
 *   param_3 at address param_1[4] + param_2 * 4. The callee's role is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_if_check_passes_1047e270(int *param_1,int param_2,uint32_t param_3)

{
  char cVar1;
  
  cVar1 = read_byte_from_buffer(param_1,param_2);
  if (cVar1 != '\0') {
    *(uint32_t *)(param_1[4] + param_2 * 4) = param_3;
  }
  return;
}
