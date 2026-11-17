/* @k10d copy_string_with_limit @ 0x1054530c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies up to param_3 characters from param_2 into the buffer at param_1, null-
 *   terminating the result.
 * summary:
 *   The function first advances param_1 to the end of the string it points to (a no-op if
 *   param_1 is already null-terminated). It then copies bytes from param_2 into the buffer
 *   at param_1, stopping after param_3 characters or when a null byte is read from param_2.
 *   The destination is explicitly null-terminated after the copy. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_with_limit(char *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  do {
    cVar1 = *param_1;
    param_1 = param_1 + (cVar1 != '\0');
    iVar2 = 0;
  } while (cVar1 != '\0');
  do {
    iVar3 = iVar2;
    cVar1 = *(char *)(iVar3 + (int)param_2);
    if (param_3 < 1) break;
    param_1[iVar3] = cVar1;
    param_3 = param_3 + -1;
    iVar2 = iVar3 + 1;
  } while (cVar1 != '\0');
  param_1[iVar3] = '\0';
  return;
}
