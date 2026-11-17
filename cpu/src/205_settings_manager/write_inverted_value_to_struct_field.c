/* @k10d write_inverted_value_to_struct_field @ 0x1049c270
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_inverted_value_to_struct_field(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = read_u16_from_struct_array(param_2,0);
  if (uVar1 != 0) {
    *(uint *)(*(int *)(param_1 + 0x10) + 0x28) = (uVar1 ^ 0xffff) - 0x3039;
  }
  return;
}
