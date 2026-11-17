/* @k10d dispatch_virtual_slot_two_104cfa9e @ 0x104cfa9e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of an object stored at offset 8, conditionally calling slot 1 if
 *   the first call returns non-zero.
 * summary:
 *   The function retrieves a pointer from param_1+8 and performs a virtual call to slot 2
 *   (vtable offset 0x34) with arguments derived from param_1 and param_4. If the result is
 *   non-zero, it performs a second virtual call to slot 1 (vtable offset 0x2c) with param_2
 *   and param_3. It returns the result of the second call or zero if the first call failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_104cfa9e(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 8);
  iVar2 = (**(code **)(iVar2 + 0x34))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x30),
                     *(uint32_t *)(param_1 + 0xc),*(int *)(param_1 + 0x10) + param_4,0);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 8);
    uVar1 = (**(code **)(iVar2 + 0x2c))
                      ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x28),
                       *(uint32_t *)(param_1 + 0xc),param_2,param_3);
  }
  return uVar1;
}
