/* @k10d parse_and_mask_hex_string @ 0x104b6ad8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Parses a hex/decimal string via a helper, then blanks out the trailing digits of the
 *   input buffer.
 * summary:
 *   Detects a leading '0x' prefix to select a base-3 table offset, then calls
 *   count_lens_fw_update_chars to convert the string into a numeric value stored in a local
 *   (returned in r4). If the parse fails (-1), it calls cmd_error_report with 0x90. It then
 *   scans the string for trailing digit characters and overwrites them with spaces, finally
 *   calling strip_whitespace_and_check_comment with the object and the modified string.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_and_mask_hex_string(int param_1,char *param_2,uint32_t param_3,void *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar3 = 0;
  if (*param_2 == '0') {
    if ((param_2[1] == 'x') || (param_2[1] == 'X')) {
      iVar2 = 0;
      iVar3 = 2;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 2;
  }
  iVar2 = count_lens_fw_update_chars((byte *)(param_2 + iVar3),(byte *)(&DAT_105b88eb/*ROM*/ + iVar2 * 3),&uStack_c,param_4);
  if (iVar2 == -1) {
    cmd_error_report((void *)(param_1 + 4),0x90);
  }
  bVar1 = param_2[iVar3];
  if ((bVar1 < 0x66) && (0x2f < bVar1)) {
    while ((bVar1 & 0xf) < 10) {
      iVar3 = iVar3 + 1;
      bVar1 = param_2[iVar3];
      if ((0x65 < bVar1) || (bVar1 < 0x30)) break;
    }
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar3 = iVar3 + -3;
    if (2 < iVar3) {
      do {
        param_2[iVar2] = ' ';
        param_2[iVar2 + 1] = ' ';
        param_2[iVar2 + 2] = ' ';
        iVar3 = iVar3 + -3;
        iVar2 = iVar2 + 3;
      } while (-1 < iVar3);
    }
    for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
      param_2[iVar2] = ' ';
      iVar2 = iVar2 + 1;
    }
  }
  strip_whitespace_and_check_comment((void *)param_1,param_2);
  return uStack_c;
}
