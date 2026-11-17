/* @k10d store_four_status_bytes @ 0x10488464
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions and stores their truncated results into specific byte
 *   offsets of the object.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls four distinct helper
 *   functions (query_object_flag_at_offset_0x1c_1046d6f8,
 *   query_object_flag_at_offset_0x1c_1046d73a, query_object_flag_at_offset_0x1c_1046d77c,
 *   check_object_flag_at_offset_0x1c), passing the first word of the object as an argument.
 *   It then stores the low byte of each return value into offsets 0x4e, 0x4f, 0x14, and
 *   0x51 of the object structure. This appears to be a status update or synchronization
 *   routine for a specific object instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_four_status_bytes(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = query_object_flag_at_offset_0x1c_1046d6f8(*param_1);
  *(char *)((int)param_1 + 0x4e) = (char)uVar1;
  uVar1 = query_object_flag_at_offset_0x1c_1046d73a(*param_1);
  *(char *)((int)param_1 + 0x4f) = (char)uVar1;
  uVar1 = query_object_flag_at_offset_0x1c_1046d77c(*param_1);
  *(char *)(param_1 + 0x14) = (char)uVar1;
  uVar1 = check_object_flag_at_offset_0x1c(*param_1);
  *(char *)((int)param_1 + 0x51) = (char)uVar1;
  return;
}
