/* @k10d issue_sequential_command_updates @ 0x10471c18
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Reads two state bytes, transforms a local buffer, and issues a sequence of command
 *   updates via a helper.
 * summary:
 *   The function initializes a local buffer and calls dispatch_actuator_drive_command with
 *   specific parameters. It retrieves a pointer via
 *   get_or_create_singleton_object_1046d20c, processes data through
 *   alloc_and_init_small_struct_1045c524 and forward_param_to_helper_1046c8e8, and reads
 *   two bytes via read_byte_at_offset_six and read_byte_at_offset_seven. These values are
 *   passed to format_string_to_buffer_10545140, followed by multiple calls to
 *   dispatch_actuator_drive_command with different command codes (4 and 5) and data
 *   pointers, suggesting a sequence of state updates or command transmissions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void issue_sequential_command_updates(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  byte bVar4;
  byte bVar5;
  uint16_t *puVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStackY_a0 [2];
  uint8_t auStack_68 [79];
  uint8_t auStack_19 [9];
  uint16_t auStack_10 [4];
  
  puVar8 = auStackY_a0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9b68/*ROM*/,6,0xff,'\0');
  iVar2 = get_or_create_singleton_object_1046d20c();
  iVar1 = *(int *)(iVar2 + 4);
  process_param_with_helper(iVar1);
  puVar8[3] = 0;
  puVar8[7] = 0;
  puVar8[0xb] = 0;
  puVar6 = (uint16_t *)(auStack_19 + 9);
  puVar8[0xf] = 0;
  alloc_and_init_small_struct_1045c524(puVar6,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar8[3],puVar8[7],puVar8[0xb],puVar8[0xf]);
  iVar2 = 8;
  do {
    iVar7 = iVar2 + -1;
    auStack_19[iVar2] = auStack_19[iVar2 + 8];
    iVar2 = iVar7;
  } while (iVar7 != 0);
  forward_param_to_helper_1046c8e8(iVar1,auStack_19 + 1);
  free_heap_if_flag_set_1045c56c(auStack_19 + 1,2);
  uVar3 = call_helper_with_second_arg_1046c8d6(iVar1);
  bVar4 = read_byte_at_offset_six(puVar6);
  bVar5 = read_byte_at_offset_seven(puVar6);
  format_string_to_buffer_10545140(auStack_68,(void *)&DAT_105a9b74/*ROM*/,(void *)(uint)bVar4,(void *)(uint)bVar5);
  *(uint16_t *)(puVar8 + 2) = 6;
  *(uint16_t *)(puVar8 + 6) = 0xff;
  puVar8[0xb] = 0;
  dispatch_actuator_drive_command(param_1,5,2,(void *)auStack_68,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
               puVar8[0xb]);
  wait_for_state_two_with_optional_delay(param_1,uVar3);
  *(uint16_t *)(puVar8 + 2) = 6;
  *(uint16_t *)(puVar8 + 6) = 0xff;
  puVar8[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9b8c/*ROM*/,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
               puVar8[0xb]);
  *(uint16_t *)(puVar8 + 2) = 6;
  *(uint16_t *)(puVar8 + 6) = 0xff;
  puVar8[0xb] = 0;
  dispatch_actuator_drive_command(param_1,5,2,(void *)&DAT_105a9ba0/*ROM*/,*(uint16_t *)(puVar8 + 2),*(uint16_t *)(puVar8 + 6),
               puVar8[0xb]);
  free_heap_if_flag_set_1045c56c(puVar6,2);
  return;
}
