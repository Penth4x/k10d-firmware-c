/* @k10d forward_byte_at_offset_0x858 @ 0x1046c414
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts the byte at offset 0x858 from param_3 and forwards it to
 *   invoke_virtual_method_on_slot with param_1, param_2, and param_3.
 * summary:
 *   This function acts as a thin wrapper around invoke_virtual_method_on_slot. It reads a
 *   single byte from the memory location param_3 + 0x858 and passes it as the second
 *   argument to the callee. The return value of invoke_virtual_method_on_slot is returned
 *   directly. The specific role of the byte at offset 0x858 and the behavior of
 *   invoke_virtual_method_on_slot are not known from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_byte_at_offset_0x858(int param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = invoke_virtual_method_on_slot(param_1,(uint)*(byte *)(param_3 + 0x858),param_2,(void *)param_3);
  return uVar1;
}
