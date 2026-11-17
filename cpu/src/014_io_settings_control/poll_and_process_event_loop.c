/* @k10d poll_and_process_event_loop @ 0x103699a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 0x2a8, initializes state bytes, and loops calling a handler
 *   while a condition holds.
 * summary:
 *   The function first checks if the byte at param_1+0x2a8 is non-zero. If so, it sets
 *   several state bytes (0x2c1, 0x2b4, 0x2b1-0x2b3) to specific values. It then branches
 *   based on the byte at param_1+700. If 700 is zero, it enters a loop that calls
 *   dispatch_on_mode_field_104bba12 with param_1+0x3c and
 *   invoke_virtual_slot_and_helpers_10369ada with param_1, continuing as long as the byte
 *   at 0x2b4 is non-zero, dispatch_on_mode_field_104bba12 returns non-zero, and the byte at
 *   0x2c2 is zero. If 700 is non-zero, it calls dispatch_on_mode_field_104bba12 once, and
 *   if that returns non-zero, calls invoke_virtual_slot_and_helpers_10369ada, then clears
 *   the byte at 700. The specific roles of the callees and the object structure are not
 *   provided, so the behavior is described mechanically as a conditional polling/processing
 *   loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_process_event_loop(void *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x2a8) != '\0') {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b4) = 1;
    *(uint8_t *)((int)param_1 + 0x2b1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b2) = 0;
    *(uint8_t *)((int)param_1 + 0x2b3) = 0;
    if (*(char *)((int)param_1 + 700) == '\0') {
      cVar1 = *(char *)((int)param_1 + 0x2b4);
      while (((cVar1 != '\0' && (iVar2 = dispatch_on_mode_field_104bba12((void *)((int)param_1 + 0x3c)), iVar2 != 0)) &&
             (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
        invoke_virtual_slot_and_helpers_10369ada(param_1);
        cVar1 = *(char *)((int)param_1 + 0x2b4);
      }
    }
    else {
      iVar2 = dispatch_on_mode_field_104bba12((void *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        invoke_virtual_slot_and_helpers_10369ada(param_1);
      }
      *(uint8_t *)((int)param_1 + 700) = 0;
    }
  }
  return;
}
