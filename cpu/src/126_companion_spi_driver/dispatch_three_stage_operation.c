/* @k10d dispatch_three_stage_operation @ 0x1044440a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks a condition via a helper, then conditionally chains two more helpers to compute
 *   a final return value.
 * summary:
 *   The function calls validate_index_range with the input parameters. If the result is
 *   non-zero, it calls lookup_table_entry_by_index_104446dc and
 *   lookup_table_entry_by_index_10444730, passing their results to
 *   retry_flash_program_on_error. The final return value is either 4 (if the initial check
 *   fails) or the result of the final helper call. No specific camera subsystem behavior is
 *   evident from the pseudocode or unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_stage_operation(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 4;
  iVar1 = validate_index_range(param_1,param_2);
  if (iVar1 != 0) {
    uVar3 = lookup_table_entry_by_index_104446dc(param_1,param_2);
    uVar2 = lookup_table_entry_by_index_10444730(param_1,param_2);
    uVar3 = retry_flash_program_on_error(param_1,uVar3,uVar2);
  }
  return uVar3;
}
