/* @k10d imgp_done_to_events @ 0x104fe330
 * name: verified (structural evidence: d313: decompile; runtime 7 calls per boot with the model)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Turn image-processor event 0x80000002 bits into client events: 0x20 -> 0x400001, 0x04
 *   -> 0x400002, 0x08 -> 0x400003.
 * summary:
 *   VERIFIED: d313: decompile; runtime 7 calls per boot with the model
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d48e4": ignoring multiple overlapping fields */

uint32_t imgp_done_to_events(cls_105d48e4 *param_1,uint8_t *param_2,uint param_3)

{
  if (param_2 == &SUB_80000002) {
    if ((param_3 & 0x20) != 0) {
      invoke_virtual_slot_two_104272e4((void *)&param_1->field_0x1c,0x400001,0);
    }
    if ((param_3 & 4) != 0) {
      invoke_virtual_slot_two_104272e4((void *)&param_1->field_0x34,0x400002,0);
    }
    if ((param_3 & 8) != 0) {
      invoke_virtual_slot_two_104272e4((void *)&param_1->field_0x4c,0x400003,0);
    }
  }
  return 0;
}
