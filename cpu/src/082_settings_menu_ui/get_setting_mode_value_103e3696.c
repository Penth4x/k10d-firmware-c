/* @k10d get_setting_mode_value_103e3696 @ 0x103e3696
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific setting value (0x197000a or 0x197000f) based on a comparison
 *   with a stored RAM byte.
 * summary:
 *   The function checks if param_2 equals 0x1970014. If so, it reads a setting (id 0xc0)
 *   from the object's working copy via setting_get. It then compares this value against two
 *   global RAM bytes (bRam10596e54 and bRam10596e55) to select an index (0, 1, or default
 *   0xff). The index is used to select a return value from a local array containing
 *   0x197000a and 0x197000f. If the index is 0xff, the array access is out of bounds,
 *   likely returning garbage or a default, but the logic implies a ternary-like selection
 *   between two states based on the setting value matching one of the two RAM bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_mode_value_103e3696(cls_10596e58 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1970014) {
    auStack_10[0] = 0x197000a;
    auStack_10[1] = 0x197000f;
    uVar3 = setting_get(param_1->field_0x8,0xc0);
    iVar2 = 0xff;
    if (bRam10596e54 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596e55 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
