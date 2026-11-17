/* @k10d insert_entry_into_ring_buffer @ 0x104b423e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t insert_entry_into_ring_buffer(byte *param_1,int param_2,ushort param_3,short param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 8);
  while( true ) {
    if (iVar3 == 0) {
      (*(int **)(param_1 + 8))[uVar2] = param_2;
      iVar3 = *(int *)(param_1 + 4);
      uVar1 = pack_two_bytes_into_short(param_1,param_3,param_4);
      *(ushort *)(iVar3 + uVar2 * 2) = uVar1;
      return 1;
    }
    uVar2 = uVar2 + 1 & 0xff;
    if ((uint)*param_1 * (uint)param_1[1] <= uVar2) break;
    iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
  }
  return 0;
}
