/* @k10d format_and_send_message_1048f158 @ 0x1048f158
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Formats a string based on a flag in param_1 and sends it via a helper function.
 * summary:
 *   The function checks a byte at offset 0x27 in param_1. If zero, it calls
 *   format_string_to_buffer_10545140 with a global string pointer. If non-zero, it calls
 *   format_string_to_buffer_10545140 with a different global string, then processes the
 *   result to replace spaces with double spaces in a local buffer. It then constructs a
 *   stack structure containing fields from param_1 and the formatted string, and calls
 *   process_event_queue_entry_103fe55a with the result of
 *   get_or_init_static_buffer_103fe528 and this structure. The specific subsystem is not
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_send_message_1048f158(uint16_t *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  char acStack_58 [12];
  char acStack_4c [8];
  char *apcStack_44 [2];
  uint16_t uStack_3c;
  uint16_t uStack_3a;
  uint32_t uStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint8_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint32_t auStack_24 [7];
  
  iVar3 = (*(byte *)(param_1 + 0x13) - 1) * 4;
  if (*(char *)((int)param_1 + 0x27) == '\0') {
    format_string_to_buffer_10545140(acStack_58,*(char **)(iVar3 + -0x7ffefbb4),(void *)(uint)(ushort)param_1[0x12],
                 param_4);
  }
  else {
    format_string_to_buffer_10545140(acStack_4c,*(char **)(iVar3 + -0x7ffefbc8),(void *)(uint)(ushort)param_1[0x12],
                 param_4);
    iVar3 = 0;
    puVar1 = &stack0xfffffff8;
    while (acStack_4c[0] != '\0') {
      if (puVar1[-0x44] == ' ') {
        acStack_58[iVar3] = ' ';
        acStack_58[iVar3 + 1] = ' ';
        iVar3 = iVar3 + 1;
      }
      else {
        acStack_58[iVar3] = puVar1[-0x44];
      }
      iVar3 = iVar3 + 1;
      acStack_4c[0] = puVar1[-0x43];
      puVar1 = puVar1 + 1;
    }
    acStack_58[iVar3] = '\0';
  }
  uVar2 = get_or_init_static_buffer_103fe528();
  apcStack_44[1] = acStack_58;
  uStack_3c = *param_1;
  uStack_3a = param_1[1];
  uStack_38 = *(uint32_t *)(param_1 + 2);
  uStack_34 = param_1[10];
  uStack_32 = param_1[0xb];
  uStack_30 = *(uint8_t *)(param_1 + 0xc);
  uStack_26 = param_1[0x14];
  uStack_2e = param_1[0x15];
  uStack_2c = param_1[0x16];
  uStack_2a = 0;
  uStack_28 = 3;
  iVar3 = 0x1c;
  do {
    iVar4 = iVar3 + -4;
    *(uint32_t *)((int)&uStack_28 + iVar3) = *(uint32_t *)((int)apcStack_44 + iVar3);
    iVar3 = iVar4;
  } while (iVar4 != 0);
  process_event_queue_entry_103fe55a((void *)uVar2,auStack_24);
  return;
}
