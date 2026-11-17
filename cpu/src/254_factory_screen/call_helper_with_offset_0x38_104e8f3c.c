/* @k10d call_helper_with_offset_0x38_104e8f3c @ 0x104e8f3c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x38 of the input object and passes it to a helper
 *   function.
 * summary:
 *   The function dereferences the input parameter at offset 0x38 to retrieve a 32-bit
 *   value. It then calls check_three_status_flags with this retrieved value as its
 *   argument. The return value of the callee is returned directly by this function. The
 *   specific role of the object or the helper function is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_0x38_104e8f3c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_three_status_flags(*(uint32_t *)(param_1 + 0x38));
  return uVar1;
}
