/* @k10d cycle_mode_state_value @ 0x10366dd6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Advances a state byte at offset 0x56 through a defined sequence and notifies a handler.
 * summary:
 *   Checks if the integer at offset 0x18 of the object is 3. If so, it maps the current
 *   value at offset 0x56 to a new value based on param_2 (0 or non-zero), writes the new
 *   value back, and calls set_setting_0x7a with a fixed SDRAM address and the new value.
 *   Returns 1 on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cycle_mode_state_value(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    if (*(int *)((int)param_1 + 0x18) == 3) {
      switch(*(uint8_t *)((int)param_1 + 0x56)) {
      case 0:
        uVar1 = 3;
        break;
      case 1:
        uVar1 = 2;
        break;
      case 2:
        uVar1 = 5;
        break;
      case 3:
        uVar1 = 1;
        break;
      case 5:
        uVar1 = 4;
      }
      *(char *)((int)param_1 + 0x56) = (char)uVar1;
      set_setting_0x7a((void *)0x800158d4/*SDRAM*/,*(uint8_t *)((int)param_1 + 0x56));
      uVar1 = 1;
    }
  }
  else if (*(int *)((int)param_1 + 0x18) == 3) {
    switch(*(uint8_t *)((int)param_1 + 0x56)) {
    case 0:
      uVar1 = 4;
      break;
    case 1:
      uVar1 = 3;
      break;
    case 2:
      uVar1 = 1;
      break;
    case 4:
      uVar1 = 5;
      break;
    case 5:
      uVar1 = 2;
    }
    *(char *)((int)param_1 + 0x56) = (char)uVar1;
    set_setting_0x7a((void *)0x800158d4/*SDRAM*/,*(uint8_t *)((int)param_1 + 0x56));
    uVar1 = 1;
  }
  return uVar1;
}
