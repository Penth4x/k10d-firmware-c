/* @k10d send_two_config_blocks_and_compare @ 0x104729c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two configuration blocks via dispatch_actuator_drive_command, compares two values
 *   from alloc_and_init_small_struct_1045c524 objects, and reports the result.
 * summary:
 *   The function initializes two local structures using
 *   alloc_and_init_small_struct_1045c524 with parameters from DAT_105a5c18. It sends a
 *   block with ID 4 and another with ID 5 using dispatch_actuator_drive_command, passing
 *   data from DAT_105a9fcc and a buffer prepared by format_string_to_buffer_10545140. It
 *   then compares values retrieved via read_byte_at_offset_six and
 *   read_byte_at_offset_seven from the two structures. The comparison result (0 or 1) is
 *   passed to wait_for_state_two_with_optional_delay. Finally, it sends two more blocks
 *   with IDs 4 and 5 using data from DAT_105a9ff0 and DAT_105aa004, and cleans up the local
 *   structures with free_heap_if_flag_set_1045c56c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_two_config_blocks_and_compare(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStackY_a8 [2];
  uint8_t auStack_68 [80];
  uint16_t auStack_18 [4];
  uint16_t auStack_10 [4];
  
  puVar5 = auStackY_a8;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9fcc/*ROM*/,6,0xff,'\0');
  iVar1 = get_or_create_singleton_object_1046d20c();
  iVar1 = *(int *)(iVar1 + 4);
  puVar5[3] = 0;
  puVar5[7] = 0;
  puVar5[0xb] = 0;
  puVar5[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_18,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb],puVar5[0xf]);
  iVar1 = call_helper_with_second_arg_1046c8d6(iVar1);
  bVar2 = read_byte_at_offset_six(auStack_18);
  bVar3 = read_byte_at_offset_seven(auStack_18);
  format_string_to_buffer_10545140(auStack_68,(void *)&DAT_105a9fd8/*ROM*/,(void *)(uint)bVar2,(void *)(uint)bVar3);
  *(uint16_t *)(puVar5 + 2) = 6;
  *(uint16_t *)(puVar5 + 6) = 0xff;
  puVar5[0xb] = 0;
  dispatch_actuator_drive_command(param_1,5,2,auStack_68,*(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6),
               puVar5[0xb]);
  puVar5[3] = 0;
  puVar5[7] = 0;
  puVar5[0xb] = 0;
  puVar5[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb],puVar5[0xf]);
  if (iVar1 == 0) {
LAB_10472af8:
    uVar4 = 0;
  }
  else {
    bVar2 = read_byte_at_offset_six(auStack_18);
    bVar3 = read_byte_at_offset_six(auStack_10);
    if (bVar2 <= bVar3) {
      bVar2 = read_byte_at_offset_seven(auStack_18);
      bVar3 = read_byte_at_offset_seven(auStack_10);
      if (bVar2 <= bVar3) goto LAB_10472af8;
    }
    uVar4 = 1;
  }
  wait_for_state_two_with_optional_delay(param_1,uVar4);
  *(uint16_t *)(puVar5 + 2) = 6;
  *(uint16_t *)(puVar5 + 6) = 0xff;
  puVar5[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9ff0/*ROM*/,*(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6),
               puVar5[0xb]);
  *(uint16_t *)(puVar5 + 2) = 6;
  *(uint16_t *)(puVar5 + 6) = 0xff;
  puVar5[0xb] = 0;
  dispatch_actuator_drive_command(param_1,5,2,(void *)&DAT_105aa004/*ROM*/,*(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6),
               puVar5[0xb]);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  free_heap_if_flag_set_1045c56c(auStack_18,2);
  return;
}
