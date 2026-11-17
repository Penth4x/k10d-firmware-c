/* @k10d call_helper_with_second_field_1048325a @ 0x1048325a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 4 of the object pointed to by param_1 and passes it to
 *   read_field_at_offset_0x14, returning the result.
 * summary:
 *   A one-line wrapper that dereferences param_1, extracts the integer at offset +4, and
 *   forwards it as the sole argument to read_field_at_offset_0x14. The return value of
 *   read_field_at_offset_0x14 is returned directly to the caller. No other side effects or
 *   globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_second_field_1048325a(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_0x14(*(int *)(param_1 + 4));
  return uVar1;
}
