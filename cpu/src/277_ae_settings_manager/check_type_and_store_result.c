/* @k10d check_type_and_store_result @ 0x1051e158
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_type_and_store_result(uint32_t param_1,int param_2,void *param_3)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = *(short *)((int)param_3 + 2) == 3;
  if (bVar2) {
    uVar1 = read_u16_from_struct_array((int)param_3,0);
    *(uint *)(param_2 + 0x4c) = (uint)uVar1;
  }
  return bVar2;
}
