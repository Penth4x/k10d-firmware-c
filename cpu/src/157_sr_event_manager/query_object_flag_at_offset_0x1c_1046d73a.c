/* @k10d query_object_flag_at_offset_0x1c_1046d73a @ 0x1046d73a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x1c of the input object and returns the boolean result of
 *   calling debug_flag_reader_0x0c on it.
 * summary:
 *   The function dereferences param_1 + 0x1c to obtain a sub-object pointer and passes it
 *   to debug_flag_reader_0x0c. It converts the return value of that callee into a boolean
 *   and returns it as an unsigned integer. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_flag_at_offset_0x1c_1046d73a(int param_1)

{
  bool bVar1;
  
  bVar1 = debug_flag_reader_0x0c(*(void **)(param_1 + 0x1c));
  return (uint)bVar1;
}
