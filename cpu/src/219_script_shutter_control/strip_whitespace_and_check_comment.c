/* @k10d strip_whitespace_and_check_comment @ 0x104b6a2e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Removes leading whitespace and @-prefixed tokens from a string, then checks if it
 *   starts with a // comment.
 * summary:
 *   The function modifies the input string in-place by skipping over leading spaces, tabs,
 *   commas, and sequences of '@' characters. It then compacts the remaining string to the
 *   beginning of the buffer. Finally, it checks if the resulting string starts with '//'
 *   and returns 0 if it does, or 1 otherwise. This behavior is consistent with parsing
 *   configuration or script lines where comments and specific prefixes are ignored.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t strip_whitespace_and_check_comment(void *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  
  cVar1 = *param_2;
  iVar3 = 0;
  if (cVar1 == ' ') goto LAB_104b6a54;
  if (cVar1 == ',') goto LAB_104b6a54;
  if (cVar1 == '\t') goto LAB_104b6a54;
  if (cVar1 == -0x7f) {
    cVar2 = param_2[1];
    while (cVar2 == '@') {
LAB_104b6a54:
      do {
        iVar4 = iVar3;
        if ((param_2[iVar3] == -0x7f) && (param_2[iVar3 + 1] == '@')) {
          iVar4 = iVar3 + 1;
        }
        iVar3 = iVar4 + 1;
      } while (((param_2[iVar3] == ' ') || (param_2[iVar3] == ',')) || (param_2[iVar3] == '\t'));
      if (param_2[iVar3] != -0x7f) break;
      cVar2 = param_2[iVar4 + 2];
    }
  }
  iVar4 = 0;
  while (cVar1 != '\0') {
    param_2[iVar4] = param_2[iVar3];
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = param_2[iVar4];
  }
  if ((*param_2 == '/') && (param_2[1] == '/')) {
    *param_2 = '\0';
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}
