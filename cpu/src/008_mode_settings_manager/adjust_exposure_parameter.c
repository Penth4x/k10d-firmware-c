/* @k10d adjust_exposure_parameter @ 0x10366e70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a specific exposure parameter (ISO, EV, etc.) within a camera
 *   state structure and notifies a companion object.
 * summary:
 *   The function takes a pointer to a state object and a direction flag (0 for decrement,
 *   non-zero for increment). It switches on a mode field at offset 0x18 to select one of
 *   six parameter slots (offsets 0x54-0x5a). It checks bounds (e.g., max 0xf for slots 5
 *   and 6, max 2 for slot 1) before modifying the value. After updating the local value, it
 *   calls a specific handler function (set_setting_0x78 through set_setting_0x7e) with a
 *   fixed pointer (0x800158d4) and the new value. The caller is a virtual method,
 *   suggesting this is part of a UI or control interface for adjusting camera settings like
 *   ISO or exposure compensation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10366e84) overlaps instruction at (ram,0x10366e82)
    */

uint32_t adjust_exposure_parameter(void *param_1,int param_2)

{
  uint32_t uVar1;
  char cVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    switch(*(uint32_t *)((int)param_1 + 0x18)) {
    case 1:
      if (*(char *)((int)param_1 + 0x54) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x54) + -1;
      break;
    case 2:
      if (*(char *)((int)param_1 + 0x55) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x55) + -1;
LAB_10366ee2:
      *(char *)((int)param_1 + 0x55) = cVar2;
      set_setting_0x79((void *)0x800158d4/*SDRAM*/,cVar2);
      return 1;
    case 3:
      if (*(char *)((int)param_1 + 0x57) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x57) + -1;
LAB_10366f06:
      *(char *)((int)param_1 + 0x57) = cVar2;
      set_setting_0x7b((void *)0x800158d4/*SDRAM*/,cVar2);
      return 1;
    case 4:
      if (*(char *)((int)param_1 + 0x58) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x58) + -1;
LAB_10366f2a:
      *(char *)((int)param_1 + 0x58) = cVar2;
      set_setting_0x7c((void *)0x800158d4/*SDRAM*/,cVar2);
      return 1;
    case 5:
      if (*(char *)((int)param_1 + 0x59) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x59) + -1;
LAB_10366f50:
      *(char *)((int)param_1 + 0x59) = cVar2;
      set_setting_0x7d((void *)0x800158d4/*SDRAM*/,cVar2);
      return 1;
    case 6:
      if (*(char *)((int)param_1 + 0x5a) == '\0') {
        return 0;
      }
      cVar2 = *(char *)((int)param_1 + 0x5a) + -1;
LAB_10366f76:
      *(char *)((int)param_1 + 0x5a) = cVar2;
      set_setting_0x7e((void *)0x800158d4/*SDRAM*/,cVar2);
      uVar1 = 1;
    default:
      goto switchD_10366f9e_default;
    }
  }
  else {
    switch(*(uint32_t *)((int)param_1 + 0x18)) {
    case 1:
      if (2 < *(byte *)((int)param_1 + 0x54)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x54) + 1;
      break;
    case 2:
      if (1 < *(byte *)((int)param_1 + 0x55)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x55) + 1;
      goto LAB_10366ee2;
    case 3:
      if (1 < *(byte *)((int)param_1 + 0x57)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x57) + 1;
      goto LAB_10366f06;
    case 4:
      if (1 < *(byte *)((int)param_1 + 0x58)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x58) + 1;
      goto LAB_10366f2a;
    case 5:
      if (0xf < *(byte *)((int)param_1 + 0x59)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x59) + 1;
      goto LAB_10366f50;
    case 6:
      if (0xf < *(byte *)((int)param_1 + 0x5a)) {
        return 0;
      }
      cVar2 = *(byte *)((int)param_1 + 0x5a) + 1;
      goto LAB_10366f76;
    default:
      return 0;
    }
  }
  *(char *)((int)param_1 + 0x54) = cVar2;
  set_setting_0x78((void *)0x800158d4/*SDRAM*/,cVar2);
  uVar1 = 1;
switchD_10366f9e_default:
  return uVar1;
}
