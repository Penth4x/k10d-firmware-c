/* @k10d release_twai_sem_unit @ 0x100117b4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Releases a timed-waiting semaphore unit by writing state fields and dispatching a wake-
 *   up or timeout handler.
 * summary:
 *   The function writes three values (4, 2, and param_1) into a per-unit control block at
 *   0x6a001c06 + unit*0x44. It calls ready_list_unlink with the unit index, then branches
 *   based on a flag at DAT_10011d14 + param_1*10 - 6. If the flag is zero, it calls
 *   remove_node_from_timeout_queue_10011a20; otherwise, it calls insert_into_priority_queue
 *   with the unit index and a pointer to the control block. The caller is the verified
 *   uITRON twai_sem service, suggesting this handles the release or timeout path of a timed
 *   semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_twai_sem_unit(short param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = _DAT_6a003758;
  iVar2 = (int)_DAT_6a003758;
  *(uint8_t *)(_DAT_6a003758 * 0x44 + 0x6a001c06) = 4;
  *(uint8_t *)(iVar2 * 0x44 + 0x6a001c07) = 2;
  *(short *)(sVar1 * 0x44 + 0x6a001c08) = param_1;
  ready_list_unlink(sVar1);
  iVar2 = DAT_10011d14/*ROM*/ + param_1 * 10;
  if (*(short *)(iVar2 + -6) == 0) {
    remove_node_from_timeout_queue_10011a20((short *)(iVar2 + -10));
  }
  else {
    insert_into_priority_queue(_DAT_6a003758,(short *)(iVar2 + -10));
  }
  return;
}
