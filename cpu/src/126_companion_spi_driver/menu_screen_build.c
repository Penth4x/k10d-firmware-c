/* @k10d menu_screen_build @ 0x104478de
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed sd_card_init_entry)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes the SD/MMC card subsystem if not already built, invoking virtual setup
 *   hooks and the card init worker.
 * summary:
 *   Checks the initialization flag at offset 0xdd. If uninitialized, it calls virtual slots
 *   5 and 6 on the object, executes screen_submod_reset and menu_build_prestep, and then
 *   calls sd_card_init_worker. If the worker returns 0 and the status flag at 0x120 is 0,
 *   it sets 0x120 to 0xffffffff to indicate a failure or specific state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void menu_screen_build(void *param_1)

{
  int iVar1;
  
  *(uint32_t *)((int)param_1 + 0x120) = 0;
  if (*(char *)((int)param_1 + 0xdd) == '\0') {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1,0);
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1,1);
    screen_submod_reset(param_1);
    menu_build_prestep(param_1);
    iVar1 = sd_card_init_worker(param_1);
  }
  else {
    iVar1 = 1;
  }
  if ((iVar1 == 0) && (*(int *)((int)param_1 + 0x120) == 0)) {
    *(uint32_t *)((int)param_1 + 0x120) = 0xffffffff;
  }
  return;
}
