/* @k10d set_flag_from_lookup_result @ 0x105322e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_lookup_result(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = read_u16_from_struct_array(param_2,0);
  field_setter(*(int *)(param_1 + 0x1c),0xa7,sVar1 == 1);
  return;
}
