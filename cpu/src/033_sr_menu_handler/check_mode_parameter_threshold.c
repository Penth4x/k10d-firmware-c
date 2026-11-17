/* @k10d check_mode_parameter_threshold @ 0x10371d9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_parameter_threshold(int param_1)

{
  byte bVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  switch(*(uint32_t *)(param_1 + 0x54)) {
  default:
    goto switchD_10371db0_caseD_0;
  case 3:
    if (*(byte *)(param_1 + 0x67) < 4) {
      return 0;
    }
    goto LAB_10371dd8;
  case 5:
    bVar1 = *(byte *)(param_1 + 0x69);
    break;
  case 6:
    bVar1 = *(byte *)(param_1 + 0x6a);
    break;
  case 7:
    bVar1 = *(byte *)(param_1 + 0x6b);
  }
  if (5 < bVar1) {
LAB_10371dd8:
    uVar2 = 1;
  }
switchD_10371db0_caseD_0:
  return uVar2;
}
