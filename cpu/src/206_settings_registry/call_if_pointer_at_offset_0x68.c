/* @k10d call_if_pointer_at_offset_0x68 @ 0x104a6960
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer stored at offset 0x68 of param_1 if that pointer is non-
 *   null.
 * summary:
 *   Checks the pointer at param_1 + 0x68. If it is not NULL, it calls
 *   copy_bytes_to_struct_field with param_2, that pointer, and the constant 0xc6. The
 *   function has no other side effects. The role of the pointer and the helper is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_if_pointer_at_offset_0x68(int param_1,int param_2)

{
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    copy_bytes_to_struct_field(param_2,*(void **)(param_1 + 0x68),0xc6);
  }
  return;
}
