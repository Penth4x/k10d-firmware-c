/* @k10d get_setting_by_mode_flag_104f147e @ 0x104f147e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a camera setting value selected by a mode flag, using a sub-block offset of
 *   0x128 when the flag is set.
 * summary:
 *   If param_2 is 0, it reads a field at param_1+0x20, passes it to
 *   compute_three_values_from_object, and masks the result to 8 bits. Otherwise it calls
 *   check_object_property_43 twice; if the second call is non-zero it sets offset 0x128,
 *   else 0, then calls setting_get with the id at param_1+0xc and that offset. The final
 *   value is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_setting_by_mode_flag_104f147e(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = compute_three_values_from_object(*(uint32_t *)(param_1 + 0x20));
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      uVar1 = check_object_property_43(param_1);
      if (uVar1 == 0) {
        return 0;
      }
      iVar2 = 0x128;
    }
    uVar1 = setting_get(*(int *)(param_1 + 0xc),iVar2);
  }
  return uVar1;
}
