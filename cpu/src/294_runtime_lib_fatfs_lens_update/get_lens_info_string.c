/* @k10d get_lens_info_string @ 0x1053f5ae
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Retrieves a string field from a lens context object and copies it to an output buffer.
 * summary:
 *   The function validates the output buffer pointer and calls lookup_table_entry_by_match
 *   to obtain a lens context handle. It checks a status field at offset 0x6e in the
 *   context; if zero, it calls scan_record_array_for_marker to fetch a string into a local
 *   stack buffer. The function trims trailing spaces from the string, copies it to the
 *   caller's buffer via copy_null_terminated_string, and returns the length via
 *   count_string_bytes. Error codes -2 and -0x32a result in an empty string and success
 *   return.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1053f5f0) */
/* WARNING: Removing unreachable block (ram,0x1053f660) */

int get_lens_info_string(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  char acStack_2c [12];
  uint32_t auStack_20 [3];
  void *pvStack_14;
  
  if (param_2 == (char *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = lookup_table_entry_by_match(param_1,&pvStack_14);
    if (iVar1 == 0) {
      if (*(short *)(*(int *)((int)pvStack_14 + 100) + 0xe) == 0) {
        iVar1 = scan_record_array_for_marker(pvStack_14,auStack_20,acStack_2c);
        if (iVar1 == 0) {
          iVar1 = 10;
          do {
            if (acStack_2c[iVar1] != ' ') break;
            iVar2 = iVar1 + -1;
            acStack_2c[iVar1] = '\0';
            iVar1 = iVar2;
          } while (-1 < iVar2);
          copy_null_terminated_string(param_2,acStack_2c);
          iVar1 = count_string_bytes(param_2);
        }
        else if ((iVar1 == -2) || (iVar1 == -0x32a)) {
          *param_2 = '\0';
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -6;
      }
    }
  }
  return iVar1;
}
