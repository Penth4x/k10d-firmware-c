/* @k10d check_and_copy_buffer_region @ 0x104b0a28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Verifies a source offset and length fit within a buffer size, then copies the data if
 *   valid.
 * summary:
 *   The function checks if the sum of param_3 (length) and param_4 (offset) is less than or
 *   equal to the value stored at param_1[1] (interpreted as a byte, likely a size or
 *   capacity). If the check passes, it calls copy_bytes_aligned with the calculated
 *   destination address (*param_1 + param_4), the source pointer param_2, the length
 *   param_3, and a zero flag. It returns true if the bounds check passed, false otherwise.
 *   The callee copy_bytes_aligned is not named, but the pattern suggests a memory copy or
 *   buffer operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_copy_buffer_region(int *param_1,uint8_t *param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = (uint)(param_4 + param_3) <= (uint)*(byte *)(param_1 + 1);
  if (bVar1) {
    copy_bytes_aligned((uint8_t *)(*param_1 + param_4),param_2,param_3,0);
  }
  return bVar1;
}
