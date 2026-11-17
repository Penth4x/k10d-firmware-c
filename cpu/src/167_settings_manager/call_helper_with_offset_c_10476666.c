/* @k10d call_helper_with_offset_c_10476666 @ 0x10476666
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at param_1+0xc and passes it to read_offset_0x12_field,
 *   returning the result.
 * summary:
 *   This is a thin wrapper that dereferences a pointer field at offset 0xc of the object in
 *   param_1 and forwards it as the sole argument to read_offset_0x12_field. The return
 *   value of the callee is passed directly back to the caller. No other side effects or
 *   globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_c_10476666(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_offset_0x12_field(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
