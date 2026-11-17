/* @k10d call_helper_with_offset_104d68da @ 0x104d68da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Calls read_field_at_offset_0x794 with param_1 plus a fixed offset of 0x2374 and returns
 *   the result.
 * summary:
 *   This is a one-line wrapper that adds the constant 0x2374 to its input pointer/integer
 *   and passes the sum to read_field_at_offset_0x794, returning that callee's return value
 *   directly. It is invoked as virtual method slot 27 of class cls_105ba1b8. No other side
 *   effects or globals are touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_104d68da(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_field_at_offset_0x794(param_1 + 0x2374);
  return uVar1;
}
