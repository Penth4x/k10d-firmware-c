/* @k10d process_data_with_retry_flag @ 0x1054414a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Retrieves data, processes it, and conditionally re-processes based on a specific error
 *   code.
 * summary:
 *   The function calls lookup_table_entry_by_match to retrieve data into a stack variable.
 *   If successful, it calls start_update_if_flag_clear on that data. If
 *   start_update_if_flag_clear returns -6, it sets a flag and proceeds to call a function
 *   at 0x1053e63c. Finally, it calls init_lens_update_context_10537c34, returning -6 if the
 *   flag was set and the final call succeeded, otherwise returning the result of the final
 *   call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_data_with_retry_flag(void *param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar1 = lookup_table_entry_by_match(param_1,&uStack_c);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = start_update_if_flag_clear((void *)(uStack_c));
    if (iVar1 != 0) {
      if (iVar1 != -6) {
        return iVar1;
      }
      iVar2 = 1;
    }
    iVar1 = (*(code *)0x1053e63c/*ROM*/)(uStack_c);
    if ((iVar1 == 0) && (iVar1 = init_lens_update_context_10537c34((uint8_t *)(uStack_c),(uint32_t)(iVar2)), iVar2 == 1)) {
      iVar1 = -6;
    }
  }
  return iVar1;
}
