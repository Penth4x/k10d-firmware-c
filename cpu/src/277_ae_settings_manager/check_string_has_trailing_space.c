/* @k10d check_string_has_trailing_space @ 0x1051e3b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a string's content, up to a given length, ends with a space character.
 * summary:
 *   The function initializes a local buffer via heap_alloc_one_byte_1045926e, retrieves a
 *   string pointer, and gets its length via count_string_bytes. If the length is less than
 *   param_3, it copies data into the buffer using compare_byte_arrays and checks if the
 *   character at the copied length is a space. It returns 1 if a trailing space is found,
 *   otherwise 0, and cleans up the buffer with heap_free_if_flagged.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_string_has_trailing_space(uint32_t param_1,void *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint8_t uStack_9;
  
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pcVar1 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
  iVar2 = count_string_bytes(pcVar1);
  uVar5 = 0;
  if (iVar2 < param_3) {
    pvVar3 = (void *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
    iVar4 = compare_byte_arrays(pvVar3,param_2,iVar2);
    if ((iVar4 == 0) && (*(char *)((int)param_2 + iVar2) == ' ')) {
      uVar5 = 1;
    }
  }
  heap_free_if_flagged(&uStack_9,2);
  return uVar5;
}
