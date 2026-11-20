/* @k10d send_nowait_message_and_wait @ 0x1046a492
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Sends a message with a NOWAIT flag to a queue and then polls for a response.
 * summary:
 *   The function constructs a message object on the stack and attempts to send it to a
 *   queue located at offset 0x248 of the first parameter using a 'NOWAIT' string. If the
 *   send succeeds, it calls an intermediate function with the original parameters and a
 *   timeout value of 6, then enters a loop polling a second function until it returns a
 *   value other than 1. Finally, it cleans up the message object and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_nowait_message_and_wait(void *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStack_3c [4];
  cls_105ab468 cStack_28;
  
  puVar2 = auStack_3c;
  cls_105ab468_new(&cStack_28);
  iVar1 = call_with_offset_lock_1048101c(*(void **)((int)param_1 + 0x248),s_C__NOWAIT_10547400,&cStack_28);
  if (iVar1 == 0) {
    *(uint16_t *)(puVar2 + 2) = 6;
    forward_params_to_helper_1046a5be(param_1,param_2,param_3,&DAT_105a8530/*ROM*/,*(uint16_t *)(puVar2 + 2));
    iVar1 = call_helper_with_lock_104812d0(*(void **)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
    while (iVar1 == 1) {
      iVar1 = call_helper_with_lock_104812d0(*(void **)((int)param_1 + 0x248),&DAT_1054739e/*ROM*/);
    }
  }
  cls_105ab468_delete(&cStack_28,2);
  return 1;
}
