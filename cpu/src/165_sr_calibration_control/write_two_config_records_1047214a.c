/* @k10d write_two_config_records_1047214a @ 0x1047214a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Writes two 6-byte configuration records to a target object via a helper function.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice to write data blocks of length
 *   6. The first call uses a static data pointer (DAT_105a9d0c) and a value of 0xff. The
 *   second call uses a different static data pointer (DAT_105a9d1c) and values stored on
 *   the stack (6, 0xff, 0). It also calls wait_for_state_two_with_optional_delay with the
 *   first parameter and 0 in between the two writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_records_1047214a(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStackY_20 [2];
  
  puVar1 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9d0c/*ROM*/,6,0xff,'\0');
  wait_for_state_two_with_optional_delay(param_1,0);
  *(uint16_t *)(puVar1 + 2) = 6;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  puVar1[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9d1c/*ROM*/,*(uint16_t *)(puVar1 + 2),*(uint16_t *)(puVar1 + 6),
               puVar1[0xb]);
  return;
}
