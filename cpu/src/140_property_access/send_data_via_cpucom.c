/* @k10d send_data_via_cpucom @ 0x10463d82
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Transmits a data buffer to the companion chip via the CPUCOM SPI interface after a pre-
 *   check.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to validate or prepare the context.
 *   If successful, it sets a command via cpucom_msg_set_cmd, initiates a transfer with
 *   cpucom_resp_set_insize, and copies data from a virtual object method result into a
 *   local buffer. It then sends the buffer and parameters using set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, and write_word_at_offset_16, finally calling
 *   get_registered_reply_code and delete_signal_semaphore to finalize the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_data_via_cpucom(int *param_1,void *param_2)

{
  uint uVar1;
  bool bVar3;
  int iVar2;
  uint32_t uVar4;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar4 = 0;
  if (bVar3) {
    cpucom_msg_set_cmd((void *)param_1[6],DAT_105a76e8/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a76e9/*ROM*/);
    iVar2 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1);
    uVar1 = (uint)DAT_105a76e9/*ROM*/;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      *(uint8_t *)(uVar1 + (int)(param_1 + 0x12)) = *(uint8_t *)(uVar1 + iVar2);
    }
    set_ptr_if_field_is_null((void *)param_1[6],param_1 + 0x12);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1070001);
    uVar4 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar4;
}
