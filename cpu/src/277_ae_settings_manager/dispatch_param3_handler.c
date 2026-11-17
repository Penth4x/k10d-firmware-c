/* @k10d dispatch_param3_handler @ 0x1051dcee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a type field in param_3 and conditionally calls a handler to set a status code
 *   in param_2.
 * summary:
 *   The function inspects the short value at offset 2 of param_3. If it equals 2, it calls
 *   an unknown function at 0x104a8c94 with param_3, then calls
 *   check_string_has_trailing_space with param_1, the result, and the value at param_3+4.
 *   It writes a status code (1 or 2) to param_2+0xa4 based on the return value of
 *   check_string_has_trailing_space. Returns 1 if the condition was met, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param3_handler(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(short *)(param_3 + 2) == 2) {
    uVar1 = (*(code *)0x104a8c94/*ROM*/)(param_3);
    iVar2 = check_string_has_trailing_space(param_1,(void *)uVar1,*(uint32_t *)(param_3 + 4));
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 2;
    }
    *(uint32_t *)(param_2 + 0xa4) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
