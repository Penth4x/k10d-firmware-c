/* @k10d iterate_string_table_entries @ 0x105309c8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Iterates over a 29-entry pointer table, calling two helper functions on each entry
 *   until one returns non-zero.
 * summary:
 *   The function loops 29 times (0x1d), reading a pointer from a global table at
 *   DAT_-0x7ffeb7c4. For each entry it calls count_string_bytes to get a value, then calls
 *   compare_byte_arrays with param_2, the entry pointer, and that value. If
 *   compare_byte_arrays returns 0, it returns the current index; otherwise it continues. If
 *   all 29 entries are processed without a zero return, it returns -1. The specific roles
 *   of the callees and the table contents are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_string_table_entries(uint32_t param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  do {
    pcVar3 = *(char **)(iVar2 + -0x7ffeb7c4);
    iVar1 = count_string_bytes(pcVar3);
    iVar1 = compare_byte_arrays(param_2,pcVar3,iVar1);
    if (iVar1 == 0) {
      return iVar4;
    }
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar2 < 0x1d);
  return -1;
}
