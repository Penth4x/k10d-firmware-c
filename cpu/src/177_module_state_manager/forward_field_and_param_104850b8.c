/* @k10d forward_field_and_param_104850b8 @ 0x104850b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 4-byte field at offset 0xc of param_1 and passes it with param_2 to a helper,
 *   returning the result.
 * summary:
 *   This is a thin wrapper that dereferences the integer at param_1+0xc and forwards it as
 *   the first argument to copy_structured_data_blocks along with param_2. It returns the
 *   callee's return value unchanged. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_field_and_param_104850b8(int param_1,int *param_2)

{
  uint32_t uVar1;
  
  uVar1 = copy_structured_data_blocks(*(int *)(param_1 + 0xc),param_2);
  return uVar1;
}
