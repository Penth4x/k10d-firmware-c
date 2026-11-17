/* @k10d find_byte_in_16_byte_array @ 0x104082a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_byte_in_16_byte_array(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + 0xa9 + iVar1) == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return -1;
}
