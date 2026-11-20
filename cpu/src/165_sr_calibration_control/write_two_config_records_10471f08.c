/* @k10d write_two_config_records_10471f08 @ 0x10471f08
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Writes two 3-byte configuration records to a device via a helper function.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice to write data. The first call
 *   uses a static data pointer and fixed parameters. The second call constructs a 3-byte
 *   payload on the stack (values 6, 0xff, 0) and passes it to the same helper. It also
 *   queries a state via run_memory_write_tests and passes a boolean result to
 *   wait_for_state_two_with_optional_delay.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_config_records_10471f08(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_20 [2];
  
  puVar2 = auStackY_20;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9c34/*ROM*/,6,0xff,'\0');
  iVar1 = run_memory_write_tests(param_1);
  wait_for_state_two_with_optional_delay(param_1,iVar1 == 7);
  *(uint16_t *)(puVar2 + 2) = 6;
  *(uint16_t *)(puVar2 + 6) = 0xff;
  puVar2[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9c40/*ROM*/,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6),
               puVar2[0xb]);
  return;
}
