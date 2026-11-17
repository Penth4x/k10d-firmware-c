/* @k10d call_helper_on_two_pointers_10484ccc @ 0x10484ccc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on a field at offset 0x14 and a pointer stored at offset 0xc of the
 *   first argument.
 * summary:
 *   The function takes a struct pointer (param_1) and forwards param_2, param_3, param_4 to
 *   copy_bytes_to_struct_offset_10428b80 twice: first with the value at param_1+0x14, then
 *   with the pointer dereferenced from param_1+0xc. No other side effects are visible. The
 *   role of copy_bytes_to_struct_offset_10428b80 is unknown, so the camera subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_pointers_10484ccc(int param_1,void *param_2,int param_3,int param_4)

{
  copy_bytes_to_struct_offset_10428b80(param_1 + 0x14,param_2,param_3,param_4);
  copy_bytes_to_struct_offset_10428b80(*(int *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}
