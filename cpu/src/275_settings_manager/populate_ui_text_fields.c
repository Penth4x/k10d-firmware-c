/* @k10d populate_ui_text_fields @ 0x1051c312
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies three variable-length strings into a UI object and formats a version number into
 *   the third field.
 * summary:
 *   The function initializes a local buffer (heap_alloc_one_byte_1045926e), then copies
 *   three variable-length strings from a source object (via return_pentax_corp_string_ptr,
 *   return_pentax_k10d_string_104592f4, and a virtual call at 0x10459346) into offsets
 *   0x18, 0x2c, and 0x40 of param_1, null-terminating each. It formats a numeric value from
 *   return_global_word_104592ce() into a 'Ver . ' template and appends it to the third
 *   field. Finally, it calls heap_free_if_flagged to finalize the buffer and returns 1. The
 *   caller is a virtual method slot 2 of a UI class, suggesting this populates a status or
 *   info panel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_ui_text_fields(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  void *pvVar5;
  uintptr_t sp;
  char acStack_16 [13];
  uint8_t uStack_9;
  
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  fill_byte_array((void *)(param_1 + 0x18),0x20,0x14);
  iVar1 = return_pentax_corp_string_ptr(&uStack_9);
  pcVar2 = (char *)return_pentax_corp_string_ptr(&uStack_9);
  iVar3 = count_string_bytes(pcVar2);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 0x18) = *(uint8_t *)(iVar3 + iVar1);
  }
  *(uint8_t *)(param_1 + 0x2b) = 0;
  fill_byte_array((void *)(param_1 + 0x2c),0x20,0x14);
  iVar1 = return_pentax_k10d_string_104592f4(&uStack_9);
  pcVar2 = (char *)return_pentax_k10d_string_104592f4(&uStack_9);
  iVar3 = count_string_bytes(pcVar2);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 0x2c) = *(uint8_t *)(iVar3 + iVar1);
  }
  *(uint8_t *)(param_1 + 0x3f) = 0;
  builtin_strncpy(acStack_16 + 1,"Ver  .  ",9);
  uVar4 = return_global_word_104592ce();
  acStack_16[7] = (char)((uVar4 & 0xff) / 10);
  acStack_16[5] = (char)(uVar4 >> 8) + '0';
  acStack_16[8] = (char)uVar4 + acStack_16[7] * -10 + '0';
  acStack_16[7] = acStack_16[7] + '0';
  pvVar5 = (void *)(param_1 + 0x40);
  fill_byte_array(pvVar5,0x20,0x18);
  iVar1 = (*(code *)0x10459346/*ROM*/)(&uStack_9);
  pcVar2 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
  iVar3 = count_string_bytes(pcVar2);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + (int)pvVar5) = *(uint8_t *)(iVar3 + iVar1);
  }
  pcVar2 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
  iVar1 = count_string_bytes(pcVar2);
  iVar3 = count_string_bytes(acStack_16 + 1);
  while (iVar3 != 0) {
    *(char *)((int)pvVar5 + iVar3 + -1 + iVar1 + 1) = acStack_16[iVar3];
    iVar3 = iVar3 + -1;
  }
  *(uint8_t *)(param_1 + 0x57) = 0;
  heap_free_if_flagged(&uStack_9,2);
  return 1;
}
