/* @k10d send_cpucom_command_sequence_10462982 @ 0x10462982
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, sends a series of command bytes to the companion chip via CPUCOM, and
 *   releases the lock.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to acquire a resource (likely a
 *   mutex or semaphore) associated with param_1+0x1c. If successful, it invokes
 *   cpucom_msg_set_cmd and a sequence of FUN_104655xx functions to transmit specific
 *   command values (DAT_105a7306, DAT_105a7307, 0x0, param_1+4, 0x1050006) to the companion
 *   chip. It then calls get_registered_reply_code to process the result or wait for a
 *   response, and finally releases the resource via invoke_listener_slot_two. The specific
 *   camera subsystem (e.g., lens, flash, sensor) is not identifiable from the generic
 *   command values and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_cpucom_command_sequence_10462982(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)((int)param_1 + 0x1c),param_2);
  iVar2 = 0;
  if (bVar1) {
    cpucom_msg_set_cmd((uint8_t *)(*(uint32_t *)((int)param_1 + 0x18)),(uint8_t)(DAT_105a7306/*ROM*/));
    cpucom_resp_set_insize(*(void **)((int)param_1 + 0x18),(uint)DAT_105a7307/*ROM*/);
    set_ptr_if_field_is_null(*(void **)((int)param_1 + 0x18),(void *)0x0);
    set_object_field_at_offset_0x14(*(void **)((int)param_1 + 0x18),(void *)((int)param_1 + 4));
    write_word_at_offset_16(*(void **)((int)param_1 + 0x18),0x1050006);
    eventflag_clr_flg((uint32_t *)((int)param_1 + 0x34),3);
    iVar2 = get_registered_reply_code(param_1);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)((int)param_1 + 0x34),3,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    invoke_listener_slot_two((int *)((int)param_1 + 0x1c));
  }
  return iVar2;
}
