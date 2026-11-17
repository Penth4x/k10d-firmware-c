/* @k10d parse_delimited_token @ 0x1053ee92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Recursively extracts a delimited token from a string, trims trailing spaces, and copies
 *   it into a buffer.
 * summary:
 *   The function uses find_last_path_separator to find a delimiter in param_1. It trims
 *   trailing spaces and handles dot-prefixed tokens specially. It calls memcpy_bytes to
 *   copy the token into a buffer managed by param_2 and updates counters in param_3 and
 *   param_4. The module context is lens firmware update, but the function itself performs
 *   generic string tokenization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int parse_delimited_token(char *param_1,void *param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    *param_3 = 0;
    iVar1 = 0;
    param_3 = param_4;
    goto LAB_1053ef52;
  }
  uVar2 = find_last_path_separator(param_1);
  if (param_1[uVar2] == '\0') {
    if (uVar2 != 0) {
      for (pcVar3 = param_1 + (uVar2 - 1); *pcVar3 == ' '; pcVar3 = pcVar3 + -1) {
        uVar2 = uVar2 - 1;
      }
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    param_2 = (void *)parse_delimited_token(param_1 + uVar2 + 1,param_2,param_3,param_4);
  }
  if (uVar2 < 3) {
    if (uVar2 == 0) {
      return (int)param_2;
    }
    if (*param_1 != '.') goto LAB_1053ef1c;
    if (uVar2 == 1) {
      return (int)param_2;
    }
    iVar1 = *param_4;
    if (param_1[1] == '.') {
      *param_4 = iVar1 + 1;
      return (int)param_2;
    }
  }
  else {
LAB_1053ef1c:
    iVar1 = *param_4;
  }
  if (iVar1 == 0) {
    param_2 = (void *)((int)param_2 - (uVar2 + 1));
    memcpy_bytes(param_2,param_1,uVar2);
    *(uint8_t *)(uVar2 + (int)param_2) = 0;
    iVar1 = *param_3 + 1;
  }
  else {
    iVar1 = *param_4 + -1;
    param_3 = param_4;
  }
LAB_1053ef52:
  *param_3 = iVar1;
  return (int)param_2;
}
