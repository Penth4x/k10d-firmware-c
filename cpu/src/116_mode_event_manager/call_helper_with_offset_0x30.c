/* @k10d call_helper_with_offset_0x30 @ 0x10431d9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x30 of param_1 and passes it with param_2 and 1 to
 *   write_param_to_buffer.
 * summary:
 *   This is a thin wrapper that extracts a field at offset 0x30 from the object pointed to
 *   by param_1. It calls write_param_to_buffer with that extracted value, param_2, and the
 *   constant 1, then returns the result. The specific role of the field and the callee is
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_0x30(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  uVar1 = write_param_to_buffer(*(uint32_t *)(param_1 + 0x30),param_2,1);
  return uVar1;
}
