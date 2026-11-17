/* @k10d update_mode_indicator_byte @ 0x103d93fc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode-specific indicator byte into the object and triggers a UI refresh.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object. It calls setting_get with ID
 *   0x5b to retrieve a configuration value, then compares it against a list of specific hex
 *   constants (0x1800017-0x1800056). Based on the match, it selects a byte value from the
 *   global array at 0x1059655c and writes it to either offset 0x20 or 0x21 of the object.
 *   Finally, it calls render_two_objects_by_setting_103d9b2a to likely update the display
 *   or state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_mode_indicator_byte(int *param_1,int param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  param_1[6] = param_2;
  setting_get(param_1[2],0x5b);
  iVar1 = param_1[6];
  uVar2 = uRam1059655c;
  if ((((iVar1 == 0x1800017) || (uVar2 = uRam1059655d, iVar1 == 0x180001a)) ||
      (uVar2 = uRam1059655e, iVar1 == 0x180001d)) ||
     ((uVar2 = uRam1059655f, iVar1 == 0x1800020 || (uVar2 = uRam10596560, iVar1 == 0x1800023)))) {
    iVar1 = 0x20;
  }
  else {
    uVar2 = uRam10596567;
    if (((((iVar1 != 0x180002f) && (iVar1 != 0x1800039)) &&
         ((iVar1 != 0x1800043 &&
          (((uVar2 = uRam10596568, iVar1 != 0x180002d && (iVar1 != 0x1800037)) &&
           (iVar1 != 0x1800041)))))) &&
        ((uVar2 = uRam10596569, iVar1 != 0x180002b && (iVar1 != 0x1800035)))) &&
       (iVar1 != 0x180003f)) {
      uVar2 = uRam10596561;
      if (((iVar1 != 0x180004c) && (uVar2 = uRam10596562, iVar1 != 0x180004e)) &&
         ((uVar2 = uRam10596563, iVar1 != 0x1800050 &&
          (((uVar2 = uRam10596564, iVar1 != 0x1800052 && (uVar2 = uRam10596565, iVar1 != 0x1800054))
           && (uVar2 = uRam10596566, iVar1 != 0x1800056)))))) {
        return;
      }
      *(uint8_t *)((int)param_1 + 0x21) = uVar2;
      empty_virtual_method();
      goto LAB_103d958e;
    }
    iVar1 = 0x21;
  }
  *(uint8_t *)(iVar1 + (int)param_1) = uVar2;
LAB_103d958e:
  render_two_objects_by_setting_103d9b2a(param_1);
  return;
}
