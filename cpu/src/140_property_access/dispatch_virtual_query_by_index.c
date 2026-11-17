/* @k10d dispatch_virtual_query_by_index @ 0x1046402a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual method call on an object based on an index parameter, combining
 *   two results for some cases.
 * summary:
 *   The function uses a switch on param_2 to select which virtual slot (offset 0x5c) to
 *   call on the object pointed to by param_1. For indices 0 and 2, it calls the virtual
 *   method twice with different arguments and passes the results to
 *   pack_two_byte_value_10465228. For indices 1, 3, and 4, it returns the result of a
 *   single virtual call directly. The virtual call idiom indicates slot 9 (0x5c/8 - 1). The
 *   specific camera subsystem is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_virtual_query_by_index(int *param_1,int param_2)

{
  ushort uVar2;
  short sVar3;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,1,0xff);
    sVar3 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,0,0xff);
  }
  else {
    if (param_2 == 1) {
      uVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,2,0xff)
      ;
      return uVar1;
    }
    if (param_2 != 2) {
      if (param_2 == 3) {
        uVar1 = (**(code **)(*param_1 + 0x5c))
                          ((int)*(short *)(*param_1 + 0x58) + (int)param_1,5,0xff);
        return uVar1;
      }
      if (param_2 != 4) {
        return 0;
      }
      uVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,6,0xff)
      ;
      return uVar1;
    }
    uVar2 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,4,0xff);
    sVar3 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,3,0xff);
  }
  uVar2 = pack_two_byte_value_10465228(param_1,uVar2,sVar3);
  return (uint)uVar2;
}
