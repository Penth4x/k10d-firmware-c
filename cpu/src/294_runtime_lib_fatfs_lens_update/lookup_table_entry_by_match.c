/* @k10d lookup_table_entry_by_match @ 0x10537a66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Scans a 256-entry SDRAM table for the first entry that passes a match test, returning
 *   its pointer.
 * summary:
 *   Checks if the table base pointer _DAT_80014980 is non-null. If valid, it calls
 *   validate_alphanumeric_string to get a starting offset, then iterates through 256
 *   entries with a stride of 0x80 bytes. For each non-null entry, it calls
 *   compare_null_terminated_strings to test for a match; if successful, it stores the entry
 *   pointer in param_2 and returns 0. If no match is found, it sets param_2 to 0 and
 *   returns -0x13. Returns -0x259 if the table is not initialized.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int lookup_table_entry_by_match(void *param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_80014980/*SDRAM*/ == 0) {
    iVar1 = -0x259;
  }
  else {
    iVar1 = validate_alphanumeric_string(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
      do {
        pcVar3 = (char *)(_DAT_80014980/*SDRAM*/ + iVar1);
        *param_2 = (uint32_t)pcVar3;
        if ((*pcVar3 != '\0') && (iVar2 = compare_null_terminated_strings(param_1,pcVar3 + 1), iVar2 == 0)) {
          return 0;
        }
        iVar1 = iVar1 + 0x80;
      } while (iVar1 < 0x100);
      *param_2 = 0;
      iVar1 = -0x13;
    }
  }
  return iVar1;
}
