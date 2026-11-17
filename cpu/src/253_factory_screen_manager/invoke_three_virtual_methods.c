/* @k10d invoke_three_virtual_methods @ 0x104e7488
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_three_virtual_methods(uint32_t param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x14))((int)*(short *)(*param_2 + 0x10) + (int)param_2,0);
  (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0);
  (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2);
  return 1;
}
