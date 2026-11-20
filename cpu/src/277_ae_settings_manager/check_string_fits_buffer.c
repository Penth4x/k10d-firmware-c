/* @k10d check_string_fits_buffer @ 0x1051e304
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a concatenated string from three sources fits within a given length limit and
 *   copies it if it does.
 * summary:
 *   The function initializes a local buffer via heap_alloc_one_byte_1045926e, retrieves
 *   three string pointers (one from the buffer, one from a fixed address 0x105d6dd8, and
 *   one via a virtual call), and sums their lengths using count_string_bytes. If the total
 *   length is less than param_3, it copies the concatenated result into param_2 using
 *   compare_byte_arrays. It then scans the copied string to determine if it consists
 *   entirely of spaces or null characters, returning 1 if so, or 0 otherwise. The local
 *   buffer is cleaned up via heap_free_if_flagged before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_string_fits_buffer(uint32_t param_1,void *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uintptr_t sp;
  uint32_t uStack_10;
  uint8_t uStack_9;
  
  uStack_10 = 0;
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pcVar1 = (char *)return_pentax_string_ptr((uint32_t)(&uStack_9));
  iVar2 = count_string_bytes(pcVar1);
  iVar3 = count_string_bytes((char *)0x105d6dd8/*ROM*/);
  pcVar1 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
  iVar4 = count_string_bytes(pcVar1);
  iVar4 = iVar2 + iVar3 + iVar4;
  if (iVar4 < param_3) {
    pvVar5 = (void *)return_pentax_k10d_string_104592f4((uint32_t)(&uStack_9));
    iVar2 = compare_byte_arrays(param_2,pvVar5,iVar4);
    if (iVar2 == 0) {
      uStack_10 = 1;
      do {
        iVar4 = iVar4 + 1;
        if (param_3 <= iVar4) goto LAB_1051e39c;
      } while ((*(char *)((int)param_2 + iVar4) == ' ') || (*(char *)((int)param_2 + iVar4) == '\0')
              );
      uStack_10 = 0;
    }
  }
LAB_1051e39c:
  heap_free_if_flagged(&uStack_9,2);
  return uStack_10;
}
