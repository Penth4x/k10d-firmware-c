/* @k10d find_common_string_prefix @ 0x1054536a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Finds the longest common prefix of two null-terminated strings and returns a pointer to
 *   the first differing position in the first string.
 * summary:
 *   The function iterates through both input strings simultaneously, comparing characters
 *   until a mismatch or a null terminator is encountered. If the second string ends first,
 *   it returns the pointer to the current position in the first string; if the first string
 *   ends first, it returns NULL. This is a standard string prefix-matching utility, likely
 *   used in the lens firmware update module for parsing or comparing firmware version
 *   strings or command tokens.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char * find_common_string_prefix(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  cVar4 = *param_2;
  cVar3 = *param_1;
  if (cVar4 == '\0') {
    return param_1;
  }
  do {
    do {
      pcVar5 = param_1;
      param_1 = pcVar5 + 1;
      if (cVar3 == '\0') {
        return (char *)0x0;
      }
      bVar7 = cVar4 != cVar3;
      cVar3 = *param_1;
    } while (bVar7);
    iVar6 = 1;
    do {
      pcVar1 = param_2 + iVar6;
      pcVar2 = pcVar5 + iVar6;
      if (*pcVar1 == '\0') {
        return pcVar5;
      }
      iVar6 = iVar6 + 1;
    } while (*pcVar1 == *pcVar2);
    cVar3 = *param_1;
    cVar4 = *param_2;
  } while( true );
}
