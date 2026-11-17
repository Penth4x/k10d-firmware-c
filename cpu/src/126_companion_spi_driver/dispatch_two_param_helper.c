/* @k10d dispatch_two_param_helper @ 0x104443da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a primary helper and, if it fails, invokes two secondary helpers and a third with
 *   their results.
 * summary:
 *   The function takes two parameters and calls validate_index_range. If the return value
 *   is zero, it returns 4. Otherwise, it calls lookup_table_entry_by_index_104446dc and
 *   lookup_table_entry_by_index_10444730, passes their results to copy_halfwords_to_stack,
 *   and returns 0. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_param_helper(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = validate_index_range(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = lookup_table_entry_by_index_104446dc(param_1,param_2);
    uVar3 = lookup_table_entry_by_index_10444730(param_1,param_2);
    copy_halfwords_to_stack(param_1,uVar2,uVar3);
    uVar2 = 0;
  }
  return uVar2;
}
