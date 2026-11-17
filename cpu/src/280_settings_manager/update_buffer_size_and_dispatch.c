/* @k10d update_buffer_size_and_dispatch @ 0x1052229e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calculates a combined size from two parameters, updates a size field in a struct if
 *   larger, and calls a dispatch function.
 * summary:
 *   The function checks if a byte at offset 0x20 in the struct pointed to by param_1 is
 *   zero and param_4 is non-zero. It calls extract_bitfield_with_offset twice to compute
 *   sizes, updates the integer at offset 0xc if the sum is larger, and then calls
 *   copy_words_with_offset with the struct field at offset 8 and the computed sizes.
 *   Returns 1 on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_buffer_size_and_dispatch(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x20) == '\0') && (param_4 != 0)) {
    iVar2 = extract_bitfield_with_offset(param_3,4,0);
    iVar3 = extract_bitfield_with_offset(param_4 + 3,4,0);
    if (*(uint *)(param_1 + 0xc) < (uint)(iVar2 + iVar3)) {
      *(int *)(param_1 + 0xc) = iVar2 + iVar3;
    }
    copy_words_with_offset(*(uint32_t *)(param_1 + 8),param_2,iVar3,iVar2);
    uVar1 = 1;
  }
  return uVar1;
}
