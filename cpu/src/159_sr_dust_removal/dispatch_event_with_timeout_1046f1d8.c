/* @k10d dispatch_event_with_timeout_1046f1d8 @ 0x1046f1d8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sends an event to a queue and waits for a response with a timeout.
 * summary:
 *   The function calls eventflag_clr_flg on a field at offset 0x44, likely to set a flag or
 *   state. It then calls send_buffer_in_chunks with a pointer from offset 0x34, a pointer
 *   to offset 4, and param_2. If the result is non-zero, it calls twai_flg_obj on the same
 *   offset 0x44 field with a timeout value from _DAT_105a2af0. The use of twai_flg_obj
 *   (wait flag object) strongly suggests a synchronization or timeout mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_1046f1d8(int param_1,void *param_2)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  iVar1 = send_buffer_in_chunks((void *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4),param_2);
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
