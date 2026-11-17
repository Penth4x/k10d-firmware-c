/* @k10d query_object_state_at_offset_28 @ 0x10364116
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks a condition on param_1 and returns a value from
 *   process_sensor_readout_buffer_1036457e if a byte at offset 0x1c is non-zero.
 * summary:
 *   Calls set_pointer_by_mode_byte first. Then calls dispatch_event_with_buffer_lock with
 *   param_1, 6, and a pointer to param_1+0x1c. If the result is 1, it checks the byte at
 *   param_1+0x1c via read_byte_at_offset_four_1051e508. If that byte is non-zero, it
 *   returns the result of process_sensor_readout_buffer_1036457e(param_1); otherwise it
 *   returns 0. If the initial check fails, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_state_at_offset_28(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  char cVar3;
  
  set_pointer_by_mode_byte(__frv_reg_unset(4));
  iVar1 = dispatch_event_with_buffer_lock(param_1,6,(void *)((int)param_1 + 0x1c));
  if (iVar1 == 1) {
    cVar3 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
    if (cVar3 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = process_sensor_readout_buffer_1036457e(param_1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
