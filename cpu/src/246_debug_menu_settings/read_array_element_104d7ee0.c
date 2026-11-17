/* @k10d read_array_element_104d7ee0 @ 0x104d7ee0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_array_element_104d7ee0(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + param_2 * 4);
  }
  return uVar1;
}
