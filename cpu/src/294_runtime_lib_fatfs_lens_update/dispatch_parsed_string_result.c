/* @k10d dispatch_parsed_string_result @ 0x10537ad4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Parses an input string and dispatches to a handler based on whether the input or parsed
 *   result is empty.
 * summary:
 *   Calls parse_and_validate_short_token to process param_1 into a local buffer. If
 *   successful, it checks if the first byte of the string pointed to by param_3 is null
 *   (returning error -0x16), or if the local buffer is null (calling
 *   allocate_lens_update_slot to retrieve a value into param_2), otherwise it calls
 *   lookup_table_entry_by_match with the parsed buffer and param_2. The function acts as a
 *   state-based dispatcher for string processing results.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_parsed_string_result(char *param_1,uint32_t *param_2,int *param_3)

{
  int iVar1;
  uintptr_t sp;
  char acStack_24 [12];
  int iStack_18;
  
  iVar1 = parse_and_validate_short_token(param_1,acStack_24,param_3);
  if (iVar1 == 0) {
    if (*(char *)*param_3 == '\0') {
      iVar1 = -0x16;
    }
    else if (acStack_24[0] == '\0') {
      iVar1 = allocate_lens_update_slot(&iStack_18);
      if (iVar1 == 0) {
        *param_2 = *(uint32_t *)(iStack_18 + 8);
      }
    }
    else {
      iVar1 = lookup_table_entry_by_match(acStack_24,param_2);
    }
  }
  return iVar1;
}
