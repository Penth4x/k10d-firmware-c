/* @k10d check_and_get_value @ 0x1044a5ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 0 if a check function returns 0, otherwise returns the result of a second
 *   function.
 * summary:
 *   The function calls sdhc_send_command_209 with param_1. If the result is 0, it returns
 *   0. Otherwise, it calls return_constant_one_1044a7ee with param_1 and returns that
 *   result. This is a simple conditional dispatch or guard pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_get_value(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_send_command_209(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = return_constant_one_1044a7ee((int)param_1);
  }
  return uVar2;
}
