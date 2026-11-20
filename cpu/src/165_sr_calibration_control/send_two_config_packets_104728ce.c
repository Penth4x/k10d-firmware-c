/* @k10d send_two_config_packets_104728ce @ 0x104728ce
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two configuration packets to a peripheral, optionally including a computed
 *   payload.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with different data pointers
 *   (DAT_105a9f94 and a stack buffer). Between the calls, it conditionally constructs a
 *   payload using format_string_to_buffer_10545140 and passes it to
 *   wait_for_state_two_with_optional_delay. It also calls
 *   check_kernel_call_success_10459fea(1000), likely a delay or timeout. The specific
 *   subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_config_packets_104728ce(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *puVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStackY_88 [2];
  uint8_t auStack_5c [83];
  uint8_t uStack_9;
  
  puVar5 = auStackY_88;
  puVar4 = &DAT_105a9f94/*ROM*/;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9f94/*ROM*/,6,0xff,'\0');
  iVar1 = get_or_create_camera_object();
  iVar2 = sd_file_lookup_locked(*(void **)(iVar1 + 0xc),&DAT_105a9fa4/*ROM*/);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = get_or_create_singleton_object_10470d84();
    iVar1 = *(int *)(iVar1 + 4);
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    pvVar3 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
    format_string_to_buffer_10545140(auStack_5c,&DAT_105a9fa8/*ROM*/,pvVar3,puVar4);
    iVar1 = verify_card_data_integrity(iVar1,(int)auStack_5c,0);
    heap_free_if_flagged(&uStack_9,2);
  }
  wait_for_state_two_with_optional_delay(param_1,iVar1);
  check_kernel_call_success_10459fea();
  *(uint16_t *)(puVar5 + 2) = 6;
  *(uint16_t *)(puVar5 + 6) = 0xff;
  puVar5[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9fb8/*ROM*/,*(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6),
               puVar5[0xb]);
  return;
}
