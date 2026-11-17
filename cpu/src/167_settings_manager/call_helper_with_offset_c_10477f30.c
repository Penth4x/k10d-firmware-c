/* @k10d call_helper_with_offset_c_10477f30 @ 0x10477f30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at param_1+0xc and passes it to
 *   iterate_and_process_list_entries, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences the field at offset 0xc of the object
 *   pointed to by param_1 and forwards it as the sole argument to
 *   iterate_and_process_list_entries. The return value of the callee is returned directly
 *   to the caller. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_c_10477f30(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = iterate_and_process_list_entries(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5));
  return uVar1;
}
