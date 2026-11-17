/* @k10d call_subroutine_with_offset_c_104766ae @ 0x104766ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the integer at offset 0xc of the object pointed to by param_1 and passes it to
 *   read_field_at_offset_c, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences a pointer field at offset 0xc of the input
 *   structure and forwards that value as the sole argument to read_field_at_offset_c. The
 *   return value of read_field_at_offset_c is returned directly to the caller. No other
 *   side effects, globals, or camera-specific operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_c_104766ae(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_c(*(int *)(param_1 + 0xc));
  return uVar1;
}
