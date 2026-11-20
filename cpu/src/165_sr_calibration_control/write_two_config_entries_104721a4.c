/* @k10d write_two_config_entries_104721a4 @ 0x104721a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Writes two 6-byte configuration records to a target object via a helper function.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice to write data from two
 *   different source addresses (DAT_105a9d30 and DAT_105a9d40) into the object pointed to
 *   by param_1. It uses a local stack buffer to hold parameters (length 6, value 0xff,
 *   terminator 0) for the second write. It also calls
 *   wait_for_state_two_with_optional_delay with param_1 and 0, likely to reset or
 *   initialize a state within the object between the two writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_entries_104721a4(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStackY_20 [2];
  
  puVar1 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9d30/*ROM*/,6,0xff,'\0');
  wait_for_state_two_with_optional_delay(param_1,0);
  *(uint16_t *)(puVar1 + 2) = 6;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  puVar1[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9d40/*ROM*/,*(uint16_t *)(puVar1 + 2),*(uint16_t *)(puVar1 + 6),
               puVar1[0xb]);
  return;
}
