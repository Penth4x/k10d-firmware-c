/* @k10d dispatch_virtual_property_set @ 0x10463f28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Dispatches a property update to a virtual method based on a selector index.
 * summary:
 *   The function selects a virtual method slot at offset 0x4c of the object pointed to by
 *   *param_1. It passes a derived 'this' pointer (param_1 + offset 0x48), a selector index
 *   (0-6) derived from param_2, and a value derived from param_3. For selectors 0, 1, 2,
 *   and 3, it calls helper functions extract_byte_1_from_param and return_second_argument
 *   to process the value before the virtual call. The specific meaning of the properties
 *   and the object type is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_property_set(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint8_t uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = *param_1;
    sVar1 = *(short *)(iVar4 + 0x48);
    uVar2 = extract_byte_1_from_param(param_1,param_3 & 0xffff);
    (**(code **)(iVar4 + 0x4c))((int)sVar1 + (int)param_1,0,uVar2,0xff);
    iVar4 = *param_1;
    sVar1 = *(short *)(iVar4 + 0x48);
    uVar3 = return_second_argument(param_1,(char)(param_3 & 0xffff));
    (**(code **)(iVar4 + 0x4c))((int)sVar1 + (int)param_1,1,uVar3,0xff);
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,2,param_3 & 0xff,0xff);
  }
  else if (param_2 == 2) {
    iVar4 = *param_1;
    sVar1 = *(short *)(iVar4 + 0x48);
    uVar2 = extract_byte_1_from_param(param_1,param_3 & 0xffff);
    (**(code **)(iVar4 + 0x4c))((int)sVar1 + (int)param_1,3,uVar2,0xff);
    iVar4 = *param_1;
    sVar1 = *(short *)(iVar4 + 0x48);
    uVar3 = return_second_argument(param_1,(char)(param_3 & 0xffff));
    (**(code **)(iVar4 + 0x4c))((int)sVar1 + (int)param_1,4,uVar3,0xff);
  }
  else if (param_2 == 3) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,5,param_3 & 0xff,0xff);
  }
  else if (param_2 == 4) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,6,param_3 & 0xff,0xff);
  }
  return;
}
