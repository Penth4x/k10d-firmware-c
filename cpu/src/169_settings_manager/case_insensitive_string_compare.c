/* @k10d case_insensitive_string_compare @ 0x1047dd46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int case_insensitive_string_compare(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)*param_1;
    param_1 = param_1 + 1;
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)*param_2;
    param_2 = param_2 + 1;
    if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}
