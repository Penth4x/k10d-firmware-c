/* @k10d call_two_helpers_in_sequence_104f1b02 @ 0x104f1b02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls query_object_byte_property_104f1ab6 with param_1, then passes param_1 and the
 *   first result to map_index_to_byte_count, returning the second result.
 * summary:
 *   A thin wrapper that chains two callees: the first callee takes param_1 and returns a
 *   value, which is forwarded as the second argument to the second callee along with the
 *   original param_1. The final return value is whatever map_index_to_byte_count produces.
 *   No other side effects or globals are touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_in_sequence_104f1b02(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = query_object_byte_property_104f1ab6(param_1);
  uVar2 = map_index_to_byte_count(param_1,uVar1);
  return uVar2;
}
