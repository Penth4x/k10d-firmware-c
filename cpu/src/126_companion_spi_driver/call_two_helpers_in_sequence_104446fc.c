/* @k10d call_two_helpers_in_sequence_104446fc @ 0x104446fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls classify_value_against_threshold_table with param_1 and in_r5, then passes the
 *   result to lookup_table_entry_by_index_104446dc with param_1 and returns its value.
 * summary:
 *   A thin wrapper that chains two unnamed callees: the first takes param_1 and the r5
 *   register value, the second takes param_1 and the first callee's return value. The final
 *   return value is propagated to the caller. No direct memory or MMIO operations are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_in_sequence_104446fc(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint r5_in;
  
  iVar1 = classify_value_against_threshold_table(param_1,r5_in);
  uVar2 = lookup_table_entry_by_index_104446dc(param_1,iVar1);
  return uVar2;
}
