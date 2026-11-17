/* @k10d update_entry_and_dispatch @ 0x10522794
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_entry_and_dispatch(int *param_1,int param_2,uint param_3)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,5,1);
  *(char *)(param_1 + 9) = (char)uVar1;
  uVar1 = dispatch_virtual_slot_two_104af096((int)param_1,4,1);
  *(char *)((int)param_1 + 0x25) = (char)uVar1;
  uVar1 = 0;
  if ((uint)param_1[0xb] <= param_3) {
    param_1[10] = param_2;
    uVar1 = invoke_virtual_slot_1(param_1,param_2,(uint)*(ushort *)(param_1 + 9));
  }
  return uVar1;
}
