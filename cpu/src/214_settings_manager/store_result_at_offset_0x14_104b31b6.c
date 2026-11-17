/* @k10d store_result_at_offset_0x14_104b31b6 @ 0x104b31b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a field from param_1 and stores the return value at param_1+0x14.
 * summary:
 *   Reads the 4-byte value at param_1+0x10 and passes it, along with param_2, param_3, and
 *   the constant 0x200, to copy_bytes_with_alignment. The return value from that call is
 *   written to param_1+0x14. The function then returns 1. The specific role of
 *   copy_bytes_with_alignment is unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_0x14_104b31b6(int param_1,uint32_t *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = copy_bytes_with_alignment((void *)(*(uint32_t *)(param_1 + 0x10)),param_2,param_3,0x200);
  *(uint32_t *)(param_1 + 0x14) = uVar1;
  return 1;
}
