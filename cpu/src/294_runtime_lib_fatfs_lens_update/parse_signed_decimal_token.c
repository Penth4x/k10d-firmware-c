/* @k10d parse_signed_decimal_token @ 0x10544c70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int parse_signed_decimal_token(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = *param_1;
  while (((&DAT_106220f1)[bVar1] & 4) != 0) {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  bVar2 = false;
  if (*param_1 == 0x2d) {
    bVar2 = true;
  }
  else if (*param_1 != 0x2b) goto LAB_10544ca0;
  param_1 = param_1 + 1;
LAB_10544ca0:
  iVar3 = 0;
  while (((&DAT_106220f1)[*param_1] & 0x20) != 0) {
    iVar3 = iVar3 * 10 + (uint)*param_1 + -0x30;
    param_1 = param_1 + 1;
  }
  if (bVar2) {
    iVar3 = -iVar3;
  }
  return iVar3;
}
