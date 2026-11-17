/* @k10d search_byte_in_struct_array @ 0x1048214e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Checks if a byte value exists in an array of 8-byte entries within a struct.
 * summary:
 *   The function calls normalize_ascii_letter with the first byte of param_2 to obtain a
 *   target value. It then iterates through an array of 8-byte entries located at offset 0xc
 *   of param_1, up to the count specified at offset 0x14. For each entry, it compares the
 *   target value against the byte at offset 4 of the entry. It returns 1 if a match is
 *   found, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t search_byte_in_struct_array(int param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = normalize_ascii_letter(*param_2);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
    do {
      if (uVar3 == *(byte *)(*(int *)(param_1 + 0xc) + iVar1 + 4)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}
