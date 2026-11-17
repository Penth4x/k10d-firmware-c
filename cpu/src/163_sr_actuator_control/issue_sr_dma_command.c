/* @k10d issue_sr_dma_command @ 0x10470b86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructs a small packet from two values extracted via helper calls and sends it
 *   through a dispatch routine.
 * summary:
 *   The function allocates a temporary object (cls_105a6f84_new), initializes it with a
 *   value from param_1+0x30, and extracts two primary values (pvVar1, pvVar2) using
 *   invoke_virtual_slot_6_10460914 and invoke_virtual_slot_6_10460932. Depending on
 *   param_2, it either uses a default constant or extracts two additional values (uVar3,
 *   uVar4) to form a 4-byte payload. It then calls format_string_to_buffer_10545140 to
 *   process this data into a buffer, sets two 16-bit fields in the buffer to 7 and 0xff,
 *   and finally calls sr_dma_command to transmit the constructed packet. The temporary
 *   object is deleted at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_sr_dma_command(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  char *pcVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t local_88 [8];
  uint8_t auStack_64 [80];
  int aiStack_14 [3];
  
  puVar6 = (uint32_t *)local_88;
  cls_105a6f84_new(aiStack_14);
  copy_eight_bytes_from_struct(*(int *)(param_1 + 0x30),aiStack_14);
  if (param_2 == 0) {
    pvVar1 = (void *)invoke_virtual_slot_6_10460914(aiStack_14);
    pvVar2 = (void *)invoke_virtual_slot_6_10460932(aiStack_14);
    pcVar5 = (char *)&DAT_105a974c/*ROM*/;
  }
  else {
    pvVar1 = (void *)invoke_virtual_slot_6_10460914(aiStack_14);
    pvVar2 = (void *)invoke_virtual_slot_6_10460932(aiStack_14);
    uVar3 = call_virtual_slot_6_1046096e(aiStack_14);
    uVar4 = invoke_virtual_slot_6_1046098c(aiStack_14);
    *puVar6 = uVar3;
    puVar6[1] = uVar4;
    pcVar5 = (char *)&DAT_105a9730/*ROM*/;
  }
  format_string_to_buffer_10545140(auStack_64,pcVar5,pvVar1,pvVar2);
  *(uint16_t *)((int)puVar6 + 2) = 7;
  *(uint16_t *)((int)puVar6 + 6) = 0xff;
  sr_dma_command(param_1,5,5,auStack_64,*(uint16_t *)((int)puVar6 + 2),
                 *(uint16_t *)((int)puVar6 + 6));
  cls_105a6f84_delete(aiStack_14,2);
  return;
}
