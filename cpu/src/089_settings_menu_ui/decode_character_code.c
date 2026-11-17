/* @k10d decode_character_code @ 0x103fec06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short decode_character_code(void *param_1,byte *param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = -1;
  iVar2 = check_whitespace_and_high_byte((int)param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = check_byte_above_0x9f(param_1,param_2);
    if (iVar2 == 0) {
      iVar2 = check_byte_in_range(param_1,param_2);
      if (iVar2 == 0) {
        iVar2 = is_printable_ascii_byte(param_1,param_2);
        if (iVar2 != 0) {
          sVar3 = *param_2 - 0x20;
        }
      }
      else {
        sVar3 = *param_2 - 0x40;
      }
    }
    else {
      sVar3 = *param_2 - 0xa0;
    }
  }
  else {
    psVar1 = *(short **)((*(byte *)((int)param_1 + 0x58) - 9) * 0xc + 0x10363140/*ROM*/);
    if (*psVar1 != 0) {
      do {
        if (*psVar1 == *(short *)param_2) {
          return psVar1[1];
        }
        psVar1 = psVar1 + 2;
      } while (*psVar1 != 0);
      sVar3 = -1;
    }
  }
  return sVar3;
}
