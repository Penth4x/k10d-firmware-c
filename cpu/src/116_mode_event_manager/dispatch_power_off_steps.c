/* @k10d dispatch_power_off_steps @ 0x104312b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of power-off subroutines based on a bitmask of flags in param_2.
 * summary:
 *   The function takes a context pointer and a flag word. It first calls
 *   poll_event_until_clear if any bit in the range 0x2-0x3fe is set. It then uses a nested
 *   if-else chain to select one of eight specific subroutines
 *   (call_helper_on_struct_field_10433fa6 through call_helper_on_struct_field_10434042)
 *   based on which of the bits 0x40, 0x80, 0x100, 0x200, 4, 8, or 0x10 is set. It
 *   additionally calls toggle_flag_and_call_handler_10433f62 if bit 1 is set and
 *   power_off_save_settings if bit 5 is set. It returns 1 if any step was executed,
 *   otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_power_off_steps(void *param_1,uint param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0x3fe) != 0) {
    poll_event_until_clear(param_1,0);
  }
  if ((param_2 & 0x40) == 0) {
    if ((param_2 & 0x80) == 0) {
      if ((param_2 & 0x100) == 0) {
        if ((param_2 & 0x200) == 0) {
          if ((param_2 & 4) == 0) {
            if ((param_2 & 8) == 0) {
              if ((param_2 & 0x10) != 0) {
                call_helper_on_struct_field_10434028(*(uint32_t *)((int)param_1 + 0x30));
                uVar1 = 1;
              }
            }
            else {
              call_helper_on_struct_field_10434042(*(uint32_t *)((int)param_1 + 0x30));
              uVar1 = 1;
            }
          }
          else {
            call_helper_on_struct_field_1043400e(*(uint32_t *)((int)param_1 + 0x30));
            uVar1 = 1;
          }
        }
        else {
          call_helper_on_struct_field_10433ff4(*(uint32_t *)((int)param_1 + 0x30));
          uVar1 = 1;
        }
      }
      else {
        call_helper_on_struct_field_10433fc0(*(uint32_t *)((int)param_1 + 0x30));
        uVar1 = 1;
      }
    }
    else {
      call_helper_on_struct_field_10433fda(*(uint32_t *)((int)param_1 + 0x30));
      uVar1 = 1;
    }
  }
  else {
    call_helper_on_struct_field_10433fa6(*(uint32_t *)((int)param_1 + 0x30));
    uVar1 = 1;
  }
  if ((param_2 & 2) != 0) {
    toggle_flag_and_call_handler_10433f62(*(uint32_t *)((int)param_1 + 0x30));
    uVar1 = 1;
  }
  if ((param_2 & 0x20) != 0) {
    power_off_save_settings(*(uint32_t *)((int)param_1 + 0x30));
    uVar1 = 1;
  }
  return uVar1;
}
