/* @k10d invoke_virtual_method_and_dispatch @ 0x1049f86c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored at offset 0x24, then conditionally calls two
 *   helper functions if the result is non-zero.
 * summary:
 *   The function dereferences a pointer at param_1+0x24 to get an object, then calls
 *   virtual slot 6 (offset 0x34) with a this-adjusted pointer and two arguments from
 *   param_1. If the return value is non-zero, it calls copy_two_buffer_blocks_1049f8ac and
 *   store_u16_and_copy_12_bytes, returning the latter's result; otherwise it returns 0. The
 *   specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_and_dispatch(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  iVar2 = (**(code **)(iVar2 + 0x34))
                    (*(int *)(param_1 + 0x24) + (int)*(short *)(iVar2 + 0x30),param_1 + 0x28,
                     *(uint32_t *)(param_1 + 8));
  uVar1 = 0;
  if (iVar2 != 0) {
    copy_two_buffer_blocks_1049f8ac(param_1);
    uVar1 = store_u16_and_copy_12_bytes(param_1,*(uint16_t *)(param_1 + 0x3c));
  }
  return uVar1;
}
