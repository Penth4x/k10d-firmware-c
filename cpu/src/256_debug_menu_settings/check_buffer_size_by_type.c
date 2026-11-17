/* @k10d check_buffer_size_by_type @ 0x104f073e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Validates that param_2 meets a minimum size threshold based on the type returned by
 *   get_setting_0xb4.
 * summary:
 *   Calls get_setting_0xb4(param_1) to obtain a type index (0-4). If the type is 0, it
 *   returns 1 (valid). For types 1-4, it checks if param_2 is at least 0xd, 0x11, 0x15, or
 *   0x19 respectively, returning 1 if the size is sufficient and 0 otherwise. Returns 0 if
 *   the type is outside the 0-4 range or if the size check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_buffer_size_by_type(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_setting_0xb4(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = get_setting_0xb4(param_1);
    if (iVar1 == 1) {
      if (param_2 < 0xd) {
        return 0;
      }
    }
    else {
      iVar1 = get_setting_0xb4(param_1);
      if (iVar1 == 2) {
        if (param_2 < 0x11) {
          return 0;
        }
      }
      else {
        iVar1 = get_setting_0xb4(param_1);
        if (iVar1 == 3) {
          if (param_2 < 0x15) {
            return 0;
          }
        }
        else {
          iVar1 = get_setting_0xb4(param_1);
          if (iVar1 != 4) {
            return 0;
          }
          if (param_2 < 0x19) {
            return 0;
          }
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
