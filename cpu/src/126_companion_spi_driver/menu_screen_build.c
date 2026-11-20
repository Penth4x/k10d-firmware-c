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

void menu_screen_build(cls_105a1a84 *param_1)

{
  int iVar1;
  
  param_1->field_0x120 = 0;
  if (param_1->field_0xdd == '\0') {
    (((vtbl_entry*)(param_1->field_0x4))[5].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj,0);
    (((vtbl_entry*)(param_1->field_0x4))[5].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj,1);
    screen_submod_reset(param_1);
    menu_build_prestep(param_1);
    iVar1 = sd_card_init_worker(param_1);
  }
  else {
    iVar1 = 1;
  }
  if ((iVar1 == 0) && (param_1->field_0x120 == 0)) {
    param_1->field_0x120 = 0xffffffff;
  }
  return;
}
