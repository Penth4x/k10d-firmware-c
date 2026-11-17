/* @k10d dispatch_param_with_fallback @ 0x1044446a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a primary handler and, if it returns non-zero, computes a result via two helper
 *   functions.
 * summary:
 *   The function takes an object pointer and a string/char pointer. It first calls
 *   check_sram_address_range with both arguments. If that call returns a non-zero value, it
 *   calls call_two_helpers_in_sequence_104446fc and call_two_helpers_in_sequence_10444750
 *   on the object, then passes the object and the two results to
 *   retry_flash_program_on_error, returning its result. Otherwise, it returns the default
 *   value 4. The specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_with_fallback(uint32_t param_1,char *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar3 = 4;
  iVar1 = check_sram_address_range(param_1,param_2);
  if (iVar1 != 0) {
    uVar3 = call_two_helpers_in_sequence_104446fc(param_1);
    uVar2 = call_two_helpers_in_sequence_10444750(param_1);
    uVar3 = retry_flash_program_on_error(param_1,uVar3,uVar2);
  }
  return uVar3;
}
