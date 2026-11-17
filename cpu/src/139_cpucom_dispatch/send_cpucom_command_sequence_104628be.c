/* @k10d send_cpucom_command_sequence_104628be @ 0x104628be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Sends a sequence of command and data bytes to the companion chip via the CPUCOM
 *   interface.
 * summary:
 *   The function first checks a condition using set_pointer_and_clear_flag. If true, it
 *   configures the CPUCOM message command using cpucom_msg_set_cmd and then issues a series
 *   of writes (cpucom_resp_set_insize, set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, write_word_at_offset_16) to the object at
 *   param_1+0x18. It updates a flag at param_1+0x34, calls get_registered_reply_code, and
 *   handles a timeout flag if the result is non-zero. Finally, it calls
 *   invoke_listener_slot_two to finalize the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_cpucom_command_sequence_104628be(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)((int)param_1 + 0x1c),param_2);
  iVar2 = 0;
  if (bVar1) {
    cpucom_msg_set_cmd((void *)(*(uint32_t *)((int)param_1 + 0x18)),DAT_105a7304/*ROM*/);
    cpucom_resp_set_insize(*(void **)((int)param_1 + 0x18),(uint)DAT_105a7305/*ROM*/);
    set_ptr_if_field_is_null(*(void **)((int)param_1 + 0x18),(void *)0x0);
    set_object_field_at_offset_0x14(*(void **)((int)param_1 + 0x18),(void *)((int)param_1 + 4));
    write_word_at_offset_16(*(void **)((int)param_1 + 0x18),0x1050005);
    eventflag_clr_flg((uint32_t *)((int)param_1 + 0x34),3);
    iVar2 = get_registered_reply_code(param_1);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)((int)param_1 + 0x34),3,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    invoke_listener_slot_two((int *)((int)param_1 + 0x1c));
  }
  return iVar2;
}
