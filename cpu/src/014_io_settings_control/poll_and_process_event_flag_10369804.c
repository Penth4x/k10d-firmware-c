/* @k10d poll_and_process_event_flag_10369804 @ 0x10369804
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and calls a handler in a loop or once based on a secondary
 *   condition.
 * summary:
 *   The function first checks if a byte at offset 0x2a8 in the object is non-zero. If so,
 *   it initializes several flag bytes at offsets 0x2b1-0x2b4 and 0x2c1. It then checks a
 *   flag at 0x2b9. If 0x2b9 is zero, it enters a loop that calls dispatch_by_mode_field
 *   (likely a status check) and invoke_object_teardown_sequence (likely a handler) as long
 *   as the flag at 0x2b1 is set, dispatch_by_mode_field returns non-zero, and the flag at
 *   0x2c2 is clear. If 0x2b9 is non-zero, it performs a single check and handler call, then
 *   clears the 0x2b9 flag. The specific camera subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_process_event_flag_10369804(void *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x2a8) != '\0') {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b1) = 1;
    *(uint8_t *)((int)param_1 + 0x2b2) = 0;
    *(uint8_t *)((int)param_1 + 0x2b3) = 0;
    *(uint8_t *)((int)param_1 + 0x2b4) = 0;
    if (*(char *)((int)param_1 + 0x2b9) == '\0') {
      cVar1 = *(char *)((int)param_1 + 0x2b1);
      while (((cVar1 != '\0' && (iVar2 = dispatch_by_mode_field((void *)((int)param_1 + 0x3c)), iVar2 != 0)) &&
             (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
        invoke_object_teardown_sequence(param_1);
        cVar1 = *(char *)((int)param_1 + 0x2b1);
      }
    }
    else {
      iVar2 = dispatch_by_mode_field((void *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        invoke_object_teardown_sequence(param_1);
      }
      *(uint8_t *)((int)param_1 + 0x2b9) = 0;
    }
  }
  return;
}
