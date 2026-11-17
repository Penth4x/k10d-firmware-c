/* @k10d poll_and_process_pending_event @ 0x10369918
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a pending flag and, if set, clears state bytes and calls a handler in a loop
 *   while a condition holds.
 * summary:
 *   The function first checks if the byte at offset 0x2a8 in the object is non-zero. If so,
 *   it initializes several state bytes (0x2b1-0x2b4, 0x2c1). It then checks a flag at
 *   offset 0x2b3 (699). If that flag is zero, it enters a loop that calls
 *   dispatch_on_mode_field_104bb9c2 with a pointer to offset 0x3c; if that returns non-zero
 *   and offset 0x2c2 is zero, it calls invoke_virtual_slot_six_10369aa0 and re-checks the
 *   flag. If the initial flag was non-zero, it calls dispatch_on_mode_field_104bb9c2 once,
 *   and if non-zero, calls invoke_virtual_slot_six_10369aa0, then clears the flag at 0x2b3.
 *   The callees are not named, so the specific subsystem is unknown, but the pattern is a
 *   standard event polling and processing loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_process_pending_event(void *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x2a8) != '\0') {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b3) = 1;
    *(uint8_t *)((int)param_1 + 0x2b1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b2) = 0;
    *(uint8_t *)((int)param_1 + 0x2b4) = 0;
    if (*(char *)((int)param_1 + 699) == '\0') {
      cVar1 = *(char *)((int)param_1 + 0x2b3);
      while (((cVar1 != '\0' && (iVar2 = dispatch_on_mode_field_104bb9c2((void *)((int)param_1 + 0x3c)), iVar2 != 0)) &&
             (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
        invoke_virtual_slot_six_10369aa0(param_1);
        cVar1 = *(char *)((int)param_1 + 0x2b3);
      }
    }
    else {
      iVar2 = dispatch_on_mode_field_104bb9c2((void *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        invoke_virtual_slot_six_10369aa0(param_1);
      }
      *(uint8_t *)((int)param_1 + 699) = 0;
    }
  }
  return;
}
