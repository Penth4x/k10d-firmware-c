/* @k10d copy_four_bytes_and_check_state @ 0x1047b59c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies four bytes from a pointer derived from an object field and conditionally calls a
 *   handler if a stack value differs.
 * summary:
 *   The function first calls check_six_char_pattern with an offset (param_1 + 0x48) and
 *   proceeds only if the result is non-zero. It then dereferences a nested pointer
 *   structure starting at param_1 + 0x70 to obtain a source address, copies four bytes from
 *   that address to the stack, and calls forward_field_at_offset_0x10 with the value at
 *   param_1 + 0x50. If that call returns non-zero and the first copied byte differs from a
 *   stack variable, it calls create_and_configure_object_1047c484 and clears the 32-bit
 *   value at param_1 + 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes_and_check_state(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  uintptr_t sp;
  short asStack_c [2];
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if (iVar1 != 0) {
    psVar2 = *(short **)(*(int *)(*(int *)(param_1 + 0x70) + 0xc) + 4);
    iVar1 = 4;
    do {
      iVar3 = iVar1 + -1;
      (&stack0xfffffff3)[iVar1] = *(uint8_t *)(iVar3 + (int)psVar2);
      iVar1 = iVar3;
    } while (iVar3 != 0);
    iVar1 = forward_field_at_offset_0x10(*(int *)(param_1 + 0x50));
    if (iVar1 != 0) {
      if (asStack_c[0] != *psVar2) {
        create_and_configure_object_1047c484(param_1, __frv_reg_unset(5));
      }
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
  }
  return;
}
