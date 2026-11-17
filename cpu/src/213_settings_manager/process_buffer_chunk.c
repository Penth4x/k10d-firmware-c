/* @k10d process_buffer_chunk @ 0x104aedc4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_buffer_chunk(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[9] != 0) {
    uVar4 = (uint)param_1[9] / (uint)param_1[0xd];
    iVar1 = dispatch_param5_status_handler(param_1,param_1[0xb],param_1[8],uVar4,(int *)param_1[10]);
    param_1[0xb] = param_1[0xb] + uVar4;
    iVar3 = param_1[0xc];
    param_1[0xc] = iVar3 - uVar4;
    uVar4 = (iVar3 - uVar4) * param_1[0xd];
    if ((iVar1 != 0) && (uVar4 != 0)) {
      if (uVar4 < (uint)param_1[9]) {
        param_1[9] = uVar4;
      }
      uVar2 = invoke_virtual_slot_1(param_1,param_1[8],param_1[9]);
      return uVar2;
    }
  }
  zero_struct_fields_20_to_30_104aef4a(param_1);
  return 0;
}
