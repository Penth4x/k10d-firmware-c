/* @k10d write_two_config_records_10472660 @ 0x10472660
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Writes two configuration records to a target object via a helper function.
 * summary:
 *   Calls dispatch_actuator_drive_command twice with different data pointers (DAT_105a9f04
 *   and DAT_105a9f14) and parameters. Calls wait_for_state_two_with_optional_delay in
 *   between. The second call uses values stored on the stack (6, 0xff, 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_records_10472660(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStackY_20 [2];
  
  puVar1 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9f04/*ROM*/,6,0xff,'\0');
  wait_for_state_two_with_optional_delay(param_1,0);
  *(uint16_t *)(puVar1 + 2) = 6;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  puVar1[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9f14/*ROM*/,*(uint16_t *)(puVar1 + 2),*(uint16_t *)(puVar1 + 6),
               puVar1[0xb]);
  return;
}
