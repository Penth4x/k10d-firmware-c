/* @k10d dispatch_event_with_flag @ 0x104b76ea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Dispatches an event to a handler, optionally via a fallback, and sets a status flag.
 * summary:
 *   Checks if the first field of the object in param_1 is zero. If so, it calls
 *   console_printf with a fixed address and the remaining parameters. It then invokes a
 *   function pointer stored at 0x1048ef1a, passing the object and param_2. Finally, it sets
 *   the byte at offset 9 of the object to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_flag(int *param_1,void *param_2,void *param_3,void *param_4)

{
  if (*param_1 == 0) {
    console_printf((void *)0x105b8b84/*ROM*/,param_2,param_3,param_4);
  }
  (*(code *)0x1048ef1a/*ROM*/)(*param_1,param_2);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
