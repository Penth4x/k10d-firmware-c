/* @k10d compare_null_terminated_strings @ 0x105452da
 * name: model (proposed by the local model from the decompile, confidence 1.00)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Performs a byte-wise lexicographic comparison of two null-terminated strings.
 * summary:
 *   Iterates through both input strings byte-by-byte until a mismatch or a null terminator
 *   is found. Returns the difference between the first differing bytes, or 0 if the strings
 *   are identical. This is a standard string comparison routine (equivalent to strcmp) used
 *   by callers like match_service_token to compare firmware update tokens.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_null_terminated_strings(void *param_1,void *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pbVar1 = (byte *)(iVar3 + (int)param_2);
    iVar2 = (uint)*(byte *)(iVar3 + (int)param_1) - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (*pbVar1 != 0);
  return 0;
}
