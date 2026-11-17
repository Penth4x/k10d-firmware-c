/* @k10d dispatch_virtual_call_with_param_10532876 @ 0x10532876
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual function pointer from an object and invokes it with a computed this-
 *   pointer and a transformed parameter.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1, then accesses offset
 *   0xd8 to get a base pointer. It reads a short value at offset 0x40 of that base and a
 *   function pointer at offset 0x44. It calls an unknown function at 0x104a8c94 with
 *   param_2, then invokes the virtual function with the adjusted this-pointer (base + short
 *   offset) and the result of the helper call. No camera-specific subsystem is identifiable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_param_10532876(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0xd8);
  iVar4 = *piVar3;
  sVar1 = *(short *)(iVar4 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (**(code **)(iVar4 + 0x44))((int)piVar3 + (int)sVar1,uVar2);
  return;
}
