/* @k10d dispatch_two_param_operation @ 0x1046f984
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Selects and invokes one or two helper functions based on a 0-3 selector value.
 * summary:
 *   The function branches on param_2. For values 0 and 2 it calls
 *   build_and_send_two_byte_payload_10470c54, for 1 and 2 it calls issue_sr_dma_command,
 *   and for 3 it calls build_and_send_two_byte_payload_10470d38 with an additional argument
 *   of 3. It passes param_1 and param_3 to all callees. The specific subsystem is not
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_param_operation(int param_1,int param_2,uint32_t param_3)

{
  uint32_t r7_in;
  
  if (param_2 == 0) {
    build_and_send_two_byte_payload_10470c54(param_1,param_3);
  }
  else if (param_2 == 1) {
    issue_sr_dma_command(param_1,param_3);
  }
  else if (param_2 == 2) {
    build_and_send_two_byte_payload_10470c54(param_1,param_3);
    issue_sr_dma_command(param_1,param_3);
  }
  else if (param_2 == 3) {
    build_and_send_two_byte_payload_10470d38((int)(param_1),(uint32_t)(3),(uint32_t)(param_3),(void *)(r7_in));
  }
  return;
}
