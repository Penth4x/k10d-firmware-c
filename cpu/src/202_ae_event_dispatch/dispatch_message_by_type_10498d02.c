/* @k10d dispatch_message_by_type_10498d02 @ 0x10498d02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Dispatches a message based on its type code, calling specific handlers for types 0x103,
 *   0x201, and 0x202.
 * summary:
 *   The function reads a 16-bit type code from param_2. If the code is 0x103, it calls
 *   query_status_code_and_map with an offset pointer and a value from param_1. If the code
 *   is 0x201, it calls compute_offset_if_type_four with similar parameters plus the message
 *   pointer and 0. If the code is 0x202, it calls check_object_type_and_query. It returns 1
 *   in all cases. The callees are not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_message_by_type_10498d02(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x103) {
    query_status_code_and_map(param_1 + 0x14,*(uint32_t *)(param_1 + 0x10), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x201) {
    compute_offset_if_type_four(param_1 + 0x14,*(int *)(param_1 + 0x10),param_2,0);
  }
  else if (sVar1 == 0x202) {
    check_object_type_and_query(param_1 + 0x14,*(uint32_t *)(param_1 + 0x10),(void *)__frv_reg_unset(6));
  }
  return 1;
}
