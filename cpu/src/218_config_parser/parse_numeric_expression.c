/* @k10d parse_numeric_expression @ 0x104b6444
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Parses a numeric string into a value, handling signs, hex, and percent-based
 *   expressions.
 * summary:
 *   The function skips leading whitespace and an optional minus sign. It then dispatches to
 *   helper functions (parse_exposure_mode_char for '%' expressions, parse_line_after_header
 *   for non-numeric, or count_lens_fw_update_chars for standard/hex integers) to compute
 *   the value. It pads the input string with spaces, calls
 *   strip_whitespace_and_check_comment, and returns the computed value (negated if a minus
 *   sign was present).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint parse_numeric_expression(uint32_t *param_1,int param_2,char *param_3,void *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  bool bVar6;
  bool bVar7;
  uint uStack_c;
  
  uStack_c = 0;
  cVar1 = param_3[param_2];
  while (cVar1 == ' ') {
    param_2 = param_2 + 1;
    cVar1 = param_3[param_2];
  }
  cVar1 = param_3[param_2];
  if (cVar1 == '-') {
    param_2 = param_2 + 1;
  }
  bVar2 = param_3[param_2];
  if ((bVar2 < 0x30) || (0x39 < bVar2)) {
    if (bVar2 == 0x25) {
      param_2 = param_2 + 1;
      uVar4 = parse_exposure_mode_char(param_1,(byte *)(param_3 + param_2));
      uStack_c = param_1[uVar4 + 0xe];
      bVar7 = param_2 < 0;
      bVar6 = param_2 == 0;
      goto LAB_104b653e;
    }
    uStack_c = parse_line_after_header(param_1,param_3 + param_2,__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  }
  else {
    if (bVar2 == 0x30) {
      if ((param_3[param_2 + 1] == 'x') || (param_3[param_2 + 1] == 'X')) {
        iVar3 = 0;
        param_2 = param_2 + 2;
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 2;
    }
    iVar3 = count_lens_fw_update_chars((byte *)(param_3 + param_2),&DAT_105b88eb/*ROM*/ + iVar3 * 3,&uStack_c,param_4);
    if (iVar3 == -1) {
      cmd_error_report((uint32_t *)(param_1[1]),(uint32_t)(0x90));
    }
    bVar2 = param_3[param_2];
    if (((bVar2 < 0x66) && (0x2f < bVar2)) && ((bVar2 & 0xf) < 10)) {
      do {
        param_2 = param_2 + 1;
        bVar2 = param_3[param_2];
        if ((0x65 < bVar2) || (bVar2 < 0x30)) goto LAB_104b653c;
      } while ((bVar2 & 0xf) < 10);
      bVar7 = param_2 < 0;
      bVar6 = param_2 == 0;
      goto LAB_104b653e;
    }
  }
LAB_104b653c:
  bVar7 = param_2 < 0;
  bVar6 = param_2 == 0;
LAB_104b653e:
  iVar3 = 0;
  if (!(bool)(bVar7 | bVar6)) {
    iVar5 = param_2 + -3;
    if (2 < iVar5) {
      do {
        param_3[iVar3] = ' ';
        param_3[iVar3 + 1] = ' ';
        param_3[iVar3 + 2] = ' ';
        iVar5 = iVar5 + -3;
        iVar3 = iVar3 + 3;
      } while (-1 < iVar5);
    }
    for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
      param_3[iVar3] = ' ';
      iVar3 = iVar3 + 1;
    }
  }
  strip_whitespace_and_check_comment(param_1,param_3);
  if (cVar1 == '-') {
    uStack_c = uStack_c ^ 0xffffffff;
  }
  return uStack_c;
}
