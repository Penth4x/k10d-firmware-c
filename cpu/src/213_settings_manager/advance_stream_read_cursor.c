/* @k10d advance_stream_read_cursor @ 0x104ad410
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a chunk from a stream object and advances its internal offset by the number of
 *   bytes consumed.
 * summary:
 *   Checks if the stream object (param_1) is null; if so returns 0. Otherwise calls
 *   copy_bytes_aligned with the current data pointer (param_1[0] + param_1[3]), destination
 *   buffer (param_2), length (param_3), and remaining size (param_1[1] - param_1[3]). The
 *   return value of the callee is added to the offset field (param_1[3]) and returned. This
 *   is a standard buffered read wrapper that tracks position within a memory region.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_stream_read_cursor(int *param_1,uint8_t *param_2,uint32_t param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = copy_bytes_aligned((uint8_t *)(*param_1 + param_1[3]),param_2,param_3,param_1[1] - param_1[3]);
    param_1[3] = param_1[3] + iVar1;
  }
  return iVar1;
}
