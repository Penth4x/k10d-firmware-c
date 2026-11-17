/* @k10d find_byte_in_buffer_10408282 @ 0x10408282
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_byte_in_buffer_10408282(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + 0x5d + iVar1) == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x4c);
  return -1;
}
