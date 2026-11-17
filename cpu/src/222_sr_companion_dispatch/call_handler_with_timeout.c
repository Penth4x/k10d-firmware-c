/* @k10d call_handler_with_timeout @ 0x104b9536
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a handler via a pointer in the object if a condition check passes, using a
 *   timeout mechanism.
 * summary:
 *   The function first calls set_pointer_and_clear_flag with pointers to offsets 0x2c and 4
 *   of the input object. If this returns true, it calls eventflag_clr_flg, then invokes the
 *   function pointer stored at offset 0x18 of the object, passing the object, the constant
 *   6, and the second parameter. If the result is non-zero, it calls twai_flg_obj. Finally,
 *   it calls delete_signal_semaphore and returns the result of the handler call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_handler_with_timeout(int param_1,uint8_t param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),6,param_2);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
