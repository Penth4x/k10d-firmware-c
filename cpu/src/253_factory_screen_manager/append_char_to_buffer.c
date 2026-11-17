/* @k10d append_char_to_buffer @ 0x104e630a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Appends a single character from a source string to a destination buffer if capacity
 *   allows.
 * summary:
 *   The function calls count_string_bytes to determine a length or index from param_2,
 *   masking the result to 8 bits. It compares this value against the current length stored
 *   at param_1[1]. If there is sufficient space, it calls fill_byte_array (likely a memory
 *   move or clear operation) and then copies the character from param_2 into the buffer at
 *   the position indicated by the length. It returns 1 on success and 0 if the buffer is
 *   full.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t append_char_to_buffer(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar2 = count_string_bytes(param_2);
  uVar2 = uVar2 & 0xff;
  if (*(byte *)(param_1 + 1) < uVar2) {
    uVar3 = 0;
  }
  else {
    fill_byte_array((void *)*param_1,0,(uint)*(byte *)(param_1 + 1));
    iVar1 = *param_1;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      *(char *)(uVar2 + iVar1) = param_2[uVar2];
    }
    uVar3 = 1;
  }
  return uVar3;
}
