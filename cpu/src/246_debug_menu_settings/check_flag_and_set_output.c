/* @k10d check_flag_and_set_output @ 0x104d846c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_flag_and_set_output(int param_1,uint8_t *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = attempt_three_step_initialization((uint32_t)param_1);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x2b5c) == '\0')) {
    *param_2 = 1;
  }
  return iVar1;
}
