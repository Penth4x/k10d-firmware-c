/* @k10d call_two_helpers_in_sequence_10444750 @ 0x10444750
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls classify_value_against_threshold_table with param_1, then passes its result to
 *   lookup_table_entry_by_index_10444730 and returns that result.
 * summary:
 *   A thin wrapper that chains two callee functions: the first receives param_1 (and an
 *   implicit r5 value), and the second receives param_1 plus the first callee's return
 *   value. The final return value is whatever lookup_table_entry_by_index_10444730
 *   produces. No other side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_in_sequence_10444750(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint r5_in;
  
  iVar1 = classify_value_against_threshold_table(param_1,r5_in);
  uVar2 = lookup_table_entry_by_index_10444730(param_1,iVar1);
  return uVar2;
}
