/* @k10d dispatch_virtual_method_by_type @ 0x104a8f70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual method call on an object based on a type code returned by a helper
 *   function.
 * summary:
 *   The function calls map_mode_to_bitmask with a global pointer and a 16-bit value from
 *   param_1 to obtain a type code. Depending on the code (1, 2, 4, or 8), it performs a
 *   virtual method call on the object pointed to by *param_2 using different vtable offsets
 *   (0x14, 0x1c, or 0x24). For codes 1 and 2, it first calls return_max_of_two_104a8b48 to
 *   prepare an argument. The return value is the result of the virtual call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_virtual_method_by_type(int param_1,int *param_2,uint32_t param_3,uint32_t param_4)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = map_mode_to_bitmask(_DAT_80049078/*SDRAM*/,*(uint16_t *)(param_1 + 2));
  if (iVar2 == 1) {
    iVar2 = *param_2;
    sVar1 = *(short *)(iVar2 + 0x10);
    uVar3 = return_max_of_two_104a8b48(4,*(uint32_t *)(param_1 + 4));
    uVar3 = (**(code **)(iVar2 + 0x14))((int)sVar1 + (int)param_2,param_4,uVar3,param_3);
  }
  else if (iVar2 == 2) {
    iVar2 = *param_2;
    sVar1 = *(short *)(iVar2 + 0x18);
    uVar3 = return_max_of_two_104a8b48(2,*(uint32_t *)(param_1 + 4));
    uVar3 = (**(code **)(iVar2 + 0x1c))((int)sVar1 + (int)param_2,param_4,uVar3,param_3);
  }
  else if (iVar2 == 4) {
    uVar3 = (**(code **)(*param_2 + 0x24))
                      ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_4,
                       *(uint32_t *)(param_1 + 4),param_3);
  }
  else if (iVar2 == 8) {
    if (*(short *)(param_1 + 2) == 0xc) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x24))
                ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_4,*(int *)(param_1 + 4) << 1,
                 param_3);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
