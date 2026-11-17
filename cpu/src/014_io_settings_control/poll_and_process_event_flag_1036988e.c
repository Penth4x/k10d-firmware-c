/* @k10d poll_and_process_event_flag_1036988e @ 0x1036988e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a status byte and, if set, clears flags and calls a handler in a loop or once
 *   based on a secondary condition.
 * summary:
 *   The function first checks if the byte at offset 0x2a8 in the object is non-zero. If so,
 *   it initializes several flag bytes at offsets 0x2b1-0x2b4 and 0x2c1. It then branches
 *   based on the byte at offset 0x2ba: if zero, it enters a loop calling
 *   invoke_virtual_slot_and_helpers_10369a66 while dispatch_on_mode_field_104bb972 returns
 *   non-zero and offset 0x2c2 is zero; otherwise, it calls
 *   invoke_virtual_slot_and_helpers_10369a66 once if dispatch_on_mode_field_104bb972
 *   returns non-zero and clears offset 0x2ba. The specific roles of the callees and the
 *   object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_and_process_event_flag_1036988e(void *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x2a8) != '\0') {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b2) = 1;
    *(uint8_t *)((int)param_1 + 0x2b1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b3) = 0;
    *(uint8_t *)((int)param_1 + 0x2b4) = 0;
    if (*(char *)((int)param_1 + 0x2ba) == '\0') {
      cVar1 = *(char *)((int)param_1 + 0x2b2);
      while (((cVar1 != '\0' && (iVar2 = dispatch_on_mode_field_104bb972((void *)((int)param_1 + 0x3c)), iVar2 != 0)) &&
             (*(char *)((int)param_1 + 0x2c2) == '\0'))) {
        invoke_virtual_slot_and_helpers_10369a66(param_1);
        cVar1 = *(char *)((int)param_1 + 0x2b2);
      }
    }
    else {
      iVar2 = dispatch_on_mode_field_104bb972((void *)((int)param_1 + 0x3c));
      if (iVar2 != 0) {
        invoke_virtual_slot_and_helpers_10369a66(param_1);
      }
      *(uint8_t *)((int)param_1 + 0x2ba) = 0;
    }
  }
  return;
}
