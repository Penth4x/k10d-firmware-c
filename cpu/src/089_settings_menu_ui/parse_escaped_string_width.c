/* @k10d parse_escaped_string_width @ 0x103fe66c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Parses a null-terminated string with escape sequences to compute a total width and
 *   build a result buffer.
 * summary:
 *   Iterates through param_3, handling 0x0d as a separator and using
 *   is_printable_ascii_byte/decode_character_code/check_whitespace_and_high_byte to
 *   classify characters and accumulate a width value (uVar5). It constructs a buffer on the
 *   stack (apuStack_1c) initialized with DAT_1059814c, then calls
 *   alloc_two_word_pair_1045c3dc and free_heap_if_flagged_1045c402 before copying the
 *   result to param_5. The specific subsystem (display, UI, etc.) is not determinable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_escaped_string_width(uint32_t param_1,void *param_2,byte *param_3,uint32_t param_4,int param_5)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uintptr_t sp;
  uint uStack_24;
  void *apuStack_1c [5];
  
  uStack_24 = 0x30;
  uVar5 = 0;
  uVar6 = 0;
  if (*param_3 != 0) {
    apuStack_1c[0] = &DAT_1059814c/*ROM*/;
    do {
      if (*param_3 == 0xd) {
        uStack_24 = uStack_24 + 0x30 & 0xffff;
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        uVar5 = 0;
LAB_103fe762:
        param_3 = param_3 + 1;
      }
      else {
        iVar3 = is_printable_ascii_byte(param_2,param_3);
        if (iVar3 != 0) {
          sVar4 = decode_character_code(param_2,param_3);
          uVar1 = (uint)(byte)(&DAT_105980b8/*ROM*/)[sVar4];
          if (uVar1 != (uVar1 & 0xfffffffe)) {
            uVar1 = uVar1 + 1;
          }
          uVar5 = uVar5 + uVar1 & 0xffff;
          goto LAB_103fe762;
        }
        if (*(char *)((int)param_2 + 0x58) == '\r') {
          uVar1 = 0xffff;
          sVar4 = *(uint32_t*)(psRam10363170);
          psVar2 = (void*)(psRam10363170);
          while (sVar4 != 0) {
            if (*psVar2 == *(short *)param_3) {
              uVar1 = (uint)(ushort)psVar2[1];
              break;
            }
            psVar2 = psVar2 + 2;
            sVar4 = *psVar2;
          }
          uVar1 = (uint)(byte)((char*)apuStack_1c[0])[uVar1];
          if (uVar1 != (uVar1 & 0xfffffffe)) {
            uVar1 = uVar1 + 1;
          }
          uVar5 = uVar5 + uVar1 & 0xffff;
          param_3 = param_3 + 2;
        }
        else {
          iVar3 = check_whitespace_and_high_byte((int)param_2,param_3);
          if (iVar3 == 0) {
            uVar5 = uVar5 + 0x18 & 0xffff;
            goto LAB_103fe762;
          }
          uVar5 = uVar5 + 0x30 & 0xffff;
          param_3 = param_3 + 2;
        }
      }
    } while (*param_3 != 0);
  }
  if (uVar6 < uVar5) {
    uVar6 = uVar5;
  }
  alloc_two_word_pair_1045c3dc((void*)(apuStack_1c + 1),uVar6,uStack_24);
  iVar3 = 8;
  do {
    iVar7 = iVar3 + -4;
    *(uint32_t *)((int)apuStack_1c + iVar3 + 8) = *(uint32_t *)((int)apuStack_1c + iVar3);
    iVar3 = iVar7;
  } while (iVar7 != 0);
  free_heap_if_flagged_1045c402(apuStack_1c + 1,2);
  iVar3 = 8;
  do {
    iVar7 = iVar3 + -4;
    *(uint32_t *)(iVar7 + param_5) = *(uint32_t *)((int)apuStack_1c + iVar3 + 8);
    iVar3 = iVar7;
  } while (iVar7 != 0);
  return;
}
