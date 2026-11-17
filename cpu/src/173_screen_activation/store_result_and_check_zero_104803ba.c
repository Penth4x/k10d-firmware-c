/* @k10d store_result_and_check_zero_104803ba @ 0x104803ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_104803ba(int param_1)

{
  int iVar1;
  
  iVar1 = call_function_at_0x1053e4f4();
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
