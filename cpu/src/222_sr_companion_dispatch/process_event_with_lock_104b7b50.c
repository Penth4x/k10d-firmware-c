/* @k10d process_event_with_lock_104b7b50 @ 0x104b7b50
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, processes an event via a handler selected by a flag, and releases the
 *   lock.
 * summary:
 *   The function calls set_pointer_and_clear_flag to acquire a lock on the object at
 *   param_1+0x2c. If successful, it sets a flag at param_1+0x24, then calls either
 *   send_cpucom_command_sequence_10461662 or send_cpucom_command_sequence_10461286 based on
 *   param_2, passing a pointer from param_1+0xc and param_1+4. If the handler returns non-
 *   zero, it calls twai_flg_obj. Finally, it releases the lock via delete_signal_semaphore.
 *   The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_lock_104b7b50(int param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = (void *)(param_1 + 4);
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),pvVar2);
  iVar3 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    if (param_2 == 0) {
      iVar3 = send_cpucom_command_sequence_10461662(*(int **)(param_1 + 0xc),pvVar2);
    }
    else {
      iVar3 = send_cpucom_command_sequence_10461286(*(int **)(param_1 + 0xc),pvVar2);
    }
    if (iVar3 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar3;
}
