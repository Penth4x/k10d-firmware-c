/* @k10d forward_field_and_param_104e8f54 @ 0x104e8f54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 254_factory_screen (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x38 of param_1 and forwards it with param_2 to a callee.
 * summary:
 *   This is a thin wrapper that dereferences the integer at param_1 + 0x38 and passes it as
 *   the first argument to read_structured_field_by_index along with param_2. It returns the
 *   callee's result directly. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_field_and_param_104e8f54(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = read_structured_field_by_index(*(int *)(param_1 + 0x38),param_2);
  return uVar1;
}
