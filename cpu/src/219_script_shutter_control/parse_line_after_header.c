/* @k10d parse_line_after_header @ 0x104b6d10
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Scans a buffer for a specific 7-byte header, extracts the following line, and
 *   dispatches it if it matches a prefix.
 * summary:
 *   The function iterates through a data buffer (param_1[2]) of length param_1[3] to find a
 *   hardcoded 7-byte sequence (0x23, 0x45, 0x44, 0x46, 0x49, 0x4e, 0x45). Upon finding the
 *   header, it copies the subsequent bytes into a local stack buffer until a carriage
 *   return/line feed pair or the end of the buffer is reached. It then calls
 *   strip_whitespace_and_check_comment with the extracted line. If the first character of
 *   the extracted line matches the first character of param_2, it performs a character-by-
 *   character comparison, replacing characters in the local buffer with spaces until a
 *   mismatch or terminator is found. If a match is confirmed, it calls
 *   parse_numeric_expression with the modified buffer and returns its result. If no match
 *   is found, it calls cmd_error_report with a constant argument and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b6d4c) overlaps instruction at (ram,0x104b6d4a)
    */

uint parse_line_after_header(uint32_t *param_1,char *param_2,uint32_t param_3,void *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint8_t *puVar6;
  uint uVar7;
  uintptr_t sp;
  char acStack_60 [80];
  byte abStack_10 [8];
  
  abStack_10[3] = 0x46;
  abStack_10[0] = 0x23;
  abStack_10[4] = 0x49;
  abStack_10[1] = 0x44;
  abStack_10[5] = 0x4e;
  iVar5 = 0;
  abStack_10[2] = 0x45;
  abStack_10[6] = 0x45;
  abStack_10[7] = 0;
  uVar7 = 0;
  if (param_1[3] != 0) {
    iVar4 = 0;
    do {
      if (iVar5 == 0) {
        if (*(byte *)(param_1[2] + uVar7) == abStack_10[iVar4]) {
          iVar5 = 1;
          iVar4 = iVar4 + 1;
        }
      }
      else if (iVar5 == 1) {
        if (((uint)*(byte *)(param_1[2] + uVar7) == (uint)abStack_10[iVar4]) ||
           ((uint)*(byte *)(param_1[2] + uVar7) == abStack_10[iVar4] + 0x20)) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar5 = 0;
          iVar4 = 0;
        }
        if (iVar4 == 7) {
          iVar5 = 2;
        }
      }
      else if (iVar5 == 2) {
        if (uVar7 < (uint)param_1[3]) {
          iVar5 = param_1[2];
          puVar6 = &stack0xfffffff8;
          uVar3 = uVar7;
          do {
            uVar3 = uVar3 + 1;
            puVar6[-0x58] = *(uint8_t *)(iVar5 + uVar7);
            iVar5 = param_1[2];
            if ((*(char *)(iVar5 + uVar7) == '\r') && (*(char *)(iVar5 + uVar3) == '\n')) {
              puVar6[(int)(acStack_60 + -(int)&stack0xfffffff8)] = 0;
              break;
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar7 < (uint)param_1[3]);
        }
        strip_whitespace_and_check_comment(param_1,acStack_60);
        iVar5 = 0;
        if (*param_2 == acStack_60[0]) {
          do {
            acStack_60[iVar5] = ' ';
            iVar4 = iVar5 + 1;
            cVar1 = acStack_60[iVar5 + 1];
            if (((cVar1 == ' ') || (cVar1 == '\t')) &&
               ((cVar2 = param_2[iVar4], cVar2 == '\0' || ((cVar2 == '\t' || (cVar2 == ' ')))))) {
              uVar7 = parse_numeric_expression(param_1,0,acStack_60,param_4);
              return uVar7;
            }
            iVar5 = iVar4;
          } while (param_2[iVar4] == cVar1);
        }
        iVar5 = 0;
        iVar4 = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[3]);
  }
  cmd_error_report((uint32_t *)(param_1[1]),(uint32_t)(0x90));
  return 0;
}
