/* @k10d invoke_virtual_method_on_subobject_1049f766 @ 0x1049f766
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on a sub-object at offset 0x20 and conditionally executes
 *   follow-up handlers.
 * summary:
 *   The function first calls call_subroutine_with_object_fields, then dereferences a
 *   pointer at param_1+0x20 to access a vtable-like structure. It invokes a virtual
 *   function (slot at offset 0x2c) with the sub-object, a pointer at param_1+0x28, and a
 *   value from param_1+4. If the virtual call returns non-zero, it calls
 *   copy_two_buffer_blocks_1049f7ac and then store_u16_and_copy_12_bytes with a 16-bit
 *   value from param_1+0x3c. The return value is 0 or the result of
 *   store_u16_and_copy_12_bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_subobject_1049f766(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  call_subroutine_with_object_fields((uint32_t)param_1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  iVar2 = (((vtbl_entry*)(iVar2))[5].fn)
                    (*(int *)(param_1 + 0x20) + (int)((vtbl_entry*)(iVar2))[5].adj,param_1 + 0x28,
                     *(uint32_t *)(param_1 + 4));
  if (iVar2 != 0) {
    copy_two_buffer_blocks_1049f7ac(param_1);
    uVar1 = store_u16_and_copy_12_bytes(param_1,*(uint16_t *)(param_1 + 0x3c));
  }
  return uVar1;
}
