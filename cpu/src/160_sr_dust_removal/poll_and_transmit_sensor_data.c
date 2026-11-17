/* @k10d poll_and_transmit_sensor_data @ 0x1046fe32
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Polls a data-ready flag and transmits sensor readout packets via a communication
 *   interface.
 * summary:
 *   Initializes two class instances and sets a control flag. Enters a loop while the flag
 *   at offset 0x12 is zero, calling virtual methods to retrieve data pointers and
 *   transmitting them via sr_dma_command with specific command codes (2, 4, 5, 7). The loop
 *   terminates when the flag is set, likely by an interrupt or status update. Cleans up the
 *   class instances and resets the control flag upon exit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_transmit_sensor_data(int param_1)

{
  void *pvVar1;
  uint8_t *puVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_a0 [8];
  uint8_t auStack_68 [80];
  uint8_t auStack_18 [8];
  uint8_t auStack_10 [8];
  
  puVar3 = auStack_a0;
  *(uint8_t *)(param_1 + 0x12) = 0;
  forward_event_to_subobject(param_1,1);
  cls_105a6cb4_new(auStack_18);
  cls_105a6b4c_new(auStack_10);
  check_kernel_call_success_10459fea();
  puVar2 = &DAT_105a9614/*ROM*/;
  *(uint16_t *)(puVar3 + 2) = 3;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  sr_dma_command(param_1,2,6,&DAT_105a9614/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6));
  if (*(char *)(param_1 + 0x12) == '\0') {
    do {
      copy_four_bytes_from_offset(*(int *)(param_1 + 0x30),auStack_18);
      copy_three_bytes_from_offset(*(int *)(param_1 + 0x30),auStack_10);
      pvVar1 = (void *)read_pair_from_object(auStack_18,0);
      format_string_to_buffer_10545140(auStack_68,&DAT_105a9624/*ROM*/,pvVar1,puVar2);
      *(uint16_t *)(puVar3 + 2) = 7;
      *(uint16_t *)(puVar3 + 6) = 0xff;
      puVar2 = auStack_68;
      sr_dma_command(param_1,4,2,auStack_68,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6))
      ;
      pvVar1 = (void *)read_pair_from_object(auStack_18,1);
      format_string_to_buffer_10545140(auStack_68,&DAT_105a9638/*ROM*/,pvVar1,puVar2);
      *(uint16_t *)(puVar3 + 2) = 7;
      *(uint16_t *)(puVar3 + 6) = 0xff;
      puVar2 = auStack_68;
      sr_dma_command(param_1,5,2,auStack_68,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6))
      ;
      pvVar1 = (void *)read_two_byte_field(auStack_10);
      format_string_to_buffer_10545140(auStack_68,&DAT_105a964c/*ROM*/,pvVar1,puVar2);
      *(uint16_t *)(puVar3 + 2) = 7;
      *(uint16_t *)(puVar3 + 6) = 0xff;
      puVar2 = auStack_68;
      sr_dma_command(param_1,7,2,auStack_68,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6))
      ;
      check_kernel_call_success_10459fea();
    } while (*(char *)(param_1 + 0x12) == '\0');
  }
  *(uint8_t *)(param_1 + 0x12) = 0;
  forward_event_to_subobject(param_1,0);
  cls_105a6b4c_delete(auStack_10,2);
  cls_105a6cb4_delete(auStack_18,2);
  return;
}
