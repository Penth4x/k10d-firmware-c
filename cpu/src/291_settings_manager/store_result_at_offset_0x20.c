/* @k10d store_result_at_offset_0x20 @ 0x10532216
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x20(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = read_u16_from_struct_array(param_2,0);
  *(uint *)(param_1 + 0x20) = (uint)uVar1;
  return;
}
