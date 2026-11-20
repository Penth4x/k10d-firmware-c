/* @k10d parse_line_terminated_record @ 0x104b66d2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Extracts a CRLF-terminated line from a buffer and advances the read offset past it.
 * summary:
 *   The function reads a starting offset from param_1+0x1e0 into *param_3, then scans the
 *   buffer at param_1+8 for a '\r\n' sequence up to the length at param_1+0xc. It uses
 *   find_common_string_prefix with several DAT constants (likely format strings or command
 *   codes) to validate or process the extracted line. If a line is found, it updates
 *   *param_3 to the end of the line and continues scanning for subsequent lines until a
 *   condition fails, finally storing the final offset in *param_4 and returning 1. The
 *   repeated calls to find_common_string_prefix suggest it is a string formatting or
 *   comparison routine used to parse structured text data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_line_terminated_record(int param_1,void *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint8_t *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uintptr_t sp;
  uint8_t auStack_58 [80];
  
  *param_3 = *(uint *)(param_1 + 0x1e0);
  iVar4 = (uintptr_t)(find_common_string_prefix(param_2,&DAT_105b8910/*ROM*/));
  if (iVar4 == 0) {
    uVar5 = *(uint *)(param_1 + 0x1e0);
    if (uVar5 < *(uint *)(param_1 + 0xc)) {
      iVar4 = *(int *)(param_1 + 8);
      puVar2 = &stack0xfffffff8;
      uVar1 = uVar5;
      do {
        uVar1 = uVar1 + 1;
        puVar2[-0x50] = *(uint8_t *)(iVar4 + uVar5);
        iVar4 = *(int *)(param_1 + 8);
        if ((*(char *)(iVar4 + uVar5) == '\r') && (*(char *)(iVar4 + uVar1) == '\n')) {
          puVar2[-0x50] = 0;
          break;
        }
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    iVar4 = (uintptr_t)(find_common_string_prefix(auStack_58,&DAT_105b8914/*ROM*/));
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      *param_3 = uVar5 + 2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  uVar5 = *param_3;
  if (iVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    do {
      if (uVar5 < uVar1) {
        iVar3 = *(int *)(param_1 + 8);
        puVar2 = &stack0xfffffff8;
        uVar1 = uVar5;
        do {
          uVar1 = uVar1 + 1;
          puVar2[-0x50] = *(uint8_t *)(iVar3 + uVar5);
          iVar3 = *(int *)(param_1 + 8);
          if ((*(char *)(iVar3 + uVar5) == '\r') && (*(char *)(iVar3 + uVar1) == '\n')) {
            puVar2[(int)(auStack_58 + -(int)&stack0xfffffff8)] = 0;
            uVar5 = uVar5 + 2;
            break;
          }
          uVar5 = uVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0xc));
      }
      iVar3 = (uintptr_t)(find_common_string_prefix(auStack_58,&DAT_105b8918/*ROM*/));
      if (iVar3 == 0) {
        iVar3 = (uintptr_t)(find_common_string_prefix(auStack_58,&DAT_105b891c/*ROM*/));
        if (iVar3 != 0) {
          iVar4 = iVar4 + -1;
        }
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar1 = *(uint *)(param_1 + 0xc);
      if (uVar1 <= uVar5) {
        return 0;
      }
    } while (iVar4 != 0);
  }
  *param_4 = uVar5;
  return 1;
}
