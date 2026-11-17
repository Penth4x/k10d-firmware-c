/* @k10d mbx_receive_message @ 0x104598e8
 * name: verified (structural evidence: decomp + emulator trace: the CPUCOM task waits here and wakes on mbx_send_message)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Blocks receiving from the mailbox whose id is *param_1 (kernel service at TBR+0x2fc),
 *   copies the 32-bit payload at +8 into *param_2 and frees the message; true on success.
 * summary:
 *   VERIFIED: decomp + emulator trace: the CPUCOM task waits here and wakes on
 *   mbx_send_message
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool mbx_receive_message(uint32_t *param_1, uint32_t *param_2, uint32_t param_x2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  *param_2 = 0;
  iVar1 = realos_rcv_mbx((int)(short)*param_1,&iStack_c, __frv_reg_unset(6));
  if ((iVar1 == 0) && (iStack_c != 0)) {
    *param_2 = CONCAT13(*(uint8_t *)(iStack_c + 0xb),
                        CONCAT12(*(uint8_t *)(iStack_c + 10),
                                 CONCAT11(*(uint8_t *)(iStack_c + 9),
                                          *(uint8_t *)(iStack_c + 8))));
    heap_free(iStack_c);
  }
  return iVar1 == 0;
}
