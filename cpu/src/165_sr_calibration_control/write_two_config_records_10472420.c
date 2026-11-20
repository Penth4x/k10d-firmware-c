/* @k10d write_two_config_records_10472420 @ 0x10472420
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Writes two 6-byte configuration records to a target object via a helper function.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with the same first argument
 *   (param_1) and fixed parameters (4, 2), but different data pointers (&DAT_105a9e2c and
 *   &DAT_105a9e3c). It also calls wait_for_state_two_with_optional_delay once with param_1
 *   and 0. The second call to dispatch_actuator_drive_command uses values (6, 0xff, 0) that
 *   are also stored on the stack, suggesting these are part of the record structure or
 *   parameters. The specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_records_10472420(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStackY_20 [2];
  
  puVar1 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9e2c/*ROM*/,6,0xff,'\0');
  wait_for_state_two_with_optional_delay(param_1,0);
  *(uint16_t *)(puVar1 + 2) = 6;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  puVar1[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9e3c/*ROM*/,*(uint16_t *)(puVar1 + 2),*(uint16_t *)(puVar1 + 6),
               puVar1[0xb]);
  return;
}
