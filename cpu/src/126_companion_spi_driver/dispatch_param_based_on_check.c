/* @k10d dispatch_param_based_on_check @ 0x1044443a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a check function and branches to either return 4 or call a third function with
 *   two derived values.
 * summary:
 *   The function calls check_sram_address_range with the input parameters. If the result is
 *   zero, it returns 4. Otherwise, it calls call_two_helpers_in_sequence_104446fc and
 *   call_two_helpers_in_sequence_10444750 to get two values, passes them along with the
 *   first parameter to copy_halfwords_to_stack, and returns 0. The specific subsystem is
 *   not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_based_on_check(uint32_t param_1,char *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = check_sram_address_range(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = call_two_helpers_in_sequence_104446fc(param_1);
    uVar3 = call_two_helpers_in_sequence_10444750(param_1);
    copy_halfwords_to_stack(param_1,uVar2,uVar3);
    uVar2 = 0;
  }
  return uVar2;
}
