/* @k10d report_status_with_optional_lookup @ 0x10471d7a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Queries a status code, optionally performs a lookup and object construction, then
 *   reports the result and four fixed status entries.
 * summary:
 *   The function retrieves a pointer via get_or_create_camera_object and calls
 *   sd_file_lookup_locked to obtain a status code. If the code is non-zero, it initializes
 *   a temporary object (heap_alloc_one_byte_1045926e), extracts a value
 *   (get_kernel_object_id), constructs a buffer (format_string_to_buffer_10545140), and
 *   creates a temporary object (cls_105ab468_new) before calling
 *   call_with_offset_lock_1048101c to update the status. It then reports the status via
 *   wait_for_state_two_with_optional_delay and calls dispatch_actuator_drive_command four
 *   times with fixed parameters (6, 0xff, 0) and different data pointers, likely logging or
 *   updating status fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void report_status_with_optional_lookup(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_a0 [12];
  int iStack_84;
  uint8_t auStack_7c [80];
  uint8_t auStack_2c [35];
  uint8_t uStack_9;
  
  puVar4 = auStack_a0;
  iVar2 = get_or_create_camera_object();
  pvVar1 = *(void **)(iVar2 + 0xc);
  iStack_84 = sd_file_lookup_locked(pvVar1,&DAT_105a9bb4/*ROM*/);
  if (iStack_84 != 0) {
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    pvVar3 = (void *)get_kernel_object_id((int)&uStack_9);
    format_string_to_buffer_10545140(auStack_7c,(void *)&DAT_105a9bb8/*ROM*/,pvVar3,param_4);
    cls_105ab468_new(auStack_2c);
    iStack_84 = call_with_offset_lock_1048101c(pvVar1,auStack_7c,auStack_2c);
    cls_105ab468_delete(auStack_2c,2);
    heap_free_if_flagged(&uStack_9,2);
  }
  *(uint16_t *)(puVar4 + 2) = 6;
  *(uint16_t *)(puVar4 + 6) = 0xff;
  puVar4[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9bc8/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
               puVar4[0xb]);
  if (iStack_84 == 0) {
    *(uint16_t *)(puVar4 + 2) = 6;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
    dispatch_actuator_drive_command(param_1,5,2,(void *)&DAT_105a9bd8/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
                 puVar4[0xb]);
  }
  wait_for_state_two_with_optional_delay(param_1,iStack_84);
  *(uint16_t *)(puVar4 + 2) = 6;
  *(uint16_t *)(puVar4 + 6) = 0xff;
  puVar4[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9bec/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
               puVar4[0xb]);
  *(uint16_t *)(puVar4 + 2) = 6;
  *(uint16_t *)(puVar4 + 6) = 0xff;
  puVar4[0xb] = 0;
  dispatch_actuator_drive_command(param_1,5,2,(void *)&DAT_105a9c00/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
               puVar4[0xb]);
  return;
}
