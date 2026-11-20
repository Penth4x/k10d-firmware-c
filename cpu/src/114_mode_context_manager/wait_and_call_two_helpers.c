/* @k10d wait_and_call_two_helpers @ 0x1042fac2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Waits on a semaphore at param_1+0x28, then calls two helpers and frees the result if
 *   non-zero.
 * summary:
 *   Acquires a semaphore object located at param_1+0x28 using twai_sem_obj with a timeout
 *   constant. If the wait succeeds, it calls read_field_at_offset_0x44(param_1) and passes
 *   the result to app_mode_activate(param_1, result). If app_mode_activate returns a non-
 *   zero value, it calls invoke_virtual_slots_3_and_4 on that value plus 8. Finally, it
 *   signals the semaphore with sig_sem_obj and returns the original wait status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int wait_and_call_two_helpers(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar1 = twai_sem_obj((uint32_t *)(param_1 + 0x28),(int)(_DAT_105a2bf4/*ROM*/));
  if (iVar1 != 0) {
    uVar2 = read_field_at_offset_0x44(param_1);
    iVar3 = app_mode_activate(param_1,uVar2);
    if (iVar3 != 0) {
      invoke_virtual_slots_3_and_4(iVar3 + 8);
    }
    sig_sem_obj((uint32_t *)(param_1 + 0x28));
  }
  return iVar1;
}
