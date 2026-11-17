/* @k10d call_handler_with_offset_arg @ 0x104febd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_handler_with_offset_arg(int param_1)

{
  (*(code *)0x10451f6c/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
  return;
}
