/* @k10d increment_two_counters_on_nonzero_check @ 0x10477dba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a field at offset 0x1c and, if the result is non-zero, increments two
 *   counters at offsets 0x68 and 0x70.
 * summary:
 *   Reads the 4-byte value at param_1+0x1c and passes it to
 *   process_event_and_update_state_10473420. If the returned value is non-zero, it
 *   increments the integers stored at param_1+0x68 and param_1+0x70. The function returns
 *   the result of process_event_and_update_state_10473420. The caller is
 *   build_and_send_status_packet_1047b38a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int increment_two_counters_on_nonzero_check(int param_1)

{
  int iVar1;
  
  iVar1 = process_event_and_update_state_10473420(*(uint32_t *)(param_1 + 0x1c),(uint32_t *)__frv_reg_unset(5),(char *)__frv_reg_unset(6));
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  return iVar1;
}
