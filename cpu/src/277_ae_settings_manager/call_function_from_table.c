/* @k10d call_function_from_table @ 0x1051e952
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_function_from_table(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1051f00e/*ROM*/)(*(uint32_t *)(param_1 + 0xc + param_2 * 4));
  return uVar1;
}
