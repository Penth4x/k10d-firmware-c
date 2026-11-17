/* @k10d parse_two_string_lists_into_array @ 0x104f4b30
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Parses two comma-separated string lists into a 4-element array at param_1+0x30,
 *   incrementing a counter per token.
 * summary:
 *   Gated on param_1+0x40 being non-null and param_4 < 4, it first calls
 *   compute_indexed_difference and proceeds only if the result exceeds 0x5a. It then uses
 *   format_string_to_buffer_10545140 with the string at 0x105c3b0c and count_string_bytes
 *   to extract tokens, writing each into the array at param_1+0x30 and incrementing the
 *   adjacent counter. A second loop iterates 16 times over bytes of param_3, using the
 *   string at 0x105c3b18 to parse further tokens into the same array. The callees are
 *   unnamed, so the exact string format and array semantics are inferred from the token-
 *   copy and counter-increment pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_two_string_lists_into_array(int param_1,void *param_2,int param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint8_t *puVar5;
  int iVar6;
  uintptr_t sp;
  uint uStack_80;
  char acStack_6c [100];
  
  if (((*(char *)(param_1 + 0x40) != '\0') && ((int)param_4 < 4)) &&
     (pvVar4 = param_4, uVar1 = compute_indexed_difference(param_1,(int)param_4), 0x5a < uVar1)) {
    format_string_to_buffer_10545140(acStack_6c,(char *)0x105c3b0c/*ROM*/,param_2,pvVar4);
    iVar2 = count_string_bytes(acStack_6c);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = (int)param_4 * 4;
      puVar5 = &stack0xfffffff8;
      do {
        iVar6 = param_1 + 0x30;
        **(uint8_t **)(iVar6 + iVar2) = puVar5[-100];
        puVar5 = puVar5 + 1;
        *(int *)(iVar2 + iVar6) = *(int *)(iVar2 + iVar6) + 1;
        uVar1 = uVar1 + 1;
        uVar3 = count_string_bytes(acStack_6c);
      } while (uVar1 < uVar3);
    }
    uStack_80 = 0;
    iVar2 = (int)param_4 * 4;
    do {
      format_string_to_buffer_10545140(acStack_6c,(char *)0x105c3b18/*ROM*/,(void *)(uint)*(byte *)(param_3 + uStack_80),pvVar4
                  );
      iVar6 = count_string_bytes(acStack_6c);
      uVar1 = 0;
      puVar5 = &stack0xfffffff8;
      if (iVar6 != 0) {
        do {
          iVar6 = param_1 + 0x30;
          **(uint8_t **)(iVar6 + iVar2) = puVar5[-100];
          *(int *)(iVar2 + iVar6) = *(int *)(iVar2 + iVar6) + 1;
          uVar1 = uVar1 + 1;
          uVar3 = count_string_bytes(acStack_6c);
          puVar5 = puVar5 + 1;
        } while (uVar1 < uVar3);
      }
      uStack_80 = uStack_80 + 1;
    } while (uStack_80 < 0x10);
  }
  return;
}
