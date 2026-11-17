/* @k10d compute_centered_text_offset @ 0x103fece4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_centered_text_offset(void *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x30;
  cVar1 = *param_4;
  while (cVar1 != '\0') {
    if (cVar1 == '\r') {
      uVar2 = uVar2 + 0x30 & 0xffff;
    }
    param_4 = param_4 + 1;
    cVar1 = *param_4;
  }
  uVar3 = 0;
  if (param_3 == 1) {
    uVar3 = (int)(param_2 - uVar2) / 2;
  }
  else if (param_3 == 4) {
    uVar3 = param_2 - uVar2;
  }
  if (uVar3 != (uVar3 & 0xfffffffe)) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}
