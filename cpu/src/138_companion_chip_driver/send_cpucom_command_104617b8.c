/* @k10d send_cpucom_command_104617b8 @ 0x104617b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Sends a command to the companion chip via CPUCOM and updates the object's status byte.
 * summary:
 *   Checks a condition via set_pointer_and_clear_flag. If true, sets a CPUCOM command using
 *   cpucom_msg_set_cmd, performs several CPUCOM-related operations (cpucom_resp_set_insize,
 *   set_ptr_if_field_is_null, set_object_field_at_offset_0x14, write_word_at_offset_16),
 *   and updates the status byte at offset 0x51 of the object. Returns the status byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t send_cpucom_command_104617b8(int *param_1,void *param_2)

{
  bool bVar3;
  void *pvVar1;
  uint32_t uVar2;
  void *pvVar4;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar3) {
    cpucom_msg_set_cmd((void *)param_1[6],uRam105a71ea);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a71eb);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x104000a);
    uVar2 = get_registered_reply_code(param_1);
    *(char *)((int)param_1 + 0x51) = (char)uVar2;
    if (*(char *)((int)param_1 + 0x51) == '\0') {
      delete_signal_semaphore(param_1 + 7);
    }
  }
  return *(uint8_t *)((int)param_1 + 0x51);
}
