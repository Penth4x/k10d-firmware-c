/* @k10d call_handler_if_present @ 0x104a6a22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a function pointer and argument from a struct and calls the handler if the
 *   pointer is non-null.
 * summary:
 *   Dereferences param_1 at offset 0x58 to get a sub-struct, then reads a function pointer
 *   at offset 0x4f8 and an argument at offset 0x4fc. If the function pointer is not null,
 *   it calls copy_bytes_to_struct_field with param_2, the function pointer, and the
 *   argument. The specific role of the handler is unknown as the callee is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_if_present(int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 0x58) + 0x4f8);
  if (pvVar1 != 0) {
    copy_bytes_to_struct_field(param_2,pvVar1,*(uint32_t *)(*(int *)(param_1 + 0x58) + 0x4fc));
  }
  return;
}
