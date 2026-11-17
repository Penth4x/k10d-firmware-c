/* @k10d check_and_fetch_value_10476550 @ 0x10476550
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a validation function with object fields and, if successful, retrieves a value
 *   via a function pointer.
 * summary:
 *   The function passes param_1, param_2, and the field at offset 0x10 to
 *   invoke_virtual_slot_two_and_store_result. If the result is non-zero, it dereferences
 *   the function pointer at offset 0xc of param_1 and calls it, storing the return value in
 *   *param_3. It returns true if the initial check passed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_fetch_value_10476550(int param_1,uint32_t param_2,uint32_t *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,param_2,*(uint32_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = (*(code *)0x10476cca/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
    *param_3 = uVar2;
  }
  return iVar1 != 0;
}
