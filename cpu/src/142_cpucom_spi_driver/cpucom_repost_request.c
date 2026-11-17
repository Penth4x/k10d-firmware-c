/* @k10d cpucom_repost_request @ 0x104663ca
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clone_and_send_cpucom_msg)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Creates a copy of a CPUCOM message object and sends it to a mailbox.
 * summary:
 *   The function allocates a new message object using cpucom_request_clone, copies the
 *   command, size, and data payload from the source object (param_2) to the new object, and
 *   then sends the new object to the mailbox specified by param_1 via mbx_send_message. It
 *   acts as a clone-and-dispatch operation for CPUCOM transactions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_repost_request(void *param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  
  iVar3 = get_cpucom_msg_data_ptr_104655b6(param_2);
  pvVar4 = (void *)cpucom_request_clone(0,iVar3);
  uVar5 = cpucom_resp_get_byte0(param_2);
  cpucom_msg_set_cmd(pvVar4,uVar5);
  cpucom_resp_set_insize(pvVar4,iVar3);
  iVar6 = get_cpucom_msg_data_ptr_104655aa(pvVar4);
  iVar7 = get_cpucom_msg_data_ptr_104655aa(param_2);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar3 = iVar3 + -3;
    if (2 < iVar3) {
      do {
        *(uint8_t *)(iVar1 + iVar6) = *(uint8_t *)(iVar1 + iVar7);
        iVar2 = iVar1 + 2;
        *(uint8_t *)(iVar1 + 1 + iVar6) = *(uint8_t *)(iVar1 + 1 + iVar7);
        iVar1 = iVar1 + 3;
        iVar3 = iVar3 + -3;
        *(uint8_t *)(iVar2 + iVar6) = *(uint8_t *)(iVar2 + iVar7);
      } while (-1 < iVar3);
    }
    for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
      *(uint8_t *)(iVar1 + iVar6) = *(uint8_t *)(iVar1 + iVar7);
      iVar1 = iVar1 + 1;
    }
  }
  pvVar8 = (void *)read_struct_field_at_offset_0x14(param_2);
  set_object_field_at_offset_0x14(pvVar4,pvVar8);
  uVar5 = get_field_at_offset_0x10_104655ce(param_2);
  write_word_at_offset_16(pvVar4,uVar5);
  mbx_send_message((uint32_t *)((int)param_1 + 0x18),pvVar4,2);
  return;
}
