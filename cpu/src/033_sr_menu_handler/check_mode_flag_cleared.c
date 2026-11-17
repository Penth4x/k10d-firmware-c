/* @k10d check_mode_flag_cleared @ 0x10371d5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_flag_cleared(int param_1)

{
  char cVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  switch(*(uint32_t *)(param_1 + 0x54)) {
  default:
    goto switchD_10371d6e_caseD_0;
  case 3:
    cVar1 = *(char *)(param_1 + 0x67);
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x69);
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x6a);
    goto joined_r0x10371d94;
  case 7:
    cVar1 = *(char *)(param_1 + 0x6b);
joined_r0x10371d94:
    if (cVar1 != '\0') {
      return 0;
    }
    goto LAB_10371d96;
  }
  if (cVar1 == '\0') {
LAB_10371d96:
    uVar2 = 1;
  }
switchD_10371d6e_caseD_0:
  return uVar2;
}
