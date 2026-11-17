/* @k10d read_two_virtual_values_and_combine @ 0x10463d3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_two_virtual_values_and_combine(int *param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,1,0xff);
  sVar2 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,0,0xff);
  uVar1 = pack_two_byte_value_10465228(param_1,uVar1,sVar2);
  return (uint)uVar1;
}
