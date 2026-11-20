/* @k10d mbx_receive_message_1045994c @ 0x1045994c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Receives a message from the mailbox whose id is *param_1, copies the 32-bit payload at
 *   offset +8 into *param_2, and frees the message.
 * summary:
 *   Calls dequeue_timeout_queue_entry with the mailbox id and a pointer to a local variable
 *   that receives the message pointer. On success (return 0), if a message pointer was
 *   returned, it extracts the 4 bytes at offset 8 into *param_2 and calls heap_free on the
 *   message. Returns 1 on success, 0 on failure. This is the receive counterpart to
 *   mbx_send_message in the same RTOS wrapper module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

uint32_t mbx_receive_message_1045994c(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  *param_2 = 0;
  iVar1 = __trap_dequeue_timeout_queue_entry((int)(short)*param_1,&iStack_c);
  if (iVar1 == 0) {
    if (iStack_c != 0) {
      *param_2 = CONCAT13(*(uint8_t *)(iStack_c + 0xb),
                          CONCAT12(*(uint8_t *)(iStack_c + 10),
                                   CONCAT11(*(uint8_t *)(iStack_c + 9),
                                            *(uint8_t *)(iStack_c + 8))));
      heap_free(iStack_c);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
