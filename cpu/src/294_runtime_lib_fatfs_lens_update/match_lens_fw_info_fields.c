/* @k10d match_lens_fw_info_fields @ 0x1053b10e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Compares two fixed-offset text fields in a lens info struct against a formatted
 *   response buffer.
 * summary:
 *   The function validates that the string at param_1+0x28 matches the first field of a
 *   0x20-byte record in param_2, and the string at param_1+0x24 matches the second field.
 *   It enforces minimum field lengths of 8 and 11 characters, padding with spaces if
 *   shorter. Returns 0 on successful match, -1 on mismatch. Used in the lens firmware
 *   update module to verify lens identification data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t match_lens_fw_info_fields(void *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint32_t uVar4;
  char *pcVar5;
  
  iVar2 = 0;
  pcVar3 = (char *)((int)param_2 + (param_3 + -1) * 0x20);
  pcVar5 = (char *)((int)param_1 + 0x28);
  if (*pcVar3 == '\x05') {
    cVar1 = *pcVar5;
    pcVar5 = (char *)((int)param_1 + 0x29);
    if (cVar1 != -0x1b) {
      return 0xffffffff;
    }
    iVar2 = 1;
  }
  do {
    if (*pcVar5 != pcVar3[iVar2]) {
      return 0xffffffff;
    }
    pcVar5 = pcVar5 + 1;
    iVar2 = iVar2 + 1;
  } while (*pcVar5 != '\0');
  if (iVar2 < 8) {
    if (pcVar3[iVar2] != ' ') {
      return 0xffffffff;
    }
    iVar2 = 8;
  }
  pcVar5 = (char *)((int)param_1 + 0x24);
  while( true ) {
    if (*pcVar5 == '\0') {
      if ((iVar2 < 0xb) && (pcVar3[iVar2] != ' ')) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    if (*pcVar5 != pcVar3[iVar2]) break;
    pcVar5 = pcVar5 + 1;
    iVar2 = iVar2 + 1;
  }
  return 0xffffffff;
}
