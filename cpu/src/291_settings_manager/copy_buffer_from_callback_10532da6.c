/* @k10d copy_buffer_from_callback_10532da6 @ 0x10532da6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer from a location returned by a callback into an object's internal
 *   buffer.
 * summary:
 *   The function reads a pointer and a length from an object at offset 0x4f0 and 0x4f4. If
 *   the pointer is non-null, it calls the function at 0x104a8c94 with param_2 to get a
 *   source address. It then performs a backward byte-by-byte copy from the source address
 *   to the object's buffer for the specified length. The role of the callback and the
 *   specific data being copied is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_from_callback_10532da6(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x4f0);
  if (iVar3 != 0) {
    iVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x4f4);
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(uint8_t *)(iVar1 + iVar3) = *(uint8_t *)(iVar1 + iVar2);
    }
  }
  return;
}
