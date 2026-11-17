/* @k10d parse_three_digit_ascii_value @ 0x1047888a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_three_digit_ascii_value(uint32_t param_1,byte *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (((&DAT_106220f1)[param_2[iVar4]] & 0x20) == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  while( true ) {
    if (7 < iVar4) {
      uVar1 = (*param_2 - 0x30) * 100 + (param_2[1] - 0x30) * 10 + (param_2[2] - 0x30);
      if (param_3 != (ushort *)0x0) {
        *param_3 = uVar1;
      }
      if ((uVar1 < 100) || (uVar3 = 1, 999 < uVar1)) {
        uVar3 = 0;
      }
      return uVar3;
    }
    iVar2 = check_key_state_bit(param_1,param_2[iVar4]);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return 0;
}
