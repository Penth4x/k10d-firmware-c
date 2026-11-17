/* @k10d evaluate_startup_error_code @ 0x104bd10e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status field and byte flags to return a specific error or status code (0-6).
 * summary:
 *   The function first checks if the integer at offset 0x8d0 is -1, calling
 *   store_clamped_index_at_offset_0x8d0 if so. It then calls store_value_at_two_offsets
 *   with the value at 0x8d0 and invoke_virtual_method_on_object_104bfa5a with a pointer to
 *   offset 0x6c. Based on the return value of invoke_virtual_method_on_object_104bfa5a and
 *   the state of several byte flags at offsets 0x6d-0x71, it returns one of the codes 0, 1,
 *   2, 3, 4, 5, or 6. If a specific condition is met (offset 0x6f non-zero), it writes 0 to
 *   offset 0x38 and calls invoke_object_callback_and_release before determining the final
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_startup_error_code(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if (*(int *)(param_1 + 0x8d0) == -1) {
    store_clamped_index_at_offset_0x8d0(param_1,0xffffffff);
  }
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  iVar1 = invoke_virtual_method_on_object_104bfa5a(param_1,param_1 + 0x6c);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else if (*(char *)(param_1 + 0x6d) == '\0') {
    uVar2 = 2;
  }
  else if (*(char *)(param_1 + 0x6e) == '\0') {
    if (*(char *)(param_1 + 0x71) == '\0') {
      if (*(char *)(param_1 + 0x6f) == '\0') {
        uVar2 = 3;
      }
      else {
        *(uint32_t *)(param_1 + 0x38) = 0;
        iVar1 = invoke_object_callback_and_release(param_1);
        if (iVar1 == 0) {
          uVar2 = 6;
        }
        else if (*(char *)(param_1 + 0x70) != '\0') {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}
