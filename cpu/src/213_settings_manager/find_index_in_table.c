/* @k10d find_index_in_table @ 0x104ac8d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte find_index_in_table(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = (int *)&DAT_105b7324/*ROM*/;
  bVar1 = 0;
  do {
    if (param_1 == *piVar2) {
      return bVar1;
    }
    bVar1 = bVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar1 < 0x20);
  return 0;
}
