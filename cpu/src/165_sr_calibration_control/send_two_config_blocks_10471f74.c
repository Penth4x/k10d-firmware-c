/* @k10d send_two_config_blocks_10471f74 @ 0x10471f74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two 6-byte configuration blocks to a peripheral via a shared write helper.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with the same first three
 *   arguments (param_1, 4, 2) but different data pointers and trailing parameters. The
 *   first call uses a static data pointer and fixed values 6, 0xff, and 0. The second call
 *   constructs a small local struct on the stack with values 6, 0xff, and 0, and passes
 *   those to the same helper. It also calls get_or_create_singleton_object_10470d84 and
 *   check_flag_at_offset_0x14 to retrieve a value that is passed to
 *   wait_for_state_two_with_optional_delay, which likely performs a related state update or
 *   transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_config_blocks_10471f74(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStackY_20 [2];
  
  puVar3 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9c54/*ROM*/,6,0xff,'\0');
  iVar1 = get_or_create_singleton_object_10470d84();
  uVar2 = check_flag_at_offset_0x14(*(uint32_t *)(iVar1 + 4));
  wait_for_state_two_with_optional_delay(param_1,uVar2);
  *(uint16_t *)(puVar3 + 2) = 6;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  puVar3[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9c68/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6),
               puVar3[0xb]);
  return;
}
