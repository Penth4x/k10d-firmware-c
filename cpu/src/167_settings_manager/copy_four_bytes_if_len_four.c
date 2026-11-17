/* @k10d copy_four_bytes_if_len_four @ 0x104776c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool copy_four_bytes_if_len_four(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = count_string_bytes(param_2);
  if (iVar1 == 4) {
    *(char *)(param_1 + 0x11) = *param_2;
    *(char *)(param_1 + 0x12) = param_2[1];
    *(char *)(param_1 + 0x13) = param_2[2];
    *(char *)(param_1 + 0x14) = param_2[3];
  }
  return iVar1 == 4;
}
