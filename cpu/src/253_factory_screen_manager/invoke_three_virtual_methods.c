/* @k10d invoke_three_virtual_methods @ 0x104e7488
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_three_virtual_methods(uint32_t param_1,int *param_2)

{
  (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0);
  (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,0);
  (((vtbl_entry*)(*param_2))[5].fn)((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2);
  return 1;
}
