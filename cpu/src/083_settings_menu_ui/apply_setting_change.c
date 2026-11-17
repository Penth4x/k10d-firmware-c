/* @k10d apply_setting_change @ 0x103e6e5e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a new setting value in the object and dispatches it to the settings block or a
 *   specific handler based on the setting ID.
 * summary:
 *   Writes param_2 to offset 0x18 of the object. If param_2 matches specific IDs
 *   (0x1850012-0x1850018), it stores a byte from global RAM at offset 0x20 and calls
 *   render_two_objects_by_setting_103e703e. For other specific IDs, it calls setting_set
 *   with a hardcoded setting index and a value from global RAM. The function acts as a
 *   virtual method (slot 9) for updating configuration state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_setting_change(int param_1,int param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x18) = param_2;
  uVar1 = uRam1059720c;
  if ((((param_2 == 0x1850012) || (uVar1 = uRam1059720d, param_2 == 0x1850014)) ||
      (uVar1 = uRam1059720e, param_2 == 0x1850016)) || (uVar1 = uRam1059720f, param_2 == 0x1850018))
  {
    *(uint8_t *)(param_1 + 0x20) = uVar1;
    render_two_objects_by_setting_103e703e((int *)__frv_reg_unset(4));
  }
  else {
    if (param_2 == 0x1850020) {
      uVar3 = (uint)bRam10597210;
      uVar2 = 0x74;
    }
    else if (param_2 == 0x185001f) {
      uVar3 = (uint)bRam10597211;
      uVar2 = 0x74;
    }
    else if (param_2 == 0x1850026) {
      uVar3 = (uint)bRam10597212;
      uVar2 = 0x75;
    }
    else {
      if (param_2 != 0x1850025) {
        return;
      }
      uVar3 = (uint)bRam10597213;
      uVar2 = 0x75;
    }
    setting_set(*(int *)(param_1 + 8),uVar2,uVar3);
  }
  return;
}
