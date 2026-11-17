/* @k10d configure_timer_channel_pair @ 0x10421066
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Configures two timer channels (offsets 0xec/0xf0) with mode and period values based on
 *   a 0/1 mode parameter.
 * summary:
 *   The function takes a structure pointer and a mode (0 or 1). For mode 0 it calls
 *   0x10454796 with 0x8000 and 0x10454692 with 0x400; for mode 1 it calls 0x10454796 with
 *   0xc000 and 0x10454692 with 0x600. It then calls 0x1045695c with 0 on four consecutive
 *   fields (0xd4-0xe0). The callees are not identified in the database, so the specific
 *   hardware subsystem (timer, PWM, or other) cannot be confirmed from the brief alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_timer_channel_pair(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),0x8000);
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),0x8000);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),0);
    uVar1 = 0x400;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),0xc000);
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),0xc000);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)((int)param_1 + 0xec),0x200);
    uVar1 = 0x600;
  }
  (*(code *)0x10454692/*ROM*/)(*(uint32_t *)((int)param_1 + 0xf0),uVar1);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xd4),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xd8),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xdc),0);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)((int)param_1 + 0xe0),0);
  return;
}
