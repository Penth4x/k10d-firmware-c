/* @k10d call_if_pointer_at_offset_0x4f0 @ 0x104a69fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 0x4f0 from a sub-object and calls a helper if non-
 *   null.
 * summary:
 *   The function loads a pointer from *(param_1 + 0x58) + 0x4f0. If that pointer is not
 *   NULL, it calls copy_bytes_to_struct_field with param_2, the loaded pointer, and the
 *   value at offset 0x4f4. This appears to be a conditional dispatch or callback invocation
 *   based on the presence of a specific object member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_if_pointer_at_offset_0x4f0(int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(*(int *)(param_1 + 0x58) + 0x4f0);
  if (pvVar1 != 0) {
    copy_bytes_to_struct_field(param_2,pvVar1,*(uint32_t *)(*(int *)(param_1 + 0x58) + 0x4f4));
  }
  return;
}
