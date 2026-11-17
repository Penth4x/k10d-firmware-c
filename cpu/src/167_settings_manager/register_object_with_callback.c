/* @k10d register_object_with_callback @ 0x1047b8b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag, then registers a pointer within a target object and calls a helper,
 *   setting a status code based on the result.
 * summary:
 *   The function first calls check_flag_and_null_byte with a pointer offset by 0x48. If the
 *   result is non-zero, it dereferences a pointer chain from offset 0x70 to get a target
 *   object. It stores the address of param_1+0x20 into the target object at offset 0x14. It
 *   then calls unlink_node_and_call_handler with a value from param_1+0x50 and the target
 *   object. Finally, it sets a status field at param_1+0x34 to 0, 1, or 2 depending on the
 *   return value of unlink_node_and_call_handler and the value at param_1+0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_object_with_callback(int param_1)

{
  int iVar1;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
    *(int *)(iVar1 + 0x14) = param_1 + 0x20;
    iVar1 = unlink_node_and_call_handler(*(int *)(param_1 + 0x50),iVar1);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x44) == '\0') {
        *(uint32_t *)(param_1 + 0x34) = 1;
      }
      else {
        *(uint32_t *)(param_1 + 0x34) = 2;
      }
    }
    else {
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
  }
  return;
}
