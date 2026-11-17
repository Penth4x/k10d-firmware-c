/* @k10d format_version_string_104d0298 @ 0x104d0298
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Formats a version string with major/minor digits and copies it into a destination
 *   buffer.
 * summary:
 *   If param_2 is non-zero, it initializes a local object, seeds a buffer with 'Ver . ',
 *   and fills the major/minor digits from the 16-bit value returned by
 *   return_global_word_104592ce. It then appends additional strings from fill_byte_array
 *   and the local object, concatenating them into the buffer. Finally, it copies the result
 *   into param_2 via copy_bytes_to_struct_field and cleans up the local object, returning 1
 *   on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d02ac) overlaps instruction at (ram,0x104d02aa)
    */

uint32_t format_version_string_104d0298(uint32_t param_1, int param_2, uint32_t param_x2)

{
  char cVar1;
  ushort uVar6;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  char acStack_2e [33];
  uint8_t uStack_d;
  uint8_t uStack_9;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    builtin_strncpy(acStack_2e + 1,"Ver  .  ",9);
    uVar6 = return_global_word_104592ce();
    acStack_2e[5] = (char)(uVar6 >> 8) + '0';
    cVar1 = (char)((uVar6 & 0xff) / 10);
    acStack_2e[7] = cVar1 + '0';
    acStack_2e[8] = (char)uVar6 + cVar1 * -10 + '0';
    fill_byte_array(acStack_2e + 10,0x20,0x18);
    iVar2 = (*(code *)0x10459346/*ROM*/)(&uStack_9);
    pcVar3 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
    iVar4 = count_string_bytes(pcVar3);
    while (iVar4 != 0) {
      acStack_2e[iVar4 + 9] = *(char *)(iVar4 + -1 + iVar2);
      iVar4 = iVar4 + -1;
    }
    pcVar3 = (char *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
    iVar2 = count_string_bytes(pcVar3);
    iVar4 = count_string_bytes(acStack_2e + 1);
    while (iVar4 != 0) {
      acStack_2e[iVar4 + -1 + iVar2 + 0xb] = acStack_2e[iVar4];
      iVar4 = iVar4 + -1;
    }
    uStack_d = 0;
    copy_bytes_to_struct_field(param_2,acStack_2e + 10,0x18);
    heap_free_if_flagged(&uStack_9,2);
    uVar5 = 1;
  }
  return uVar5;
}
