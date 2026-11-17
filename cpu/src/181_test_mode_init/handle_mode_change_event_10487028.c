/* @k10d handle_mode_change_event_10487028 @ 0x10487028
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Processes a mode change event by clearing the object or setting a flag and invoking a
 *   callback.
 * summary:
 *   This virtual method (slot 2) handles an event indicated by param_2. If param_2 is 2 and
 *   a specific byte at offset 0x1a is non-zero, it returns NULL. If param_2 is 1, it sets a
 *   byte at offset 0x31 to 1 and calls set_flag_at_offset_0x11 with the object pointer.
 *   Otherwise, it returns the object pointer unchanged.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * handle_mode_change_event_10487028(uint32_t *param_1,int param_2)

{
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x1a) != '\0') {
      param_1 = (uint32_t *)0x0;
    }
  }
  else if (param_2 == 1) {
    *(uint8_t *)((int)param_1 + 0x31) = 1;
    set_flag_at_offset_0x11(*param_1);
  }
  return param_1;
}
